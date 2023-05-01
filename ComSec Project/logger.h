#pragma once
#include <fstream>
#include <ctime>

enum LogPriority{TraceP, DebugP,InfoP,WarnP,ErrorP,FatalP};
class Logger {
private:
	static LogPriority v;
	static const char* filePath;
public:
	static void SetV(LogPriority n) { v = n; }
	static void log(LogPriority x, std::string message) {
		std::time_t current_time = std::time(nullptr);
		char timestamp[20];
		std::strftime(timestamp, sizeof(timestamp), "%Y-%m-%d %H:%M:%S", std::localtime(&current_time));
		if (x >= v) {
			std::ofstream logfile("../Logs/logfile.txt", std::ios_base::app);
			switch (x) {
			case TraceP:logfile << "Trace:\t"; break;
			case DebugP:logfile << "Debug:\t"; break;
			case InfoP:logfile << "Info:\t"; break;
			case WarnP:logfile << "Warn:\t"; break;
			case ErrorP:logfile << "Error:\t"; break;
			case FatalP:logfile << "Fatal:\t"; break;
			}
			logfile << "[" << timestamp << "] " << message << std::endl;
			logfile.close();
		}
		
		
	}
};
LogPriority Logger::v = TraceP;
const char* Logger::filePath = "../Logs/log.txt";