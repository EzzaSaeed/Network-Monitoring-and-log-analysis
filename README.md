🌐 Network Monitoring & Log Analysis System (C++)
A C++ based Network Monitoring & Log Analysis System built using Object-Oriented Programming (OOP) and the Standard Template Library (STL). The system parses network log files, analyzes traffic behavior, detects suspicious activity, and generates structured security reports.

🎯 Objective
To build a system capable of:

Processing large network log files
Detecting anomalies and suspicious activities
Generating analytical insights and security alerts
Providing search and reporting features
⚙️ Features
📊 Log Processing
Load and parse structured log files
Handle large datasets efficiently
Manage invalid or corrupted records gracefully
📈 Activity Analysis
Total network requests
Unique IP address tracking
Most active IP detection
Error frequency analysis
🚨 Threat Detection
Multiple failed login detection
Excessive requests from a single IP
Rule-based alert generation
Real-time-style security monitoring
🔍 Search & Filtering
Search logs by IP address
Search logs by event type
Filter suspicious activities
📄 Reporting System
Activity summary report
Security findings summary
Generated alerts summary
Exported report file (report.txt)
🧱 Project Structure
NetworkMonitoringSystem/
├── NetworkLog.h        # Log entry data model
├── NetworkLog.cpp
├── Alert.h             # Alert/threat data model
├── Alert.cpp
├── Report.h            # Report generation logic
├── Report.cpp
├── LogAnalyzer.h        # Core analysis engine
├── LogAnalyzer.cpp
├── main.cpp             # Entry point / menu-driven interface
├── logs.txt             # Sample input log data
├── report.txt           # Generated output report
└── README.md
📝 Log File Format
Each line in logs.txt follows a comma-separated format:

timestamp,ip_address,event_type,status
Example:

2024-06-01 10:00:01,192.168.1.10,LOGIN,FAILED
2024-06-01 10:00:05,192.168.1.10,LOGIN,FAILED
2024-06-01 10:00:09,192.168.1.10,LOGIN,SUCCESS
2024-06-01 10:01:12,10.0.0.5,REQUEST,200
2024-06-01 10:01:13,10.0.0.5,REQUEST,500
Field	Description
timestamp	Date and time of the event
ip_address	Source IP making the request
event_type	LOGIN, REQUEST, ERROR, etc.
status	Outcome (SUCCESS, FAILED, status code, or error message)
🛠️ Technologies Used
C++ (C++11 or later)
OOP – Classes, encapsulation, modular design
STL – vector, map, set, string
File Handling – fstream for reading logs / writing reports
Modular Programming – Separate header/source files per component
🔮 Future Improvements
Real-time log streaming instead of static file input
Configurable threat-detection thresholds
Export reports in JSON/CSV format
GUI or web dashboard for visualization
Multi-threaded log processing for very large files
👤 Author
Ezza Saeed
