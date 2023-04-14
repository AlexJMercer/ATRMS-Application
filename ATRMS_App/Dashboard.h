#pragma once
#include "User.h"

namespace ATRMSApp {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{

	public:
		Dashboard(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			welcomeLabel->Text = "Welcome " + user->name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ welcomeLabel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ settingsPanel;
	private: System::Windows::Forms::Button^ subSettingsBtn2;
	private: System::Windows::Forms::Button^ subSettingsBtn1;
	private: System::Windows::Forms::Button^ settingsBtn;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ enterDataPanel;
	private: System::Windows::Forms::Button^ enterDataBtn;
	private: System::Windows::Forms::Button^ modifyDataBtn;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ deleteDataBtn;








	private: System::Windows::Forms::Panel^ panel3;


	private: System::Windows::Forms::Label^ nameLbl;
	private: System::Windows::Forms::DateTimePicker^ dateOfBirthPick;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ nameVictim;
	private: System::Windows::Forms::NumericUpDown^ ageVictim;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ addressThree;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ addressTwo;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ addressOne;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ guardianName;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ updateDataBtn;
	private: System::Windows::Forms::Button^ resetDataBtn;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::TextBox^ lastAttendedInstitute;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::TextBox^ educQualification;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ complainedByName;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ zipCode;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ stateName;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Panel^ btnPanel;
	private: System::Windows::Forms::Panel^ modifyDataPanel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel15;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Panel^ deleteDataPanel;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Panel^ panel24;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Panel^ panel26;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Panel^ panel27;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Panel^ panel28;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Panel^ panel29;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Panel^ panel30;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Panel^ panel31;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Panel^ panel32;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::Panel^ panel33;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;

private: System::Windows::Forms::Panel^ containerPanel;




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
			this->welcomeLabel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->settingsPanel = (gcnew System::Windows::Forms::Panel());
			this->subSettingsBtn2 = (gcnew System::Windows::Forms::Button());
			this->subSettingsBtn1 = (gcnew System::Windows::Forms::Button());
			this->settingsBtn = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->enterDataPanel = (gcnew System::Windows::Forms::Panel());
			this->updateDataBtn = (gcnew System::Windows::Forms::Button());
			this->resetDataBtn = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->lastAttendedInstitute = (gcnew System::Windows::Forms::TextBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->educQualification = (gcnew System::Windows::Forms::TextBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->complainedByName = (gcnew System::Windows::Forms::TextBox());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->zipCode = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->stateName = (gcnew System::Windows::Forms::TextBox());
			this->ageVictim = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->addressThree = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->addressTwo = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->addressOne = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->guardianName = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateOfBirthPick = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nameVictim = (gcnew System::Windows::Forms::TextBox());
			this->nameLbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->modifyDataPanel = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->deleteDataPanel = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->panel31 = (gcnew System::Windows::Forms::Panel());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->panel32 = (gcnew System::Windows::Forms::Panel());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel33 = (gcnew System::Windows::Forms::Panel());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->enterDataBtn = (gcnew System::Windows::Forms::Button());
			this->modifyDataBtn = (gcnew System::Windows::Forms::Button());
			this->deleteDataBtn = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->btnPanel = (gcnew System::Windows::Forms::Panel());
			this->containerPanel = (gcnew System::Windows::Forms::Panel());
			this->settingsPanel->SuspendLayout();
			this->enterDataPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageVictim))->BeginInit();
			this->modifyDataPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->deleteDataPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->btnPanel->SuspendLayout();
			this->containerPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// welcomeLabel
			// 
			this->welcomeLabel->AutoSize = true;
			this->welcomeLabel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->welcomeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomeLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->welcomeLabel->Location = System::Drawing::Point(12, 19);
			this->welcomeLabel->Name = L"welcomeLabel";
			this->welcomeLabel->Size = System::Drawing::Size(0, 31);
			this->welcomeLabel->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->panel1->ForeColor = System::Drawing::Color::Cyan;
			this->panel1->Location = System::Drawing::Point(-7, 63);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1277, 2);
			this->panel1->TabIndex = 1;
			// 
			// settingsPanel
			// 
			this->settingsPanel->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->settingsPanel->Controls->Add(this->subSettingsBtn2);
			this->settingsPanel->Controls->Add(this->subSettingsBtn1);
			this->settingsPanel->Controls->Add(this->settingsBtn);
			this->settingsPanel->ForeColor = System::Drawing::Color::Coral;
			this->settingsPanel->Location = System::Drawing::Point(1125, 10);
			this->settingsPanel->Margin = System::Windows::Forms::Padding(0);
			this->settingsPanel->Name = L"settingsPanel";
			this->settingsPanel->Size = System::Drawing::Size(130, 45);
			this->settingsPanel->TabIndex = 2;
			// 
			// subSettingsBtn2
			// 
			this->subSettingsBtn2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->subSettingsBtn2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->subSettingsBtn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->subSettingsBtn2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subSettingsBtn2->ForeColor = System::Drawing::Color::Aqua;
			this->subSettingsBtn2->Location = System::Drawing::Point(0, 90);
			this->subSettingsBtn2->Margin = System::Windows::Forms::Padding(0);
			this->subSettingsBtn2->Name = L"subSettingsBtn2";
			this->subSettingsBtn2->Size = System::Drawing::Size(130, 45);
			this->subSettingsBtn2->TabIndex = 5;
			this->subSettingsBtn2->Text = L"Sign Out";
			this->subSettingsBtn2->UseVisualStyleBackColor = true;
			this->subSettingsBtn2->Click += gcnew System::EventHandler(this, &Dashboard::subSettingsBtn2_Click);
			// 
			// subSettingsBtn1
			// 
			this->subSettingsBtn1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->subSettingsBtn1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->subSettingsBtn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->subSettingsBtn1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->subSettingsBtn1->ForeColor = System::Drawing::Color::Aqua;
			this->subSettingsBtn1->Location = System::Drawing::Point(0, 45);
			this->subSettingsBtn1->Margin = System::Windows::Forms::Padding(0);
			this->subSettingsBtn1->Name = L"subSettingsBtn1";
			this->subSettingsBtn1->Size = System::Drawing::Size(130, 45);
			this->subSettingsBtn1->TabIndex = 4;
			this->subSettingsBtn1->Text = L"Profile";
			this->subSettingsBtn1->UseVisualStyleBackColor = true;
			// 
			// settingsBtn
			// 
			this->settingsBtn->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->settingsBtn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->settingsBtn->FlatAppearance->BorderSize = 2;
			this->settingsBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settingsBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settingsBtn->ForeColor = System::Drawing::Color::Aqua;
			this->settingsBtn->Location = System::Drawing::Point(0, 0);
			this->settingsBtn->Margin = System::Windows::Forms::Padding(0);
			this->settingsBtn->Name = L"settingsBtn";
			this->settingsBtn->Size = System::Drawing::Size(130, 45);
			this->settingsBtn->TabIndex = 3;
			this->settingsBtn->Text = L"Settings";
			this->settingsBtn->UseVisualStyleBackColor = true;
			this->settingsBtn->Click += gcnew System::EventHandler(this, &Dashboard::settingsBtn_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Cyan;
			this->panel2->ForeColor = System::Drawing::Color::Snow;
			this->panel2->Location = System::Drawing::Point(174, 63);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(2, 626);
			this->panel2->TabIndex = 3;
			// 
			// enterDataPanel
			// 
			this->enterDataPanel->Controls->Add(this->updateDataBtn);
			this->enterDataPanel->Controls->Add(this->resetDataBtn);
			this->enterDataPanel->Controls->Add(this->label13);
			this->enterDataPanel->Controls->Add(this->panel12);
			this->enterDataPanel->Controls->Add(this->lastAttendedInstitute);
			this->enterDataPanel->Controls->Add(this->panel11);
			this->enterDataPanel->Controls->Add(this->educQualification);
			this->enterDataPanel->Controls->Add(this->panel10);
			this->enterDataPanel->Controls->Add(this->label11);
			this->enterDataPanel->Controls->Add(this->complainedByName);
			this->enterDataPanel->Controls->Add(this->panel9);
			this->enterDataPanel->Controls->Add(this->label10);
			this->enterDataPanel->Controls->Add(this->zipCode);
			this->enterDataPanel->Controls->Add(this->label9);
			this->enterDataPanel->Controls->Add(this->panel4);
			this->enterDataPanel->Controls->Add(this->stateName);
			this->enterDataPanel->Controls->Add(this->ageVictim);
			this->enterDataPanel->Controls->Add(this->label8);
			this->enterDataPanel->Controls->Add(this->panel8);
			this->enterDataPanel->Controls->Add(this->addressThree);
			this->enterDataPanel->Controls->Add(this->panel7);
			this->enterDataPanel->Controls->Add(this->label7);
			this->enterDataPanel->Controls->Add(this->addressTwo);
			this->enterDataPanel->Controls->Add(this->panel6);
			this->enterDataPanel->Controls->Add(this->label6);
			this->enterDataPanel->Controls->Add(this->addressOne);
			this->enterDataPanel->Controls->Add(this->label5);
			this->enterDataPanel->Controls->Add(this->panel5);
			this->enterDataPanel->Controls->Add(this->guardianName);
			this->enterDataPanel->Controls->Add(this->label4);
			this->enterDataPanel->Controls->Add(this->label3);
			this->enterDataPanel->Controls->Add(this->dateOfBirthPick);
			this->enterDataPanel->Controls->Add(this->panel3);
			this->enterDataPanel->Controls->Add(this->label2);
			this->enterDataPanel->Controls->Add(this->nameVictim);
			this->enterDataPanel->Controls->Add(this->nameLbl);
			this->enterDataPanel->Controls->Add(this->label1);
			this->enterDataPanel->ForeColor = System::Drawing::Color::White;
			this->enterDataPanel->Location = System::Drawing::Point(1, 1);
			this->enterDataPanel->Name = L"enterDataPanel";
			this->enterDataPanel->Size = System::Drawing::Size(1086, 614);
			this->enterDataPanel->TabIndex = 3;
			this->enterDataPanel->Visible = false;
			// 
			// updateDataBtn
			// 
			this->updateDataBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->updateDataBtn->FlatAppearance->BorderSize = 2;
			this->updateDataBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->updateDataBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateDataBtn->ForeColor = System::Drawing::Color::Cyan;
			this->updateDataBtn->Location = System::Drawing::Point(802, 561);
			this->updateDataBtn->Name = L"updateDataBtn";
			this->updateDataBtn->Size = System::Drawing::Size(135, 45);
			this->updateDataBtn->TabIndex = 12;
			this->updateDataBtn->Text = L"Update";
			this->updateDataBtn->UseVisualStyleBackColor = false;
			this->updateDataBtn->Click += gcnew System::EventHandler(this, &Dashboard::updateDataBtn_Click);
			// 
			// resetDataBtn
			// 
			this->resetDataBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->resetDataBtn->FlatAppearance->BorderSize = 2;
			this->resetDataBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->resetDataBtn->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetDataBtn->ForeColor = System::Drawing::Color::Cyan;
			this->resetDataBtn->Location = System::Drawing::Point(943, 561);
			this->resetDataBtn->Name = L"resetDataBtn";
			this->resetDataBtn->Size = System::Drawing::Size(135, 45);
			this->resetDataBtn->TabIndex = 13;
			this->resetDataBtn->Text = L"Reset All";
			this->resetDataBtn->UseVisualStyleBackColor = false;
			this->resetDataBtn->Click += gcnew System::EventHandler(this, &Dashboard::resetDataBtn_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label13->Location = System::Drawing::Point(536, 335);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(131, 75);
			this->label13->TabIndex = 27;
			this->label13->Text = L"Educational\r\nInstitute Last\r\nAttended :";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::Cyan;
			this->panel12->Location = System::Drawing::Point(673, 408);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(374, 2);
			this->panel12->TabIndex = 18;
			// 
			// lastAttendedInstitute
			// 
			this->lastAttendedInstitute->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->lastAttendedInstitute->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->lastAttendedInstitute->ForeColor = System::Drawing::Color::White;
			this->lastAttendedInstitute->Location = System::Drawing::Point(673, 380);
			this->lastAttendedInstitute->MaxLength = 20000;
			this->lastAttendedInstitute->Name = L"lastAttendedInstitute";
			this->lastAttendedInstitute->Size = System::Drawing::Size(374, 27);
			this->lastAttendedInstitute->TabIndex = 11;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::Cyan;
			this->panel11->Location = System::Drawing::Point(673, 319);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(374, 2);
			this->panel11->TabIndex = 18;
			// 
			// educQualification
			// 
			this->educQualification->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->educQualification->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->educQualification->ForeColor = System::Drawing::Color::White;
			this->educQualification->Location = System::Drawing::Point(673, 291);
			this->educQualification->MaxLength = 20000;
			this->educQualification->Name = L"educQualification";
			this->educQualification->Size = System::Drawing::Size(374, 27);
			this->educQualification->TabIndex = 10;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::Cyan;
			this->panel10->Location = System::Drawing::Point(123, 244);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(367, 2);
			this->panel10->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label11->Location = System::Drawing::Point(538, 247);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(129, 75);
			this->label11->TabIndex = 17;
			this->label11->Text = L"Educational\r\nQualification\r\nUpto :";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// complainedByName
			// 
			this->complainedByName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->complainedByName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->complainedByName->ForeColor = System::Drawing::Color::White;
			this->complainedByName->Location = System::Drawing::Point(123, 216);
			this->complainedByName->MaxLength = 1000;
			this->complainedByName->Name = L"complainedByName";
			this->complainedByName->Size = System::Drawing::Size(367, 27);
			this->complainedByName->TabIndex = 2;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::Cyan;
			this->panel9->Location = System::Drawing::Point(123, 585);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(231, 2);
			this->panel9->TabIndex = 25;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label10->Location = System::Drawing::Point(11, 196);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 50);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Complaint\r\nMade By :";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// zipCode
			// 
			this->zipCode->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->zipCode->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->zipCode->ForeColor = System::Drawing::Color::White;
			this->zipCode->Location = System::Drawing::Point(123, 559);
			this->zipCode->MaxLength = 1000;
			this->zipCode->Name = L"zipCode";
			this->zipCode->Size = System::Drawing::Size(231, 27);
			this->zipCode->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label9->Location = System::Drawing::Point(11, 561);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 25);
			this->label9->TabIndex = 24;
			this->label9->Text = L"ZIP Code :";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Cyan;
			this->panel4->Location = System::Drawing::Point(123, 528);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(231, 2);
			this->panel4->TabIndex = 18;
			// 
			// stateName
			// 
			this->stateName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->stateName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->stateName->ForeColor = System::Drawing::Color::White;
			this->stateName->Location = System::Drawing::Point(123, 500);
			this->stateName->MaxLength = 1000;
			this->stateName->Name = L"stateName";
			this->stateName->Size = System::Drawing::Size(231, 27);
			this->stateName->TabIndex = 6;
			// 
			// ageVictim
			// 
			this->ageVictim->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ageVictim->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ageVictim->ForeColor = System::Drawing::Color::Cyan;
			this->ageVictim->Location = System::Drawing::Point(673, 93);
			this->ageVictim->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 125, 0, 0, 0 });
			this->ageVictim->Name = L"ageVictim";
			this->ageVictim->Size = System::Drawing::Size(103, 32);
			this->ageVictim->TabIndex = 8;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label8->Location = System::Drawing::Point(47, 505);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(70, 25);
			this->label8->TabIndex = 17;
			this->label8->Text = L"State :";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Cyan;
			this->panel8->Location = System::Drawing::Point(123, 470);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(367, 2);
			this->panel8->TabIndex = 21;
			// 
			// addressThree
			// 
			this->addressThree->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addressThree->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addressThree->ForeColor = System::Drawing::Color::White;
			this->addressThree->Location = System::Drawing::Point(123, 442);
			this->addressThree->MaxLength = 20000;
			this->addressThree->Name = L"addressThree";
			this->addressThree->Size = System::Drawing::Size(367, 27);
			this->addressThree->TabIndex = 5;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Cyan;
			this->panel7->Location = System::Drawing::Point(123, 395);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(367, 2);
			this->panel7->TabIndex = 21;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label7->Location = System::Drawing::Point(27, 422);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 50);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Address \r\nLine 3 :";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// addressTwo
			// 
			this->addressTwo->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addressTwo->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addressTwo->ForeColor = System::Drawing::Color::White;
			this->addressTwo->Location = System::Drawing::Point(123, 367);
			this->addressTwo->MaxLength = 20000;
			this->addressTwo->Name = L"addressTwo";
			this->addressTwo->Size = System::Drawing::Size(367, 27);
			this->addressTwo->TabIndex = 4;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Cyan;
			this->panel6->Location = System::Drawing::Point(123, 320);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(367, 2);
			this->panel6->TabIndex = 18;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label6->Location = System::Drawing::Point(27, 347);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(91, 50);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Address \r\nLine 2 :";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// addressOne
			// 
			this->addressOne->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->addressOne->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->addressOne->ForeColor = System::Drawing::Color::White;
			this->addressOne->Location = System::Drawing::Point(123, 292);
			this->addressOne->MaxLength = 20000;
			this->addressOne->Name = L"addressOne";
			this->addressOne->Size = System::Drawing::Size(367, 27);
			this->addressOne->TabIndex = 3;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label5->Location = System::Drawing::Point(27, 272);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 50);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Address \r\nLine 1 :";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Cyan;
			this->panel5->Location = System::Drawing::Point(673, 189);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(374, 2);
			this->panel5->TabIndex = 15;
			// 
			// guardianName
			// 
			this->guardianName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->guardianName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->guardianName->ForeColor = System::Drawing::Color::White;
			this->guardianName->Location = System::Drawing::Point(673, 161);
			this->guardianName->MaxLength = 20000;
			this->guardianName->Name = L"guardianName";
			this->guardianName->Size = System::Drawing::Size(374, 27);
			this->guardianName->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label4->Location = System::Drawing::Point(557, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(110, 50);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Guardian\'s\r\nName :";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(583, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(84, 50);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Victim\'s\r\nAge :";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dateOfBirthPick
			// 
			this->dateOfBirthPick->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateOfBirthPick->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateOfBirthPick->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateOfBirthPick->CalendarTitleForeColor = System::Drawing::Color::Cyan;
			this->dateOfBirthPick->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateOfBirthPick->Location = System::Drawing::Point(123, 149);
			this->dateOfBirthPick->Name = L"dateOfBirthPick";
			this->dateOfBirthPick->Size = System::Drawing::Size(231, 32);
			this->dateOfBirthPick->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Cyan;
			this->panel3->Location = System::Drawing::Point(123, 125);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(367, 2);
			this->panel3->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label2->Location = System::Drawing::Point(47, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"D.O.B :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nameVictim
			// 
			this->nameVictim->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->nameVictim->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->nameVictim->ForeColor = System::Drawing::Color::White;
			this->nameVictim->Location = System::Drawing::Point(123, 97);
			this->nameVictim->MaxLength = 1000;
			this->nameVictim->Name = L"nameVictim";
			this->nameVictim->Size = System::Drawing::Size(367, 27);
			this->nameVictim->TabIndex = 0;
			// 
			// nameLbl
			// 
			this->nameLbl->AutoSize = true;
			this->nameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nameLbl->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->nameLbl->Location = System::Drawing::Point(34, 77);
			this->nameLbl->Name = L"nameLbl";
			this->nameLbl->Size = System::Drawing::Size(84, 50);
			this->nameLbl->TabIndex = 1;
			this->nameLbl->Text = L"Victim\'s\r\nName :";
			this->nameLbl->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Cyan;
			this->label1->Location = System::Drawing::Point(15, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(158, 36);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Data";
			// 
			// modifyDataPanel
			// 
			this->modifyDataPanel->Controls->Add(this->button1);
			this->modifyDataPanel->Controls->Add(this->button2);
			this->modifyDataPanel->Controls->Add(this->label14);
			this->modifyDataPanel->Controls->Add(this->panel14);
			this->modifyDataPanel->Controls->Add(this->textBox1);
			this->modifyDataPanel->Controls->Add(this->panel15);
			this->modifyDataPanel->Controls->Add(this->textBox2);
			this->modifyDataPanel->Controls->Add(this->panel16);
			this->modifyDataPanel->Controls->Add(this->label15);
			this->modifyDataPanel->Controls->Add(this->textBox3);
			this->modifyDataPanel->Controls->Add(this->panel17);
			this->modifyDataPanel->Controls->Add(this->label16);
			this->modifyDataPanel->Controls->Add(this->textBox4);
			this->modifyDataPanel->Controls->Add(this->label17);
			this->modifyDataPanel->Controls->Add(this->panel18);
			this->modifyDataPanel->Controls->Add(this->textBox5);
			this->modifyDataPanel->Controls->Add(this->numericUpDown1);
			this->modifyDataPanel->Controls->Add(this->label18);
			this->modifyDataPanel->Controls->Add(this->panel19);
			this->modifyDataPanel->Controls->Add(this->textBox6);
			this->modifyDataPanel->Controls->Add(this->panel20);
			this->modifyDataPanel->Controls->Add(this->label19);
			this->modifyDataPanel->Controls->Add(this->textBox7);
			this->modifyDataPanel->Controls->Add(this->panel21);
			this->modifyDataPanel->Controls->Add(this->label20);
			this->modifyDataPanel->Controls->Add(this->textBox8);
			this->modifyDataPanel->Controls->Add(this->label21);
			this->modifyDataPanel->Controls->Add(this->panel22);
			this->modifyDataPanel->Controls->Add(this->textBox9);
			this->modifyDataPanel->Controls->Add(this->label22);
			this->modifyDataPanel->Controls->Add(this->label23);
			this->modifyDataPanel->Controls->Add(this->dateTimePicker1);
			this->modifyDataPanel->Controls->Add(this->panel23);
			this->modifyDataPanel->Controls->Add(this->label24);
			this->modifyDataPanel->Controls->Add(this->textBox10);
			this->modifyDataPanel->Controls->Add(this->label25);
			this->modifyDataPanel->Controls->Add(this->label26);
			this->modifyDataPanel->ForeColor = System::Drawing::Color::White;
			this->modifyDataPanel->Location = System::Drawing::Point(1, 1);
			this->modifyDataPanel->Name = L"modifyDataPanel";
			this->modifyDataPanel->Size = System::Drawing::Size(1086, 614);
			this->modifyDataPanel->TabIndex = 28;
			this->modifyDataPanel->Visible = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button1->FlatAppearance->BorderSize = 2;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Cyan;
			this->button1->Location = System::Drawing::Point(802, 561);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 45);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button2->FlatAppearance->BorderSize = 2;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Cyan;
			this->button2->Location = System::Drawing::Point(943, 561);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(135, 45);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Reset All";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Violet;
			this->label14->Location = System::Drawing::Point(536, 335);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(131, 75);
			this->label14->TabIndex = 27;
			this->label14->Text = L"Educational\r\nInstitute Last\r\nAttended :";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::Cyan;
			this->panel14->Location = System::Drawing::Point(673, 408);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(374, 2);
			this->panel14->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(673, 380);
			this->textBox1->MaxLength = 20000;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(374, 27);
			this->textBox1->TabIndex = 11;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::Cyan;
			this->panel15->Location = System::Drawing::Point(673, 319);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(374, 2);
			this->panel15->TabIndex = 18;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(673, 291);
			this->textBox2->MaxLength = 20000;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(374, 27);
			this->textBox2->TabIndex = 10;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::Cyan;
			this->panel16->Location = System::Drawing::Point(123, 244);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(367, 2);
			this->panel16->TabIndex = 18;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Violet;
			this->label15->Location = System::Drawing::Point(538, 247);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(129, 75);
			this->label15->TabIndex = 17;
			this->label15->Text = L"Educational\r\nQualification\r\nUpto :";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(123, 216);
			this->textBox3->MaxLength = 1000;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(367, 27);
			this->textBox3->TabIndex = 2;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::Cyan;
			this->panel17->Location = System::Drawing::Point(123, 585);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(231, 2);
			this->panel17->TabIndex = 25;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Violet;
			this->label16->Location = System::Drawing::Point(11, 196);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(107, 50);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Complaint\r\nMade By :";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(123, 559);
			this->textBox4->MaxLength = 1000;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(231, 27);
			this->textBox4->TabIndex = 7;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Violet;
			this->label17->Location = System::Drawing::Point(11, 561);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(107, 25);
			this->label17->TabIndex = 24;
			this->label17->Text = L"ZIP Code :";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::Cyan;
			this->panel18->Location = System::Drawing::Point(123, 528);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(231, 2);
			this->panel18->TabIndex = 18;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(123, 500);
			this->textBox5->MaxLength = 1000;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(231, 27);
			this->textBox5->TabIndex = 6;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown1->ForeColor = System::Drawing::Color::Cyan;
			this->numericUpDown1->Location = System::Drawing::Point(673, 93);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 125, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(103, 32);
			this->numericUpDown1->TabIndex = 8;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::Violet;
			this->label18->Location = System::Drawing::Point(47, 505);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(70, 25);
			this->label18->TabIndex = 17;
			this->label18->Text = L"State :";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::Cyan;
			this->panel19->Location = System::Drawing::Point(123, 470);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(367, 2);
			this->panel19->TabIndex = 21;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(123, 442);
			this->textBox6->MaxLength = 20000;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(367, 27);
			this->textBox6->TabIndex = 5;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::Cyan;
			this->panel20->Location = System::Drawing::Point(123, 395);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(367, 2);
			this->panel20->TabIndex = 21;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::Violet;
			this->label19->Location = System::Drawing::Point(27, 422);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(91, 50);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Address \r\nLine 3 :";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->ForeColor = System::Drawing::Color::White;
			this->textBox7->Location = System::Drawing::Point(123, 367);
			this->textBox7->MaxLength = 20000;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(367, 27);
			this->textBox7->TabIndex = 4;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::Cyan;
			this->panel21->Location = System::Drawing::Point(123, 320);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(367, 2);
			this->panel21->TabIndex = 18;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Violet;
			this->label20->Location = System::Drawing::Point(27, 347);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(91, 50);
			this->label20->TabIndex = 20;
			this->label20->Text = L"Address \r\nLine 2 :";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(123, 292);
			this->textBox8->MaxLength = 20000;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(367, 27);
			this->textBox8->TabIndex = 3;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::Violet;
			this->label21->Location = System::Drawing::Point(27, 272);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(91, 50);
			this->label21->TabIndex = 17;
			this->label21->Text = L"Address \r\nLine 1 :";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::Cyan;
			this->panel22->Location = System::Drawing::Point(673, 189);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(374, 2);
			this->panel22->TabIndex = 15;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox9->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox9->ForeColor = System::Drawing::Color::White;
			this->textBox9->Location = System::Drawing::Point(673, 161);
			this->textBox9->MaxLength = 20000;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(374, 27);
			this->textBox9->TabIndex = 9;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Violet;
			this->label22->Location = System::Drawing::Point(557, 141);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(110, 50);
			this->label22->TabIndex = 14;
			this->label22->Text = L"Guardian\'s\r\nName :";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Violet;
			this->label23->Location = System::Drawing::Point(583, 76);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(84, 50);
			this->label23->TabIndex = 13;
			this->label23->Text = L"Victim\'s\r\nAge :";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::Cyan;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Location = System::Drawing::Point(123, 149);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(231, 32);
			this->dateTimePicker1->TabIndex = 1;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::Cyan;
			this->panel23->Location = System::Drawing::Point(123, 125);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(367, 2);
			this->panel23->TabIndex = 3;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Violet;
			this->label24->Location = System::Drawing::Point(47, 155);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(74, 25);
			this->label24->TabIndex = 9;
			this->label24->Text = L"D.O.B :";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->ForeColor = System::Drawing::Color::White;
			this->textBox10->Location = System::Drawing::Point(123, 97);
			this->textBox10->MaxLength = 1000;
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(367, 27);
			this->textBox10->TabIndex = 0;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Violet;
			this->label25->Location = System::Drawing::Point(34, 77);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(84, 50);
			this->label25->TabIndex = 1;
			this->label25->Text = L"Victim\'s\r\nName :";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Cyan;
			this->label26->Location = System::Drawing::Point(15, 15);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(186, 36);
			this->label26->TabIndex = 0;
			this->label26->Text = L"Modify Data";
			// 
			// deleteDataPanel
			// 
			this->deleteDataPanel->Controls->Add(this->button3);
			this->deleteDataPanel->Controls->Add(this->button4);
			this->deleteDataPanel->Controls->Add(this->label27);
			this->deleteDataPanel->Controls->Add(this->panel24);
			this->deleteDataPanel->Controls->Add(this->textBox11);
			this->deleteDataPanel->Controls->Add(this->panel25);
			this->deleteDataPanel->Controls->Add(this->textBox12);
			this->deleteDataPanel->Controls->Add(this->panel26);
			this->deleteDataPanel->Controls->Add(this->label28);
			this->deleteDataPanel->Controls->Add(this->textBox13);
			this->deleteDataPanel->Controls->Add(this->panel27);
			this->deleteDataPanel->Controls->Add(this->label29);
			this->deleteDataPanel->Controls->Add(this->textBox14);
			this->deleteDataPanel->Controls->Add(this->label30);
			this->deleteDataPanel->Controls->Add(this->panel28);
			this->deleteDataPanel->Controls->Add(this->textBox15);
			this->deleteDataPanel->Controls->Add(this->numericUpDown2);
			this->deleteDataPanel->Controls->Add(this->label31);
			this->deleteDataPanel->Controls->Add(this->panel29);
			this->deleteDataPanel->Controls->Add(this->textBox16);
			this->deleteDataPanel->Controls->Add(this->panel30);
			this->deleteDataPanel->Controls->Add(this->label32);
			this->deleteDataPanel->Controls->Add(this->textBox17);
			this->deleteDataPanel->Controls->Add(this->panel31);
			this->deleteDataPanel->Controls->Add(this->label33);
			this->deleteDataPanel->Controls->Add(this->textBox18);
			this->deleteDataPanel->Controls->Add(this->label34);
			this->deleteDataPanel->Controls->Add(this->panel32);
			this->deleteDataPanel->Controls->Add(this->textBox19);
			this->deleteDataPanel->Controls->Add(this->label35);
			this->deleteDataPanel->Controls->Add(this->label36);
			this->deleteDataPanel->Controls->Add(this->dateTimePicker2);
			this->deleteDataPanel->Controls->Add(this->panel33);
			this->deleteDataPanel->Controls->Add(this->label37);
			this->deleteDataPanel->Controls->Add(this->textBox20);
			this->deleteDataPanel->Controls->Add(this->label38);
			this->deleteDataPanel->Controls->Add(this->label39);
			this->deleteDataPanel->ForeColor = System::Drawing::Color::White;
			this->deleteDataPanel->Location = System::Drawing::Point(1, 1);
			this->deleteDataPanel->Name = L"deleteDataPanel";
			this->deleteDataPanel->Size = System::Drawing::Size(1086, 614);
			this->deleteDataPanel->TabIndex = 28;
			this->deleteDataPanel->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Cyan;
			this->button3->Location = System::Drawing::Point(802, 561);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(135, 45);
			this->button3->TabIndex = 12;
			this->button3->Text = L"Update";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->button4->FlatAppearance->BorderSize = 2;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Cyan;
			this->button4->Location = System::Drawing::Point(943, 561);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(135, 45);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Reset All";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label27->Location = System::Drawing::Point(536, 335);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(131, 75);
			this->label27->TabIndex = 27;
			this->label27->Text = L"Educational\r\nInstitute Last\r\nAttended :";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::Cyan;
			this->panel24->Location = System::Drawing::Point(673, 408);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(374, 2);
			this->panel24->TabIndex = 18;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(673, 380);
			this->textBox11->MaxLength = 20000;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(374, 27);
			this->textBox11->TabIndex = 11;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::Cyan;
			this->panel25->Location = System::Drawing::Point(673, 319);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(374, 2);
			this->panel25->TabIndex = 18;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->ForeColor = System::Drawing::Color::White;
			this->textBox12->Location = System::Drawing::Point(673, 291);
			this->textBox12->MaxLength = 20000;
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(374, 27);
			this->textBox12->TabIndex = 10;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::Cyan;
			this->panel26->Location = System::Drawing::Point(123, 244);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(367, 2);
			this->panel26->TabIndex = 18;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label28->Location = System::Drawing::Point(538, 247);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(129, 75);
			this->label28->TabIndex = 17;
			this->label28->Text = L"Educational\r\nQualification\r\nUpto :";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->ForeColor = System::Drawing::Color::White;
			this->textBox13->Location = System::Drawing::Point(123, 216);
			this->textBox13->MaxLength = 1000;
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(367, 27);
			this->textBox13->TabIndex = 2;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::Cyan;
			this->panel27->Location = System::Drawing::Point(123, 585);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(231, 2);
			this->panel27->TabIndex = 25;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label29->Location = System::Drawing::Point(11, 196);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(107, 50);
			this->label29->TabIndex = 17;
			this->label29->Text = L"Complaint\r\nMade By :";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->ForeColor = System::Drawing::Color::White;
			this->textBox14->Location = System::Drawing::Point(123, 559);
			this->textBox14->MaxLength = 1000;
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(231, 27);
			this->textBox14->TabIndex = 7;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label30->Location = System::Drawing::Point(11, 561);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(107, 25);
			this->label30->TabIndex = 24;
			this->label30->Text = L"ZIP Code :";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::Cyan;
			this->panel28->Location = System::Drawing::Point(123, 528);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(231, 2);
			this->panel28->TabIndex = 18;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->ForeColor = System::Drawing::Color::White;
			this->textBox15->Location = System::Drawing::Point(123, 500);
			this->textBox15->MaxLength = 1000;
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(231, 27);
			this->textBox15->TabIndex = 6;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->numericUpDown2->ForeColor = System::Drawing::Color::Cyan;
			this->numericUpDown2->Location = System::Drawing::Point(673, 93);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 125, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(103, 32);
			this->numericUpDown2->TabIndex = 8;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label31->Location = System::Drawing::Point(47, 505);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(70, 25);
			this->label31->TabIndex = 17;
			this->label31->Text = L"State :";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::Cyan;
			this->panel29->Location = System::Drawing::Point(123, 470);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(367, 2);
			this->panel29->TabIndex = 21;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->ForeColor = System::Drawing::Color::White;
			this->textBox16->Location = System::Drawing::Point(123, 442);
			this->textBox16->MaxLength = 20000;
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(367, 27);
			this->textBox16->TabIndex = 5;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::Cyan;
			this->panel30->Location = System::Drawing::Point(123, 395);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(367, 2);
			this->panel30->TabIndex = 21;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label32->Location = System::Drawing::Point(27, 422);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(91, 50);
			this->label32->TabIndex = 20;
			this->label32->Text = L"Address \r\nLine 3 :";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->ForeColor = System::Drawing::Color::White;
			this->textBox17->Location = System::Drawing::Point(123, 367);
			this->textBox17->MaxLength = 20000;
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(367, 27);
			this->textBox17->TabIndex = 4;
			// 
			// panel31
			// 
			this->panel31->BackColor = System::Drawing::Color::Cyan;
			this->panel31->Location = System::Drawing::Point(123, 320);
			this->panel31->Name = L"panel31";
			this->panel31->Size = System::Drawing::Size(367, 2);
			this->panel31->TabIndex = 18;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label33->Location = System::Drawing::Point(27, 347);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(91, 50);
			this->label33->TabIndex = 20;
			this->label33->Text = L"Address \r\nLine 2 :";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->ForeColor = System::Drawing::Color::White;
			this->textBox18->Location = System::Drawing::Point(123, 292);
			this->textBox18->MaxLength = 20000;
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(367, 27);
			this->textBox18->TabIndex = 3;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label34->Location = System::Drawing::Point(27, 272);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(91, 50);
			this->label34->TabIndex = 17;
			this->label34->Text = L"Address \r\nLine 1 :";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// panel32
			// 
			this->panel32->BackColor = System::Drawing::Color::Cyan;
			this->panel32->Location = System::Drawing::Point(673, 189);
			this->panel32->Name = L"panel32";
			this->panel32->Size = System::Drawing::Size(374, 2);
			this->panel32->TabIndex = 15;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->ForeColor = System::Drawing::Color::White;
			this->textBox19->Location = System::Drawing::Point(673, 161);
			this->textBox19->MaxLength = 20000;
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(374, 27);
			this->textBox19->TabIndex = 9;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label35->Location = System::Drawing::Point(557, 141);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(110, 50);
			this->label35->TabIndex = 14;
			this->label35->Text = L"Guardian\'s\r\nName :";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label36->Location = System::Drawing::Point(583, 76);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(84, 50);
			this->label36->TabIndex = 13;
			this->label36->Text = L"Victim\'s\r\nAge :";
			this->label36->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->CalendarForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateTimePicker2->CalendarMonthBackground = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateTimePicker2->CalendarTitleBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->dateTimePicker2->CalendarTitleForeColor = System::Drawing::Color::Cyan;
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Location = System::Drawing::Point(123, 149);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(231, 32);
			this->dateTimePicker2->TabIndex = 1;
			// 
			// panel33
			// 
			this->panel33->BackColor = System::Drawing::Color::Cyan;
			this->panel33->Location = System::Drawing::Point(123, 125);
			this->panel33->Name = L"panel33";
			this->panel33->Size = System::Drawing::Size(367, 2);
			this->panel33->TabIndex = 3;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label37->Location = System::Drawing::Point(47, 155);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(74, 25);
			this->label37->TabIndex = 9;
			this->label37->Text = L"D.O.B :";
			this->label37->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->ForeColor = System::Drawing::Color::White;
			this->textBox20->Location = System::Drawing::Point(123, 97);
			this->textBox20->MaxLength = 1000;
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(367, 27);
			this->textBox20->TabIndex = 0;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label38->Location = System::Drawing::Point(34, 77);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(84, 50);
			this->label38->TabIndex = 1;
			this->label38->Text = L"Victim\'s\r\nName :";
			this->label38->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 20.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::Cyan;
			this->label39->Location = System::Drawing::Point(15, 15);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(175, 36);
			this->label39->TabIndex = 0;
			this->label39->Text = L"Delete Data";
			// 
			// enterDataBtn
			// 
			this->enterDataBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->enterDataBtn->FlatAppearance->BorderSize = 2;
			this->enterDataBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->enterDataBtn->ForeColor = System::Drawing::Color::Cyan;
			this->enterDataBtn->Location = System::Drawing::Point(19, 13);
			this->enterDataBtn->Name = L"enterDataBtn";
			this->enterDataBtn->Size = System::Drawing::Size(164, 57);
			this->enterDataBtn->TabIndex = 0;
			this->enterDataBtn->Text = L"Enter Data";
			this->enterDataBtn->UseVisualStyleBackColor = false;
			this->enterDataBtn->Click += gcnew System::EventHandler(this, &Dashboard::enterDataBtn_Click);
			// 
			// modifyDataBtn
			// 
			this->modifyDataBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->modifyDataBtn->FlatAppearance->BorderSize = 2;
			this->modifyDataBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->modifyDataBtn->ForeColor = System::Drawing::Color::Cyan;
			this->modifyDataBtn->Location = System::Drawing::Point(19, 78);
			this->modifyDataBtn->Name = L"modifyDataBtn";
			this->modifyDataBtn->Size = System::Drawing::Size(164, 57);
			this->modifyDataBtn->TabIndex = 1;
			this->modifyDataBtn->Text = L"Modify Data";
			this->modifyDataBtn->UseVisualStyleBackColor = false;
			this->modifyDataBtn->Click += gcnew System::EventHandler(this, &Dashboard::modifyDataBtn_Click);
			// 
			// deleteDataBtn
			// 
			this->deleteDataBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->deleteDataBtn->FlatAppearance->BorderSize = 2;
			this->deleteDataBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->deleteDataBtn->ForeColor = System::Drawing::Color::Cyan;
			this->deleteDataBtn->Location = System::Drawing::Point(19, 141);
			this->deleteDataBtn->Name = L"deleteDataBtn";
			this->deleteDataBtn->Size = System::Drawing::Size(164, 57);
			this->deleteDataBtn->TabIndex = 2;
			this->deleteDataBtn->Text = L"Delete Data";
			this->deleteDataBtn->UseVisualStyleBackColor = false;
			this->deleteDataBtn->Click += gcnew System::EventHandler(this, &Dashboard::deleteDataBtn_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::DarkOrange;
			this->label12->Location = System::Drawing::Point(535, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(193, 42);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Dashboard";
			// 
			// btnPanel
			// 
			this->btnPanel->Controls->Add(this->enterDataBtn);
			this->btnPanel->Controls->Add(this->modifyDataBtn);
			this->btnPanel->Controls->Add(this->deleteDataBtn);
			this->btnPanel->Location = System::Drawing::Point(-7, 66);
			this->btnPanel->Name = L"btnPanel";
			this->btnPanel->Size = System::Drawing::Size(180, 614);
			this->btnPanel->TabIndex = 9;
			// 
			// containerPanel
			// 
			this->containerPanel->Controls->Add(this->modifyDataPanel);
			this->containerPanel->Controls->Add(this->deleteDataPanel);
			this->containerPanel->Controls->Add(this->enterDataPanel);
			this->containerPanel->Location = System::Drawing::Point(175, 65);
			this->containerPanel->Name = L"containerPanel";
			this->containerPanel->Size = System::Drawing::Size(1093, 622);
			this->containerPanel->TabIndex = 10;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->btnPanel);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->settingsPanel);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->welcomeLabel);
			this->Controls->Add(this->containerPanel);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ATRMS Dashboard";
			this->settingsPanel->ResumeLayout(false);
			this->enterDataPanel->ResumeLayout(false);
			this->enterDataPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ageVictim))->EndInit();
			this->modifyDataPanel->ResumeLayout(false);
			this->modifyDataPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->deleteDataPanel->ResumeLayout(false);
			this->deleteDataPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->btnPanel->ResumeLayout(false);
			this->containerPanel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	//private: String^ firstName(String^ name)
	//{
	//	return name->Substring(name->IndexOf(name, " ") + 1);
	//}

	// Drop Down Menu for Settings
	private: System::Void settingsBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		changeButtonDesign(settingsBtn);
		if (settingsPanel->Height == 45)
			settingsPanel->Height = 135;
		else if (settingsPanel->Height == 135)
			settingsPanel->Height = 45;
	}

	// Sign Out Button
	private: System::Void subSettingsBtn2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		if (MessageBox::Show("Are you sure you want to exit the Application ?",
			"ATRMS Dashboard",
			MessageBoxButtons::YesNo,
			MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::Yes)
			Application::Exit();

	}

	// Enter Data Button is Clicked
	private: System::Void enterDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		changeButtonDesign(enterDataBtn);
		changePanel(enterDataPanel);
	}

	// Enter Modify Button Clicked
	private: System::Void modifyDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		changeButtonDesign(modifyDataBtn);
		changePanel(modifyDataPanel);
	}

	// Delete Button Clicked
	private: System::Void deleteDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		changeButtonDesign(deleteDataBtn);
		changePanel(deleteDataPanel);
	}

	// Reset All Button Clicked
	private: System::Void resetDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		nameVictim->Text = "";
		dateOfBirthPick->ResetText();
		complainedByName->Text = "";
		addressOne->Text = "";
		addressTwo->Text = "";
		addressThree->Text = "";
		stateName->Text = "";
		zipCode->Text = "";
		ageVictim->Text = "";
		guardianName->Text = "";
		educQualification->Text = "";
		lastAttendedInstitute->Text = "";
	}

	// Update or Add New data to DataBase
	private: System::Void updateDataBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ connStr = "Data Source=predator-triton\\sqlexpress;Initial Catalog=login;Integrated Security=True";
		SqlConnection sqlConn(connStr);
		sqlConn.Open();
		
		try
		{
			String^ sqlQuery_insertNew = "INSERT INTO caseIMP "+
				"(nameVictim, nameComplaint, DOB,"+
				"ageVictim, nameGuardian, addressLine1,"+
				"addressLine2, addressLine3, State,"+
				"zipCode, educationLevel, lastEducationInstitute)"
				"values(@nmV, @nmC, @dob, @ageV, @nmG, @adrL1, "+
				"@adrL2, @adrL3, @state, @zip, @edLv, @lastEd)";

			SqlCommand sqlCmd(sqlQuery_insertNew, % sqlConn);
			sqlCmd.Parameters->AddWithValue("@nmV", nameVictim->Text);
			sqlCmd.Parameters->AddWithValue("@nmC", complainedByName->Text);
			sqlCmd.Parameters->AddWithValue("@dob", dateOfBirthPick->Text);
			sqlCmd.Parameters->AddWithValue("@ageV", ageVictim->Text);
			sqlCmd.Parameters->AddWithValue("@nmG", guardianName->Text);
			sqlCmd.Parameters->AddWithValue("@adrL1", addressOne->Text);
			sqlCmd.Parameters->AddWithValue("@adrL2", addressTwo->Text);
			sqlCmd.Parameters->AddWithValue("@adrL3", addressThree->Text);
			sqlCmd.Parameters->AddWithValue("@state", stateName->Text);
			sqlCmd.Parameters->AddWithValue("@zip", zipCode->Text);
			sqlCmd.Parameters->AddWithValue("@edLv", educQualification->Text);
			sqlCmd.Parameters->AddWithValue("@lastEd", lastAttendedInstitute->Text);


			sqlCmd.ExecuteNonQuery();
			sqlConn.Close();
			
			MessageBox::Show("Successfully added to Database!",
				"ATRMS Dashboard", MessageBoxButtons::OK);

		}
		catch (Exception^ e)
		{
			MessageBox::Show("Error while updating data to DataBase.",
				"SQL Database Error",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);
		}
	}



	public:

		// Function to change BackColor and ForeColor of Buttons when Clicked
		System::Void changeButtonDesign(Button^ btn) {
			if (btn->BackColor == Color::Cyan)
			{
				btn->BackColor = Color::FromArgb(20, 20, 20);
				btn->ForeColor = Color::Cyan;
				btn->FlatAppearance->BorderSize = 2;
				return;
			}

			for each (Button^ btnRest in btnPanel->Controls)
			{
				btnRest->BackColor = Color::FromArgb(20, 20, 20);
				btnRest->ForeColor = Color::Cyan;
				btnRest->FlatAppearance->BorderSize = 2;

				if (btn == btnRest && btn->BackColor == Color::Cyan)
				{
					btnRest->BackColor = Color::FromArgb(20, 20, 20);
					btnRest->ForeColor = Color::Cyan;
					btnRest->FlatAppearance->BorderSize = 2;
				}
				else
				{
					btn->BackColor = Color::Cyan;
					btn->ForeColor = Color::FromArgb(20, 20, 20);
					btn->FlatAppearance->BorderSize = 0;
				}
			}
		}

		// Function to close all other panels and Open the specific Panel mapped to each button
		System::Void changePanel(Panel^ panel) {
			if (panel->Visible == true)
			{
				panel->Visible = false;
				return;
			}
			for each (Panel^ panelRest in containerPanel->Controls)
			{
				panelRest->Visible = false;
				if (panel == panelRest && panel->Visible == true)
					panel->Visible = false;
				else
					panel->Visible = true;
			}
		}
};
}
