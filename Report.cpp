#include "REPORT.h"

Report::Report() {

     generateddate="";
      analysissummary="";
      securityfindings="";
      recommendation="";

}

Report::Report(string date, string as, string sf, string r)
{
    generateddate = date;
    analysissummary = as;
    securityfindings = sf;
    recommendation = r;
}

string Report::getgenerateddate() const {
    return generateddate;
}

string Report::getanalysissummary() const {
    return analysissummary;
}

string Report::getsecurityfindings() const {
    return securityfindings;
}

string Report::getrecommendation() const {
    return recommendation;
}

void Report::displayreport() const {
    cout << "Generated date: " << generateddate << endl;
    cout << "Analysis summary: " << analysissummary << endl;
    cout << "Security findings: " << securityfindings << endl;
    cout << "Recommendation: " << recommendation << endl;
}
