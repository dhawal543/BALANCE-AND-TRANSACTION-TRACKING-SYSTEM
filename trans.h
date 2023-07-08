#pragma once
#include "MyForm.h"
#include "mainf.h" 
#include "User.h"
//#include "stdafx.h"
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
	/// Summary for trans
	/// </summary>
	public ref class trans : public System::Windows::Forms::Form
	{
	public:
		trans(void)
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
		~trans()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ BENI;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ benei;
	private: System::Windows::Forms::TextBox^ amoun;
	private: System::Windows::Forms::TextBox^ passs;
	private: System::Windows::Forms::Button^ tran;




	private: System::Windows::Forms::Button^ button2;
	protected:


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
			this->BENI = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->benei = (gcnew System::Windows::Forms::TextBox());
			this->amoun = (gcnew System::Windows::Forms::TextBox());
			this->passs = (gcnew System::Windows::Forms::TextBox());
			this->tran = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(303, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(394, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"TRANSACTION";
			// 
			// BENI
			// 
			this->BENI->AutoSize = true;
			this->BENI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BENI->Location = System::Drawing::Point(49, 153);
			this->BENI->Name = L"BENI";
			this->BENI->Size = System::Drawing::Size(276, 29);
			this->BENI->TabIndex = 1;
			this->BENI->Text = L"ENTER BENIFICIARY";
			this->BENI->Click += gcnew System::EventHandler(this, &trans::label2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(157, 348);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 29);
			this->label2->TabIndex = 2;
			this->label2->Text = L"PASSWORD";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(198, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(127, 29);
			this->label3->TabIndex = 3;
			this->label3->Text = L"AMOUNT";
			// 
			// benei
			// 
			this->benei->Location = System::Drawing::Point(368, 159);
			this->benei->Name = L"benei";
			this->benei->Size = System::Drawing::Size(444, 22);
			this->benei->TabIndex = 4;
			this->benei->TextChanged += gcnew System::EventHandler(this, &trans::textBox1_TextChanged);
			// 
			// amoun
			// 
			this->amoun->Location = System::Drawing::Point(368, 255);
			this->amoun->Name = L"amoun";
			this->amoun->Size = System::Drawing::Size(444, 22);
			this->amoun->TabIndex = 5;
			this->amoun->TextChanged += gcnew System::EventHandler(this, &trans::textBox2_TextChanged);
			// 
			// passs
			// 
			this->passs->Location = System::Drawing::Point(368, 355);
			this->passs->Name = L"passs";
			this->passs->Size = System::Drawing::Size(444, 22);
			this->passs->TabIndex = 6;
			this->passs->TextChanged += gcnew System::EventHandler(this, &trans::textBox3_TextChanged);
			// 
			// tran
			// 
			this->tran->BackColor = System::Drawing::SystemColors::Info;
			this->tran->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tran->Location = System::Drawing::Point(858, 418);
			this->tran->Name = L"tran";
			this->tran->Size = System::Drawing::Size(144, 48);
			this->tran->TabIndex = 7;
			this->tran->Text = L"TRANSFER";
			this->tran->UseVisualStyleBackColor = false;
			this->tran->Click += gcnew System::EventHandler(this, &trans::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Info;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(873, 139);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(129, 43);
			this->button2->TabIndex = 8;
			this->button2->Text = L"ADD";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &trans::button2_Click);
			// 
			// trans
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1014, 478);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tran);
			this->Controls->Add(this->passs);
			this->Controls->Add(this->amoun);
			this->Controls->Add(this->benei);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->BENI);
			this->Controls->Add(this->label1);
			this->Name = L"trans";
			this->Text = L"trans";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

		   public: User^ user = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ bene = this->benei->Text;
		String^ amount = this->amoun->Text;
		String^ pes = this->passs->Text;
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=CLIENTDATA;Integrated Security=True";
			SqlConnection sqlConn(connString);
			//try {

			sqlConn.Open();
			//}

			//try {

			String^ sqlQuery = "SELECT * FROM user WHERE pan=am AND password=pwd";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@am", amount);
			command.Parameters->AddWithValue("@pwd", pes);
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
				user->pan = System::Convert::ToString(System::Convert::ToInt32(reader->GetString(5))- System::Convert::ToInt32(amount));
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
				MessageBox::Show("bene or password is incorrect",
					"bene or Password Error", MessageBoxButtons::OK);
			}

			//catch (Exception^ a) {
			//	MessageBox::Show("dkhdfhg",
			//		"Database Connection Error", MessageBoxButtons::OK);
			//}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed",
				"transaction", MessageBoxButtons::OK);
		}
		this->Close();

	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
