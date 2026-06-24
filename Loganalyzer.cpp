#include "Loganalyzer.h"

Loganalyzer::Loganalyzer(){
}
void Loganalyzer::loadlogs() {
	ifstream file ("logs.txt");
	if (!file){
		cout<<"unable to open logs.txt"<<endl;
		return;
	}
	
	string line ;
	while (getline(file,line)) {
		stringstream ss(line);
		string timestamp;
		string sourceIP;
		string destinationIP;
		string eventType;
		string statusCodestr;
		string message;
		
	getline (ss,timestamp, ',');
	getline (ss, sourceIP, ',');
	getline (ss, destinationIP,',');
	getline (ss, eventType,',');
	getline (ss, statusCodestr, ',');
	getline (ss, message, ',');
	
	int statusCode =stoi (statusCodestr) ;
	  logs.push_back (
	       NetworkLog (timestamp, sourceIP, destinationIP, eventType, statusCode, message));
		   
	}
	file.close();
	cout<<"Logs loaded successfully"<<endl;
	}
	
	void Loganalyzer::showstatistics() {
		cout<<"............STATISTICS.........."<<endl;
		cout<<"total request:"<<logs.size() <<endl;
		set<string> uniqueIPs;
		
		map<string, int> ipCount;
		int errorCount=0;
		for (size_t i=0; i<logs.size(); i++) {
			uniqueIPs.insert(logs[i].getsourceIP()) ;
			ipCount[logs[i].getsourceIP()] ++; 
			if (logs[i].getstatusCode()>=400) {
			
				errorCount++;
			}
		}
		cout<<"unique IP address:"<<uniqueIPs.size()<<endl;
		cout<<"error request:"<<errorCount<<endl;
		
		string mostActiveIP="";
		int maxRequest=0;
		
		for (map<string, int>::iterator it=ipCount.begin(); it!=ipCount.end(); it++) {
			if (it->second>maxRequest) {
				maxRequest=it->second;
				mostActiveIP=it->first;
			}
		}
		cout<<"most active IP:"<<mostActiveIP<<endl;
		cout<<"request count:"<<maxRequest<<endl;
	}
	
	
	  void Loganalyzer::dectectthreats() {
	  	map<string, int> failedlogins;
	  	int alertID=1;
	  	for (size_t i=0; i<logs.size(); i++) {
	  		cout<<logs[i].geteventType()<<endl;
	  	
	  		if (logs[i].geteventType()=="login fail") {
	  			failedlogins[logs[i].getsourceIP()] ++;
			  }
		}
		  
		  for (map<string, int>::iterator it= failedlogins.begin(); it!=failedlogins.end(); ++it) {
		  	if (it->second>=3) {
		  		alerts.push_back(
		  		    Alert (alertID++, "repeated failed login", "high", "multiple failed login attempts from IP:"+it->first, "now" ));
				  
			  }
		  }
		  if (alerts.empty()) {
		  	cout<<"no threats detect"<<endl;
		  	return;
		  }
		  cout<<"...........ALERT..........."<<endl;
		  for (size_t i=0; i<alerts.size(); i++) {
		  	alerts[i].displayalert();	
		  	cout<<"...................."<<endl;
			  	  }
	  }
	  
	  void Loganalyzer::searchbyIP() {
	  	string ip;
	  	cout<<"Enter IP address:";
	  	cin>>ip;
	  	bool found=false;
	  	for (size_t i=0; i<logs.size(); i++) {
	  		if (logs[i].getsourceIP()==ip) {
	  			logs[i].displayLog();
	  			cout<<"..................."<<endl;
	  			found=true;
			  }
		  }
		  if (!found) {
		  	cout<<"no record found"<<endl;
		  }
	  }
	  
	  void Loganalyzer::searchbyeventType() {
	  	string eventType;
	  	cout<<"Enter event type:";
	  	cin>>eventType;
	  	bool found=false;
	  	for (size_t i=0; i<logs.size(); i++) {
	  		if (logs[i].geteventType()==eventType) {
	  			logs[i].displayLog();
	  			cout<<"..................."<<endl;
	  			found=true;
			  }
		  }
		  if (!found) {
		  	cout<<"no record found"<<endl;
		  }
	  }
	  
	  void Loganalyzer::generatereport() {
	  	ofstream file ("report.txt") ;
	  	if (!file) {
	  		cout<<"unable to create report"<<endl;
	  		return;
		  }
		  file <<"................NETWORK MONITORING REPORT...................."<<endl;
		  file<<"total logs:"<<logs.size()<<endl;
		  file<<"total alerts:"<<alerts.size()<<endl;
		  file <<"security alerts"<<endl;
		  for (size_t i=0; i<alerts.size(); i++) {
		  	file<<alerts[i].getalertType()<<"|"<<alerts[i].getseverity()<<endl;
		  }
		  file.close();
		  cout<<"Report generated successfully"<<endl;
	  }
	  
	  
