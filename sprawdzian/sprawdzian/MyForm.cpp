#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	sprawdzian::MyForm form;
	Application::Run(% form);
}

//button i labelka na kt�rej wyswietla siesumaryczny czas przebywania kursora na buttonie w sekundach