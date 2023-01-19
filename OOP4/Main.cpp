#include "Main.h"
#include <array>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
 void Main(cli::array<System::String ^> ^args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OOP4::Main form;
	Application::Run(% form);
}