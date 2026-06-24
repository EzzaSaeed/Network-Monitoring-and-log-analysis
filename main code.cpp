#include <iostream>
#include "Loganalyzer.h"

 using namespace std;
  int main (){
  	Loganalyzer analyzer;
  	int choice;
  	do {
  		cout<<"......................NETWORK MONITORING SYSTEM................."<<endl;
  		cout<<"1) Load logs"<<endl;
  		cout<<"2) Show statistics"<<endl;
  		cout<<"3) Detect threats"<<endl;
  		cout<<"4) Search by IP"<<endl;
  		cout<<"5) Search by event type"<<endl;
  		cout<<"6) generate report"<<endl;
  		cout<<"7) exit"<<endl;
  		
  		cout<<"enter choice:";
  		cin>>choice;
  		switch (choice) {
  			case 1:
  				analyzer.loadlogs();
  				break;
  			case 2:
  				analyzer.showstatistics();
  				break;
  			case 3:
  				analyzer.dectectthreats();
  				break;
  			case 4:
  				analyzer.searchbyIP();
  				break;
  			case 5:
  				analyzer.searchbyeventType();
  				break;
  			case 6:
  				analyzer.generatereport();
  				break;
  			case 7:
  				cout<<"EXISTING........"<<endl;
  				break;
  			default:
  				cout<<"Invalid choice!"<<endl;
		  }
		  
	  }  while (choice!=7);
  }
