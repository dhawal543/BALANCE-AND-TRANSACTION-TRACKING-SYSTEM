#pragma once
#include "user.h"
#include "mainf.h"
#include "trans.h"

namespace tracking {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;
	using namespace System::Data::OleDb;
	using namespace System::Data::SqlClient;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;
	private: System::Windows::Forms::TextBox^ tbPassword;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(308, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(356, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"USER LOGIN ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(111, 153);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 29);
			this->label2->TabIndex = 1;
			this->label2->Text = L"USER ID";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(64, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"PASSWORD";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(318, 161);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(346, 22);
			this->tbEmail->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(318, 254);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(346, 22);
			this->tbPassword->TabIndex = 4;
			this->tbPassword->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(802, 374);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 41);
			this->button1->TabIndex = 5;
			this->button1->Text = L"CANCEL";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(615, 374);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 41);
			this->button2->TabIndex = 6;
			this->button2->Text = L"LOGIN";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(980, 427);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}


		   public: User^ user = nullptr;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ email = this->tbEmail->Text;
	String^ password = this->tbPassword->Text;
	String^ id = "ari";
	String^ ps = "123";

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter email and password",
			"Email or Password Empty", MessageBoxButtons::OK);
		return;
	}

	if (email == id || password == ps) {
		MessageBox::Show("succesfull",
			"logged", MessageBoxButtons::OK);
		this->Hide();
		Application::Run(gcnew mainf);

	}


	try {
		String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=CLIENTDATA;Integrated Security=True";
		SqlConnection sqlConn(connString);
		//try {

		sqlConn.Open();
		//}

		//try {

		String^ sqlQuery = "SELECT * FROM user WHERE userid=HELLO\" AND password=\"GGG\";";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);
		//}



		//catch (Exception^ a) {
		//	MessageBox::Show("dkhdfhg",
		//		"Database Connection Error", MessageBoxButtons::OK);
		//}
			//try {
		SqlDataReader^ reader = command.ExecuteReader();
		command.ExecuteReader();

		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->fname = reader->GetString(1);
			user->lname = reader->GetString(2);
			user->password = reader->GetString(3);
			user->mobile = reader->GetString(4);
			user->pan = reader->GetString(5);
			user->dob = reader->GetString(6);
			user->branchaddres = reader->GetString(7);
			user->userid = reader->GetString(8);
			user->email = reader->GetString(9);

			this->Close();
		}
		//}
	//catch (Exception^ a) {
	//	MessageBox::Show("dkhdfhg",
	//		"Database Connection Error", MessageBoxButtons::OK);
	//}

		else {
			MessageBox::Show("Email or password is incorrect",
				"Email or Password Error", MessageBoxButtons::OK);
		}

		//catch (Exception^ a) {
		//	MessageBox::Show("dkhdfhg",
		//		"Database Connection Error", MessageBoxButtons::OK);
		//}
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed",
			"Database Connection Error", MessageBoxButtons::OK);
	}
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}

