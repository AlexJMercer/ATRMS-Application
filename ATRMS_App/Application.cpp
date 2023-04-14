#include "LoginForm.h"
#include "Dashboard.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ATRMSApp::MainForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr)
	{
		//MessageBox::Show("Successful Authentication of " + user->name + ".",
		//	"Authentication Success", MessageBoxButtons::OK);

		ATRMSApp::Dashboard dash(user);
		Application::Run(% dash);
		
	}
	else
	{
		MessageBox::Show("Canceled Authentication.",
			"Authentication Failed", MessageBoxButtons::OK);
	}

	return 0;
}