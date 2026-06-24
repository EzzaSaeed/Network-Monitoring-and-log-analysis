#ifndef Loganalyzer_h
#define Loganalyzer_h
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>


 #include "NETWORKLOG.h"
 #include"ALERT.h"
 #include "REPORT.h"
 
 using namespace std;
 
 class Loganalyzer{
 	private:
 		vector<NetworkLog>logs;
 		vector<Alert> alerts;
 	public:
 		Loganalyzer();
 		void loadlogs();
 		void showstatistics ();
 		void dectectthreats ();
 		void searchbyIP ();
 		void searchbyeventType ();
 		void generatereport();
 };
 #endif
