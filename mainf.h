#pragma once
#include "MyForm.h"
#include "trans.h"
#include "User.h"
int balance;
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
	/// Summary for mainf
	/// </summary>
	public ref class mainf : public System::Windows::Forms::Form
	{
	public:
		mainf(void)
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
		~mainf()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ TRANS;
	private: System::Windows::Forms::Button^ SUM;
	private: System::Windows::Forms::Button^ LOG;
	private: System::Windows::Forms::TextBox^ dis;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TRANS = (gcnew System::Windows::Forms::Button());
			this->SUM = (gcnew System::Windows::Forms::Button());
			this->LOG = (gcnew System::Windows::Forms::Button());
			this->dis = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(363, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(385, 76);
			this->label1->TabIndex = 0;
			this->label1->Text = L"WELCOME";
			// 
			// TRANS
			// 
			this->TRANS->BackColor = System::Drawing::SystemColors::Info;
			this->TRANS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TRANS->Location = System::Drawing::Point(448, 201);
			this->TRANS->Name = L"TRANS";
			this->TRANS->Size = System::Drawing::Size(226, 71);
			this->TRANS->TabIndex = 1;
			this->TRANS->Text = L"TRANSACTION";
			this->TRANS->UseVisualStyleBackColor = false;
			this->TRANS->Click += gcnew System::EventHandler(this, &mainf::TRANS_Click);
			// 
			// SUM
			// 
			this->SUM->BackColor = System::Drawing::SystemColors::Info;
			this->SUM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SUM->Location = System::Drawing::Point(448, 358);
			this->SUM->Name = L"SUM";
			this->SUM->Size = System::Drawing::Size(226, 71);
			this->SUM->TabIndex = 2;
			this->SUM->Text = L"SUMMARY";
			this->SUM->UseVisualStyleBackColor = false;
			this->SUM->Click += gcnew System::EventHandler(this, &mainf::SUM_Click);
			// 
			// LOG
			// 
			this->LOG->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->LOG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LOG->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->LOG->Location = System::Drawing::Point(895, 549);
			this->LOG->Name = L"LOG";
			this->LOG->Size = System::Drawing::Size(168, 38);
			this->LOG->TabIndex = 3;
			this->LOG->Text = L"LOGOUT";
			this->LOG->UseVisualStyleBackColor = false;
			this->LOG->Click += gcnew System::EventHandler(this, &mainf::LOG_Click);
			// 
			// dis
			// 
			this->dis->Location = System::Drawing::Point(448, 444);
			this->dis->Name = L"dis";
			this->dis->Size = System::Drawing::Size(226, 22);
			this->dis->TabIndex = 4;
			this->dis->TextChanged += gcnew System::EventHandler(this, &mainf::textBox1_TextChanged);
			// 
			// mainf
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1087, 599);
			this->Controls->Add(this->dis);
			this->Controls->Add(this->LOG);
			this->Controls->Add(this->SUM);
			this->Controls->Add(this->TRANS);
			this->Controls->Add(this->label1);
			this->Name = L"mainf";
			this->Text = L"mainf";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void TRANS_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Application::Run(gcnew trans);



	}
	private: System::Void LOG_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}

		   public: User^ user = nullptr;
	private: System::Void SUM_Click(System::Object^ sender, System::EventArgs^ e) {
		
		
		try {
			String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=CLIENTDATA;Integrated Security=True";
			SqlConnection sqlConn(connString);
			//try {

			sqlConn.Open();
			//}

			//try {

			String^ sqlQuery = "SELECT * FROM user WHERE pan=am";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@am", balance);
			//command.Parameters->AddWithValue("@pwd", pes);
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
				"Operations", MessageBoxButtons::OK);
		}
		this->dis->Text=System::Convert::ToString(balance);

	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	 
	}
};
};
