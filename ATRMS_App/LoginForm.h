#pragma once
#include "User.h"

namespace ATRMSApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ login_form;
	private: System::Windows::Forms::Button^ login_btn;
	private: System::Windows::Forms::Button^ quit_btn;
	private: System::Windows::Forms::TextBox^ usernameTextBox;
	private: System::Windows::Forms::TextBox^ passwordTextBox;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passLabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	protected:

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
			this->login_form = (gcnew System::Windows::Forms::Label());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->quit_btn = (gcnew System::Windows::Forms::Button());
			this->usernameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextBox = (gcnew System::Windows::Forms::TextBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// login_form
			// 
			this->login_form->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->login_form->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_form->Location = System::Drawing::Point(32, 29);
			this->login_form->Name = L"login_form";
			this->login_form->Size = System::Drawing::Size(141, 53);
			this->login_form->TabIndex = 0;
			this->login_form->Text = L"Login";
			this->login_form->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// login_btn
			// 
			this->login_btn->BackColor = System::Drawing::Color::DarkBlue;
			this->login_btn->FlatAppearance->BorderColor = System::Drawing::Color::DarkBlue;
			this->login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_btn->ForeColor = System::Drawing::Color::White;
			this->login_btn->Location = System::Drawing::Point(377, 309);
			this->login_btn->Margin = System::Windows::Forms::Padding(0);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(90, 40);
			this->login_btn->TabIndex = 1;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = false;
			this->login_btn->Click += gcnew System::EventHandler(this, &MainForm::login_btn_Click);
			// 
			// quit_btn
			// 
			this->quit_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->quit_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->quit_btn->FlatAppearance->BorderColor = System::Drawing::Color::DarkBlue;
			this->quit_btn->FlatAppearance->BorderSize = 2;
			this->quit_btn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->quit_btn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::White;
			this->quit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->quit_btn->ForeColor = System::Drawing::Color::DarkBlue;
			this->quit_btn->Location = System::Drawing::Point(482, 309);
			this->quit_btn->Name = L"quit_btn";
			this->quit_btn->Size = System::Drawing::Size(90, 40);
			this->quit_btn->TabIndex = 2;
			this->quit_btn->Text = L"Quit";
			this->quit_btn->UseVisualStyleBackColor = false;
			this->quit_btn->Click += gcnew System::EventHandler(this, &MainForm::quit_btn_Click);
			// 
			// usernameTextBox
			// 
			this->usernameTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->usernameTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernameTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->usernameTextBox->ForeColor = System::Drawing::Color::White;
			this->usernameTextBox->Location = System::Drawing::Point(40, 154);
			this->usernameTextBox->Margin = System::Windows::Forms::Padding(0);
			this->usernameTextBox->Name = L"usernameTextBox";
			this->usernameTextBox->Size = System::Drawing::Size(235, 27);
			this->usernameTextBox->TabIndex = 3;
			// 
			// passwordTextBox
			// 
			this->passwordTextBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->passwordTextBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->passwordTextBox->ForeColor = System::Drawing::Color::White;
			this->passwordTextBox->Location = System::Drawing::Point(40, 245);
			this->passwordTextBox->Name = L"passwordTextBox";
			this->passwordTextBox->PasswordChar = '*';
			this->passwordTextBox->Size = System::Drawing::Size(235, 27);
			this->passwordTextBox->TabIndex = 4;
			this->passwordTextBox->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MainForm::passwordTextBox_KeyDown);
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Location = System::Drawing::Point(35, 123);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(115, 28);
			this->usernameLabel->TabIndex = 5;
			this->usernameLabel->Text = L"Username";
			// 
			// passLabel
			// 
			this->passLabel->AutoSize = true;
			this->passLabel->Location = System::Drawing::Point(35, 214);
			this->passLabel->Name = L"passLabel";
			this->passLabel->Size = System::Drawing::Size(108, 28);
			this->passLabel->TabIndex = 6;
			this->passLabel->Text = L"Password";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkBlue;
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel1->Location = System::Drawing::Point(40, 277);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(235, 2);
			this->panel1->TabIndex = 7;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::DarkBlue;
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(40, 186);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(235, 2);
			this->panel2->TabIndex = 8;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->passLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->passwordTextBox);
			this->Controls->Add(this->usernameTextBox);
			this->Controls->Add(this->quit_btn);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->login_form);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"MainForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	// Password Box Enter to Login
	private: System::Void passwordTextBox_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter)
			login_btn->PerformClick();
	}

	// Quit Button Click Event
	private: System::Void quit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	// Login Button Click Event
	public:	User^ user = nullptr;
	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = this->usernameTextBox->Text;
		String^ password = this->passwordTextBox->Text;

		if (username->Length == 0 || password->Length == 0)
		{
			MessageBox::Show("Fill out Both Fields properly.", "Empty Fields", MessageBoxButtons::OK);
		}

		try 
		{
			String^ connString = "Data Source=predator-triton\\sqlexpress;Initial Catalog=login;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery_readLoginCred = "SELECT * FROM login WHERE username=@username AND password=@pwd;";
			SqlCommand command(sqlQuery_readLoginCred, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@pwd", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				user = gcnew User;
				user->ID = reader->GetInt32(0);
				user->name = reader->GetString(1);
				user->username = reader->GetString(2);
				user->password = reader->GetString(3);
				user->usertype = reader->GetInt32(4);
				user->accesslevel = reader->GetInt32(5);

				this->Close();
			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}
			sqlConn.Close();
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database",
				"Connection Error", MessageBoxButtons::OK);
		}
	}

};
}
