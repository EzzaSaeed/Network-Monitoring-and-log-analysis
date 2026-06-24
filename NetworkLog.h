#ifndef NETWORKLOG_h
#define NETWORKLOG_h
#include <iostream>
#include<string>

 using namespace std;
  class NetworkLog{
  	private:
  		string timestamp;
  		string sourceIP;
  		string destinationIP;
  		string eventType;
  		int statusCode;
  		string message;
  	public:
  		NetworkLog();
  		NetworkLog(string ts, string si, string di, string et, int code, string msg) ;
  		
  		string gettimestamp() const;
  		string getsourceIP() const;
  		string getdestinationIP() const;
  		string geteventType() const;
  		int getstatusCode() const;
  		string getmessage() const;
  		  
  		  void displayLog () const;
			
		  
  		
  };
 #endif
