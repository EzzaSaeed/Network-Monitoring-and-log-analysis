#ifndef REPORT_h
#define REPORT_h
#include<iostream>
#include <string>
 using namespace std;
  class Report{
  	private:
  		string generateddate;
  		string analysissummary;
  		string securityfindings;
  		string recommendation;
  	public:
  		Report();
  		Report(string date, string as, string sf, string r);
  		
  	string getgenerateddate() const;
  	string getanalysissummary() const;
  	string getsecurityfindings() const;
  	string getrecommendation () const;
  	
  	void displayreport() const;
  	
  };
  
  #endif
