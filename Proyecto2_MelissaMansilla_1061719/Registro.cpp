#include "Registro.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int aux(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Proyecto2MelissaMansilla1061719::Registro form;
	Application::Run(%form);
	return 0;
}
