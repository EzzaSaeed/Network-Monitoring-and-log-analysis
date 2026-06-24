#include "NetworkLog.h"

NetworkLog::NetworkLog() {
	timestamp="";
	sourceIP="";
	destinationIP="";
	eventType="";
	statusCode=0;
	message="";
}

NetworkLog::NetworkLog(string ts, string si, string di, string et, int code, string msg) {
	timestamp=ts;
	sourceIP=si;
	destinationIP=di;
	eventType=et;
	statusCode=code;
	message=msg;
	
}
  string NetworkLog::gettimestamp() const {
  	 return timestamp;
  }
  string NetworkLog::getsourceIP() const{
   	return sourceIP;
   }
  string NetworkLog::getdestinationIP() const{
    return destinationIP;
	}
  string NetworkLog::geteventType() const{
  	return eventType;
	 }
  int NetworkLog::getstatusCode() const{
  	return statusCode;
  }
   string NetworkLog::getmessage() const{
   	return message;
   }
   
   void NetworkLog::displayLog() const{
   	cout<<"Timestamp:"<<timestamp<<endl;
   	cout<<"Source IP:"<<sourceIP<<endl;
   	cout<<"Destination IP:"<<destinationIP<<endl;
   	cout<<"Event type:"<<eventType<<endl;
   	cout<<"Status code:"<<statusCode<<endl;
   	cout<<"Message:"<<message<<endl;
   }

