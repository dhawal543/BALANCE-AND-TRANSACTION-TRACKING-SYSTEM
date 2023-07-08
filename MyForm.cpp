#include "MyForm.h"

#include "mainf.h"
#include "trans.h"
#include"user.h"
//#include "stdafx.h"



using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	tracking::MyForm loginForm;

	loginForm.ShowDialog();
	User^ user = loginForm.user;

	if (user != nullptr) {
		MessageBox::Show("done",
			"LOGIN.cpp", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Authentication Canceled",
			"LOGIN.cpp", MessageBoxButtons::OK);
	}
};