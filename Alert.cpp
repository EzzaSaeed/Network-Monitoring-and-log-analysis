#include "ALERT.h"

Alert::Alert() {
	alertID=0;
	alertType="";
	severity="";
	description="";
	timestamp="";
}

Alert::Alert(int ai, string at, string s, string d, string time) {
	alertID=ai;
	alertType=at;
	severity=s;
	description=d;
	timestamp=time;
}

  int Alert::getalertID() const{
  	return alertID;
  }
  string Alert::getalertType() const{
  	return alertType;
  }
  string Alert::getseverity() const{
  	return severity;
  }
  string Alert::getdescription() const {
  	return description;
  }
  string Alert::gettimestamp() const{
  	return timestamp;
  }
  
  
    void Alert::displayalert() const{
     cout<<"Alert id:"<<alertID<<endl;
     cout<<"Alert type:"<<alertType<<endl;
     cout<<"severity:"<<severity<<endl;
     cout<<"description:"<<description<<endl;
     cout<<"timestamp:"<<timestamp<<endl;
	}
