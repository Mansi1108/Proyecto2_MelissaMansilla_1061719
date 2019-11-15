#include "Calendario.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int calendario1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2MelissaMansilla1061719::Calendario form;
	Application::Run(%form);
	return 0;
}

