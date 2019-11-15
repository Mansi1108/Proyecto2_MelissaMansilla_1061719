#include "Actividades.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int actividades(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2MelissaMansilla1061719::Actividades form;
	Application::Run(%form);
	return 0;
}

