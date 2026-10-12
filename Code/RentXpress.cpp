#include "LoginForm.h"
#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	while (true)
	{
		RentXpress::LoginForm^ login = gcnew RentXpress::LoginForm();
		if (login->ShowDialog() != DialogResult::OK) break;    
		RentXpress::MainForm^ mf = gcnew RentXpress::MainForm();
		Application::Run(mf);
		if (!mf->LoggedOut) break;                              
	}
	return 0;
}
