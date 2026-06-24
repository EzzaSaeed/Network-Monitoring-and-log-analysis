#ifndef ALERT_h
#define ALERT_h
#include <iostream>
#include<string>
 using namespace std;
 class Alert{
 	private:
 		int alertID;
 		string alertType;
 		string severity;
 		string description;
 		string timestamp;
 	public:
 		Alert();
 		Alert(int ai, string at, string s, string d, string time) ;
 
 
   int getalertID() const;
   string getalertType() const;
   string getseverity() const;
   string getdescription () const;
   string gettimestamp() const;
   
   void displayalert() const;
};

#endif
