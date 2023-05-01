#include "pch.h"
#include "Form1.h"
#include "logger.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main() {
	Logger::log(InfoP,"Project was accessed ...");
	Logger::log(InfoP,"Build is running ...");
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinFormsProject::Form1());
	
	Logger::log(InfoP,"Project closed");
	return 0;
}