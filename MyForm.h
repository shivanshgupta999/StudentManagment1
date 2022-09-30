#pragma once

namespace Student {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MySqlConnection^ sqlConn = gcnew MySqlConnection();
		MySqlCommand^ sqlCmd = gcnew MySqlCommand();
		DataTable^ sqlDt = gcnew DataTable();
		MySqlDataAdapter^ sqlDtA = gcnew MySqlDataAdapter();
		MySqlDataReader^ sqlRd;
		DataSet^ DS= gcnew DataSet();


		String^ sqlQuery;
		String^ server="localhost";
		String^ username="root";
		String^ passowrd="Saket@1****";
	private: System::Windows::Forms::DataGridView^ dataGridView1;
		   String^ database = "cppstudentdb";
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
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ lblBanking;
	private: System::Windows::Forms::Label^ lblDate;
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::Label^ txtranking;

	private: System::Windows::Forms::Label^ txtfinalDate;


	private: System::Windows::Forms::Label^ txttotal;

	private: System::Windows::Forms::ComboBox^ cboModel8;
	private: System::Windows::Forms::TextBox^ txtScore8;


	private: System::Windows::Forms::ComboBox^ cboModel7;
	private: System::Windows::Forms::TextBox^ txtScore7;


	private: System::Windows::Forms::ComboBox^ cboModel6;
	private: System::Windows::Forms::TextBox^ txtScore6;


	private: System::Windows::Forms::ComboBox^ cboModel5;
	private: System::Windows::Forms::TextBox^ txtScore5;


	private: System::Windows::Forms::ComboBox^ cboModel4;
	private: System::Windows::Forms::TextBox^ txtScore4;


	private: System::Windows::Forms::ComboBox^ cboModel3;
	private: System::Windows::Forms::TextBox^ txtScore3;


	private: System::Windows::Forms::ComboBox^ cboModel2;
	private: System::Windows::Forms::TextBox^ txtScore2;

	private: System::Windows::Forms::ComboBox^ cboModel1;
	private: System::Windows::Forms::TextBox^ txtScore1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ txtMsc;

	private: System::Windows::Forms::Label^ txtBA;
	private: System::Windows::Forms::Label^ txtPhD;


	private: System::Windows::Forms::Label^ txtBSc;
	private: System::Windows::Forms::Label^ txtMA;
private: System::Windows::Forms::ComboBox^ txtscholarship1;



private: System::Windows::Forms::ComboBox^ txtexchange1;

private: System::Windows::Forms::ComboBox^ txtaccommodation1;

private: System::Windows::Forms::ComboBox^ txtoversea1;

private: System::Windows::Forms::ComboBox^ txthomestudent1;

private: System::Windows::Forms::Label^ txtexchange;
private: System::Windows::Forms::Label^ txtscholarship;


private: System::Windows::Forms::Label^ txtaccommodation;

private: System::Windows::Forms::Label^ txthomestudent;
private: System::Windows::Forms::Label^ txtoversea;


private: System::Windows::Forms::Label^ txtprogramleader;
private: System::Windows::Forms::Label^ txtcoursetutor;


private: System::Windows::Forms::Label^ txtdeanfaculty;

private: System::Windows::Forms::Label^ txtcoursecode;
private: System::Windows::Forms::Label^ txtfaculty;


private: System::Windows::Forms::Label^ txtcourse;
private: System::Windows::Forms::NumericUpDown^ txtPhD1;


private: System::Windows::Forms::NumericUpDown^ txtMsc1;

private: System::Windows::Forms::NumericUpDown^ txtMA1;

private: System::Windows::Forms::NumericUpDown^ txtBSc1;

private: System::Windows::Forms::NumericUpDown^ txtBA1;

	private: System::Windows::Forms::Button^ btnAddExit;
	private: System::Windows::Forms::Button^ btnAddResult;
	private: System::Windows::Forms::Button^ btnAddReset;
	private: System::Windows::Forms::Button^ btnAddNew;
private: System::Windows::Forms::Label^ txtguidancemobile;
private: System::Windows::Forms::Label^ txtguidanceemail;


private: System::Windows::Forms::Label^ txtguidancelastname;
private: System::Windows::Forms::Label^ txtguidanceaddress;


private: System::Windows::Forms::Label^ txtguidancefirstname;

private: System::Windows::Forms::Label^ txtGuidence;
private: System::Windows::Forms::TextBox^ txtguidanceemail1;


private: System::Windows::Forms::TextBox^ txtguidancemobile1;

private: System::Windows::Forms::TextBox^ txtguidanceaddress1;

private: System::Windows::Forms::TextBox^ txtguidancelastname1;

private: System::Windows::Forms::TextBox^ txtguidancefirstname1;

private: System::Windows::Forms::ComboBox^ txtGuidence1;
private: System::Windows::Forms::TextBox^ txtcoursetutor1;


private: System::Windows::Forms::TextBox^ txtprogramleader1;

private: System::Windows::Forms::TextBox^ txtdeanfaculty1;

private: System::Windows::Forms::TextBox^ txtfaculty1;

private: System::Windows::Forms::TextBox^ txtcoursecode1;

private: System::Windows::Forms::ComboBox^ txtcourse1;

private: System::Windows::Forms::TextBox^ txtEmail1;

private: System::Windows::Forms::TextBox^ txtMobile1;

private: System::Windows::Forms::Label^ txtMobile;
private: System::Windows::Forms::Label^ txtEmail;
private: System::Windows::Forms::TextBox^ txtDob1;



private: System::Windows::Forms::TextBox^ txtAddress1;

private: System::Windows::Forms::TextBox^ txtlastname1;

private: System::Windows::Forms::TextBox^ txtFirstName1;

private: System::Windows::Forms::TextBox^ studentid;
private: System::Windows::Forms::ComboBox^ txtGender1;


private: System::Windows::Forms::Label^ txtGender;
private: System::Windows::Forms::Label^ txtDob;


private: System::Windows::Forms::Label^ txtAddress;

private: System::Windows::Forms::Label^ txtFirstName;
private: System::Windows::Forms::Label^ txtlastname;
private: System::Windows::Forms::Label^ id;






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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->lblBanking = (gcnew System::Windows::Forms::Label());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->txtranking = (gcnew System::Windows::Forms::Label());
			this->txtfinalDate = (gcnew System::Windows::Forms::Label());
			this->txttotal = (gcnew System::Windows::Forms::Label());
			this->cboModel8 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore8 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel7 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore7 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel6 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore6 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel5 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore5 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel4 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore4 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel3 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore3 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel2 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore2 = (gcnew System::Windows::Forms::TextBox());
			this->cboModel1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtScore1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->txtPhD1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMsc1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMA1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtBSc1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtBA1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->txtMsc = (gcnew System::Windows::Forms::Label());
			this->txtBA = (gcnew System::Windows::Forms::Label());
			this->txtPhD = (gcnew System::Windows::Forms::Label());
			this->txtBSc = (gcnew System::Windows::Forms::Label());
			this->txtMA = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->btnAddExit = (gcnew System::Windows::Forms::Button());
			this->btnAddResult = (gcnew System::Windows::Forms::Button());
			this->btnAddReset = (gcnew System::Windows::Forms::Button());
			this->btnAddNew = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->txtscholarship1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtexchange1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtaccommodation1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtoversea1 = (gcnew System::Windows::Forms::ComboBox());
			this->txthomestudent1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtexchange = (gcnew System::Windows::Forms::Label());
			this->txtscholarship = (gcnew System::Windows::Forms::Label());
			this->txtaccommodation = (gcnew System::Windows::Forms::Label());
			this->txthomestudent = (gcnew System::Windows::Forms::Label());
			this->txtoversea = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->txtguidancemobile = (gcnew System::Windows::Forms::Label());
			this->txtguidanceemail = (gcnew System::Windows::Forms::Label());
			this->txtguidancelastname = (gcnew System::Windows::Forms::Label());
			this->txtguidanceaddress = (gcnew System::Windows::Forms::Label());
			this->txtguidancefirstname = (gcnew System::Windows::Forms::Label());
			this->txtGuidence = (gcnew System::Windows::Forms::Label());
			this->txtguidanceemail1 = (gcnew System::Windows::Forms::TextBox());
			this->txtguidancemobile1 = (gcnew System::Windows::Forms::TextBox());
			this->txtguidanceaddress1 = (gcnew System::Windows::Forms::TextBox());
			this->txtguidancelastname1 = (gcnew System::Windows::Forms::TextBox());
			this->txtguidancefirstname1 = (gcnew System::Windows::Forms::TextBox());
			this->txtGuidence1 = (gcnew System::Windows::Forms::ComboBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txtcoursetutor1 = (gcnew System::Windows::Forms::TextBox());
			this->txtprogramleader1 = (gcnew System::Windows::Forms::TextBox());
			this->txtdeanfaculty1 = (gcnew System::Windows::Forms::TextBox());
			this->txtfaculty1 = (gcnew System::Windows::Forms::TextBox());
			this->txtcoursecode1 = (gcnew System::Windows::Forms::TextBox());
			this->txtcourse1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtprogramleader = (gcnew System::Windows::Forms::Label());
			this->txtcoursetutor = (gcnew System::Windows::Forms::Label());
			this->txtdeanfaculty = (gcnew System::Windows::Forms::Label());
			this->txtcoursecode = (gcnew System::Windows::Forms::Label());
			this->txtfaculty = (gcnew System::Windows::Forms::Label());
			this->txtcourse = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtEmail1 = (gcnew System::Windows::Forms::TextBox());
			this->txtMobile1 = (gcnew System::Windows::Forms::TextBox());
			this->txtMobile = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::Label());
			this->txtDob1 = (gcnew System::Windows::Forms::TextBox());
			this->txtAddress1 = (gcnew System::Windows::Forms::TextBox());
			this->txtlastname1 = (gcnew System::Windows::Forms::TextBox());
			this->txtFirstName1 = (gcnew System::Windows::Forms::TextBox());
			this->studentid = (gcnew System::Windows::Forms::TextBox());
			this->txtGender1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtGender = (gcnew System::Windows::Forms::Label());
			this->txtDob = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::Label());
			this->txtFirstName = (gcnew System::Windows::Forms::Label());
			this->txtlastname = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtPhD1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtMsc1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtMA1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtBSc1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtBA1))->BeginInit();
			this->panel8->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(4);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1829, 924);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->tabPage1->Controls->Add(this->panel5);
			this->tabPage1->Controls->Add(this->panel6);
			this->tabPage1->Controls->Add(this->panel8);
			this->tabPage1->Controls->Add(this->panel4);
			this->tabPage1->Controls->Add(this->panel3);
			this->tabPage1->Controls->Add(this->panel2);
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(4);
			this->tabPage1->Size = System::Drawing::Size(1821, 895);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"UniversitySystem";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->lblBanking);
			this->panel5->Controls->Add(this->lblDate);
			this->panel5->Controls->Add(this->lblTotal);
			this->panel5->Controls->Add(this->txtranking);
			this->panel5->Controls->Add(this->txtfinalDate);
			this->panel5->Controls->Add(this->txttotal);
			this->panel5->Controls->Add(this->cboModel8);
			this->panel5->Controls->Add(this->txtScore8);
			this->panel5->Controls->Add(this->cboModel7);
			this->panel5->Controls->Add(this->txtScore7);
			this->panel5->Controls->Add(this->cboModel6);
			this->panel5->Controls->Add(this->txtScore6);
			this->panel5->Controls->Add(this->cboModel5);
			this->panel5->Controls->Add(this->txtScore5);
			this->panel5->Controls->Add(this->cboModel4);
			this->panel5->Controls->Add(this->txtScore4);
			this->panel5->Controls->Add(this->cboModel3);
			this->panel5->Controls->Add(this->txtScore3);
			this->panel5->Controls->Add(this->cboModel2);
			this->panel5->Controls->Add(this->txtScore2);
			this->panel5->Controls->Add(this->cboModel1);
			this->panel5->Controls->Add(this->txtScore1);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->panel10);
			this->panel5->Location = System::Drawing::Point(1396, 7);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(418, 872);
			this->panel5->TabIndex = 0;
			// 
			// lblBanking
			// 
			this->lblBanking->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblBanking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblBanking->Location = System::Drawing::Point(215, 769);
			this->lblBanking->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBanking->Name = L"lblBanking";
			this->lblBanking->Size = System::Drawing::Size(177, 35);
			this->lblBanking->TabIndex = 30;
			// 
			// lblDate
			// 
			this->lblDate->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblDate->Location = System::Drawing::Point(215, 816);
			this->lblDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDate->Name = L"lblDate";
			this->lblDate->Size = System::Drawing::Size(177, 35);
			this->lblDate->TabIndex = 29;
			// 
			// lblTotal
			// 
			this->lblTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(215, 720);
			this->lblTotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(177, 35);
			this->lblTotal->TabIndex = 28;
			this->lblTotal->Tag = L"";
			// 
			// txtranking
			// 
			this->txtranking->AutoSize = true;
			this->txtranking->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtranking->Location = System::Drawing::Point(17, 769);
			this->txtranking->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtranking->Name = L"txtranking";
			this->txtranking->Size = System::Drawing::Size(126, 36);
			this->txtranking->TabIndex = 27;
			this->txtranking->Text = L"Ranking";
			// 
			// txtfinalDate
			// 
			this->txtfinalDate->AutoSize = true;
			this->txtfinalDate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfinalDate->Location = System::Drawing::Point(17, 816);
			this->txtfinalDate->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtfinalDate->Name = L"txtfinalDate";
			this->txtfinalDate->Size = System::Drawing::Size(76, 36);
			this->txtfinalDate->TabIndex = 26;
			this->txtfinalDate->Text = L"Date";
			// 
			// txttotal
			// 
			this->txttotal->AutoSize = true;
			this->txttotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txttotal->Location = System::Drawing::Point(17, 720);
			this->txttotal->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txttotal->Name = L"txttotal";
			this->txttotal->Size = System::Drawing::Size(81, 36);
			this->txttotal->TabIndex = 25;
			this->txttotal->Tag = L"";
			this->txttotal->Text = L"Total";
			// 
			// cboModel8
			// 
			this->cboModel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel8->FormattingEnabled = true;
			this->cboModel8->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel8->Location = System::Drawing::Point(67, 650);
			this->cboModel8->Margin = System::Windows::Forms::Padding(4);
			this->cboModel8->Name = L"cboModel8";
			this->cboModel8->Size = System::Drawing::Size(215, 44);
			this->cboModel8->TabIndex = 24;
			this->cboModel8->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel8_SelectedIndexChanged);
			// 
			// txtScore8
			// 
			this->txtScore8->Enabled = false;
			this->txtScore8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore8->Location = System::Drawing::Point(291, 650);
			this->txtScore8->Margin = System::Windows::Forms::Padding(4);
			this->txtScore8->Name = L"txtScore8";
			this->txtScore8->Size = System::Drawing::Size(100, 41);
			this->txtScore8->TabIndex = 23;
			this->txtScore8->Text = L"0";
			this->txtScore8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore8->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel7
			// 
			this->cboModel7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel7->FormattingEnabled = true;
			this->cboModel7->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel7->Location = System::Drawing::Point(67, 597);
			this->cboModel7->Margin = System::Windows::Forms::Padding(4);
			this->cboModel7->Name = L"cboModel7";
			this->cboModel7->Size = System::Drawing::Size(215, 44);
			this->cboModel7->TabIndex = 22;
			this->cboModel7->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel7_SelectedIndexChanged);
			// 
			// txtScore7
			// 
			this->txtScore7->Enabled = false;
			this->txtScore7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore7->Location = System::Drawing::Point(291, 597);
			this->txtScore7->Margin = System::Windows::Forms::Padding(4);
			this->txtScore7->Name = L"txtScore7";
			this->txtScore7->Size = System::Drawing::Size(100, 41);
			this->txtScore7->TabIndex = 21;
			this->txtScore7->Text = L"0";
			this->txtScore7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore7->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel6
			// 
			this->cboModel6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel6->FormattingEnabled = true;
			this->cboModel6->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel6->Location = System::Drawing::Point(67, 537);
			this->cboModel6->Margin = System::Windows::Forms::Padding(4);
			this->cboModel6->Name = L"cboModel6";
			this->cboModel6->Size = System::Drawing::Size(215, 44);
			this->cboModel6->TabIndex = 20;
			this->cboModel6->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel6_SelectedIndexChanged);
			// 
			// txtScore6
			// 
			this->txtScore6->Enabled = false;
			this->txtScore6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore6->Location = System::Drawing::Point(291, 537);
			this->txtScore6->Margin = System::Windows::Forms::Padding(4);
			this->txtScore6->Name = L"txtScore6";
			this->txtScore6->Size = System::Drawing::Size(100, 41);
			this->txtScore6->TabIndex = 19;
			this->txtScore6->Text = L"0";
			this->txtScore6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore6->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel5
			// 
			this->cboModel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel5->FormattingEnabled = true;
			this->cboModel5->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel5->Location = System::Drawing::Point(67, 484);
			this->cboModel5->Margin = System::Windows::Forms::Padding(4);
			this->cboModel5->Name = L"cboModel5";
			this->cboModel5->Size = System::Drawing::Size(215, 44);
			this->cboModel5->TabIndex = 18;
			this->cboModel5->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel5_SelectedIndexChanged);
			// 
			// txtScore5
			// 
			this->txtScore5->Enabled = false;
			this->txtScore5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore5->Location = System::Drawing::Point(291, 484);
			this->txtScore5->Margin = System::Windows::Forms::Padding(4);
			this->txtScore5->Name = L"txtScore5";
			this->txtScore5->Size = System::Drawing::Size(100, 41);
			this->txtScore5->TabIndex = 17;
			this->txtScore5->Text = L"0";
			this->txtScore5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore5->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel4
			// 
			this->cboModel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel4->FormattingEnabled = true;
			this->cboModel4->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel4->Location = System::Drawing::Point(67, 427);
			this->cboModel4->Margin = System::Windows::Forms::Padding(4);
			this->cboModel4->Name = L"cboModel4";
			this->cboModel4->Size = System::Drawing::Size(215, 44);
			this->cboModel4->TabIndex = 16;
			this->cboModel4->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel4_SelectedIndexChanged);
			// 
			// txtScore4
			// 
			this->txtScore4->Enabled = false;
			this->txtScore4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore4->Location = System::Drawing::Point(291, 427);
			this->txtScore4->Margin = System::Windows::Forms::Padding(4);
			this->txtScore4->Name = L"txtScore4";
			this->txtScore4->Size = System::Drawing::Size(100, 41);
			this->txtScore4->TabIndex = 15;
			this->txtScore4->Text = L"0";
			this->txtScore4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore4->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel3
			// 
			this->cboModel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel3->FormattingEnabled = true;
			this->cboModel3->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel3->Location = System::Drawing::Point(67, 374);
			this->cboModel3->Margin = System::Windows::Forms::Padding(4);
			this->cboModel3->Name = L"cboModel3";
			this->cboModel3->Size = System::Drawing::Size(215, 44);
			this->cboModel3->TabIndex = 14;
			this->cboModel3->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel3_SelectedIndexChanged);
			// 
			// txtScore3
			// 
			this->txtScore3->Enabled = false;
			this->txtScore3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore3->Location = System::Drawing::Point(291, 374);
			this->txtScore3->Margin = System::Windows::Forms::Padding(4);
			this->txtScore3->Name = L"txtScore3";
			this->txtScore3->Size = System::Drawing::Size(100, 41);
			this->txtScore3->TabIndex = 13;
			this->txtScore3->Text = L"0";
			this->txtScore3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore3->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel2
			// 
			this->cboModel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel2->FormattingEnabled = true;
			this->cboModel2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel2->Location = System::Drawing::Point(67, 314);
			this->cboModel2->Margin = System::Windows::Forms::Padding(4);
			this->cboModel2->Name = L"cboModel2";
			this->cboModel2->Size = System::Drawing::Size(215, 44);
			this->cboModel2->TabIndex = 12;
			this->cboModel2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel2_SelectedIndexChanged);
			// 
			// txtScore2
			// 
			this->txtScore2->Enabled = false;
			this->txtScore2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore2->Location = System::Drawing::Point(291, 314);
			this->txtScore2->Margin = System::Windows::Forms::Padding(4);
			this->txtScore2->Name = L"txtScore2";
			this->txtScore2->Size = System::Drawing::Size(100, 41);
			this->txtScore2->TabIndex = 11;
			this->txtScore2->Text = L"0";
			this->txtScore2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore2->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// cboModel1
			// 
			this->cboModel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cboModel1->FormattingEnabled = true;
			this->cboModel1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Visual C++ Programming", L"Visual C# Programming",
					L"Visual Basic Programming", L"Python", L"Java", L"Rust", L"Go"
			});
			this->cboModel1->Location = System::Drawing::Point(67, 261);
			this->cboModel1->Margin = System::Windows::Forms::Padding(4);
			this->cboModel1->Name = L"cboModel1";
			this->cboModel1->Size = System::Drawing::Size(215, 44);
			this->cboModel1->TabIndex = 10;
			this->cboModel1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel1_SelectedIndexChanged);
			// 
			// txtScore1
			// 
			this->txtScore1->Enabled = false;
			this->txtScore1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtScore1->Location = System::Drawing::Point(291, 261);
			this->txtScore1->Margin = System::Windows::Forms::Padding(4);
			this->txtScore1->Name = L"txtScore1";
			this->txtScore1->Size = System::Drawing::Size(100, 41);
			this->txtScore1->TabIndex = 9;
			this->txtScore1->Text = L"0";
			this->txtScore1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->txtScore1->MouseLeave += gcnew System::EventHandler(this, &MyForm::MLeaves);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(17, 433);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 38);
			this->label7->TabIndex = 8;
			this->label7->Text = L"4";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(17, 378);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(34, 38);
			this->label8->TabIndex = 7;
			this->label8->Text = L"3";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(17, 601);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 38);
			this->label5->TabIndex = 6;
			this->label5->Text = L"7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(17, 487);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 38);
			this->label6->TabIndex = 5;
			this->label6->Text = L"5";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(17, 651);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 38);
			this->label3->TabIndex = 4;
			this->label3->Text = L"8";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(17, 543);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"6";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(17, 314);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 38);
			this->label2->TabIndex = 2;
			this->label2->Text = L"2";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(17, 258);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 38);
			this->label1->TabIndex = 1;
			this->label1->Text = L"1";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::MediumTurquoise;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->monthCalendar1);
			this->panel10->Location = System::Drawing::Point(17, 18);
			this->panel10->Margin = System::Windows::Forms::Padding(4);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(375, 221);
			this->panel10->TabIndex = 0;
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Location = System::Drawing::Point(23, 9);
			this->monthCalendar1->Margin = System::Windows::Forms::Padding(12, 11, 12, 11);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowWeekNumbers = true;
			this->monthCalendar1->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->txtPhD1);
			this->panel6->Controls->Add(this->txtMsc1);
			this->panel6->Controls->Add(this->txtMA1);
			this->panel6->Controls->Add(this->txtBSc1);
			this->panel6->Controls->Add(this->txtBA1);
			this->panel6->Controls->Add(this->txtMsc);
			this->panel6->Controls->Add(this->txtBA);
			this->panel6->Controls->Add(this->txtPhD);
			this->panel6->Controls->Add(this->txtBSc);
			this->panel6->Controls->Add(this->txtMA);
			this->panel6->Location = System::Drawing::Point(1077, 436);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(310, 284);
			this->panel6->TabIndex = 0;
			// 
			// txtPhD1
			// 
			this->txtPhD1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->txtPhD1->Location = System::Drawing::Point(139, 222);
			this->txtPhD1->Margin = System::Windows::Forms::Padding(4);
			this->txtPhD1->Name = L"txtPhD1";
			this->txtPhD1->Size = System::Drawing::Size(160, 41);
			this->txtPhD1->TabIndex = 48;
			this->txtPhD1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMsc1
			// 
			this->txtMsc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->txtMsc1->Location = System::Drawing::Point(139, 169);
			this->txtMsc1->Margin = System::Windows::Forms::Padding(4);
			this->txtMsc1->Name = L"txtMsc1";
			this->txtMsc1->Size = System::Drawing::Size(160, 41);
			this->txtMsc1->TabIndex = 47;
			this->txtMsc1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMA1
			// 
			this->txtMA1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->txtMA1->Location = System::Drawing::Point(139, 116);
			this->txtMA1->Margin = System::Windows::Forms::Padding(4);
			this->txtMA1->Name = L"txtMA1";
			this->txtMA1->Size = System::Drawing::Size(160, 41);
			this->txtMA1->TabIndex = 46;
			this->txtMA1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBSc1
			// 
			this->txtBSc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->txtBSc1->Location = System::Drawing::Point(139, 64);
			this->txtBSc1->Margin = System::Windows::Forms::Padding(4);
			this->txtBSc1->Name = L"txtBSc1";
			this->txtBSc1->Size = System::Drawing::Size(160, 41);
			this->txtBSc1->TabIndex = 45;
			this->txtBSc1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtBA1
			// 
			this->txtBA1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->txtBA1->Location = System::Drawing::Point(139, 12);
			this->txtBA1->Margin = System::Windows::Forms::Padding(4);
			this->txtBA1->Name = L"txtBA1";
			this->txtBA1->Size = System::Drawing::Size(160, 41);
			this->txtBA1->TabIndex = 44;
			this->txtBA1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtMsc
			// 
			this->txtMsc->AutoSize = true;
			this->txtMsc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMsc->Location = System::Drawing::Point(16, 176);
			this->txtMsc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtMsc->Name = L"txtMsc";
			this->txtMsc->Size = System::Drawing::Size(75, 36);
			this->txtMsc->TabIndex = 43;
			this->txtMsc->Text = L"MSc";
			// 
			// txtBA
			// 
			this->txtBA->AutoSize = true;
			this->txtBA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBA->Location = System::Drawing::Point(16, 9);
			this->txtBA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtBA->Name = L"txtBA";
			this->txtBA->Size = System::Drawing::Size(56, 36);
			this->txtBA->TabIndex = 40;
			this->txtBA->Text = L"BA";
			// 
			// txtPhD
			// 
			this->txtPhD->AutoSize = true;
			this->txtPhD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtPhD->Location = System::Drawing::Point(16, 224);
			this->txtPhD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtPhD->Name = L"txtPhD";
			this->txtPhD->Size = System::Drawing::Size(73, 36);
			this->txtPhD->TabIndex = 42;
			this->txtPhD->Text = L"PhD";
			// 
			// txtBSc
			// 
			this->txtBSc->AutoSize = true;
			this->txtBSc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtBSc->Location = System::Drawing::Point(16, 65);
			this->txtBSc->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtBSc->Name = L"txtBSc";
			this->txtBSc->Size = System::Drawing::Size(70, 36);
			this->txtBSc->TabIndex = 39;
			this->txtBSc->Text = L"BSc";
			// 
			// txtMA
			// 
			this->txtMA->AutoSize = true;
			this->txtMA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMA->Location = System::Drawing::Point(16, 119);
			this->txtMA->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtMA->Name = L"txtMA";
			this->txtMA->Size = System::Drawing::Size(61, 36);
			this->txtMA->TabIndex = 41;
			this->txtMA->Tag = L"";
			this->txtMA->Text = L"MA";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::SystemColors::Control;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->btnAddExit);
			this->panel8->Controls->Add(this->btnAddResult);
			this->panel8->Controls->Add(this->btnAddReset);
			this->panel8->Controls->Add(this->btnAddNew);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->panel8->Location = System::Drawing::Point(599, 725);
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(789, 155);
			this->panel8->TabIndex = 0;
			// 
			// btnAddExit
			// 
			this->btnAddExit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->btnAddExit->Location = System::Drawing::Point(573, 38);
			this->btnAddExit->Margin = System::Windows::Forms::Padding(4);
			this->btnAddExit->Name = L"btnAddExit";
			this->btnAddExit->Size = System::Drawing::Size(147, 57);
			this->btnAddExit->TabIndex = 4;
			this->btnAddExit->Text = L"Exit";
			this->btnAddExit->UseVisualStyleBackColor = true;
			this->btnAddExit->Click += gcnew System::EventHandler(this, &MyForm::btnAddExit_Click);
			// 
			// btnAddResult
			// 
			this->btnAddResult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->btnAddResult->Location = System::Drawing::Point(389, 42);
			this->btnAddResult->Margin = System::Windows::Forms::Padding(4);
			this->btnAddResult->Name = L"btnAddResult";
			this->btnAddResult->Size = System::Drawing::Size(147, 57);
			this->btnAddResult->TabIndex = 3;
			this->btnAddResult->Text = L"Result";
			this->btnAddResult->UseVisualStyleBackColor = true;
			this->btnAddResult->Click += gcnew System::EventHandler(this, &MyForm::btnAddResult_Click);
			// 
			// btnAddReset
			// 
			this->btnAddReset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->btnAddReset->Location = System::Drawing::Point(205, 42);
			this->btnAddReset->Margin = System::Windows::Forms::Padding(4);
			this->btnAddReset->Name = L"btnAddReset";
			this->btnAddReset->Size = System::Drawing::Size(147, 57);
			this->btnAddReset->TabIndex = 2;
			this->btnAddReset->Text = L"Reset";
			this->btnAddReset->UseVisualStyleBackColor = true;
			this->btnAddReset->Click += gcnew System::EventHandler(this, &MyForm::btnAddReset_Click);
			// 
			// btnAddNew
			// 
			this->btnAddNew->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->btnAddNew->Location = System::Drawing::Point(16, 41);
			this->btnAddNew->Margin = System::Windows::Forms::Padding(4);
			this->btnAddNew->Name = L"btnAddNew";
			this->btnAddNew->Size = System::Drawing::Size(147, 57);
			this->btnAddNew->TabIndex = 1;
			this->btnAddNew->Text = L"Add";
			this->btnAddNew->UseVisualStyleBackColor = true;
			this->btnAddNew->Click += gcnew System::EventHandler(this, &MyForm::btnAddNew_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::Control;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Location = System::Drawing::Point(4, 305);
			this->panel9->Margin = System::Windows::Forms::Padding(4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(290, 112);
			this->panel9->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->txtscholarship1);
			this->panel4->Controls->Add(this->txtexchange1);
			this->panel4->Controls->Add(this->txtaccommodation1);
			this->panel4->Controls->Add(this->txtoversea1);
			this->panel4->Controls->Add(this->txthomestudent1);
			this->panel4->Controls->Add(this->txtexchange);
			this->panel4->Controls->Add(this->txtscholarship);
			this->panel4->Controls->Add(this->txtaccommodation);
			this->panel4->Controls->Add(this->txthomestudent);
			this->panel4->Controls->Add(this->txtoversea);
			this->panel4->Controls->Add(this->panel7);
			this->panel4->Location = System::Drawing::Point(599, 433);
			this->panel4->Margin = System::Windows::Forms::Padding(4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(470, 284);
			this->panel4->TabIndex = 0;
			// 
			// txtscholarship1
			// 
			this->txtscholarship1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtscholarship1->FormattingEnabled = true;
			this->txtscholarship1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
			this->txtscholarship1->Location = System::Drawing::Point(300, 226);
			this->txtscholarship1->Margin = System::Windows::Forms::Padding(4);
			this->txtscholarship1->Name = L"txtscholarship1";
			this->txtscholarship1->Size = System::Drawing::Size(155, 44);
			this->txtscholarship1->TabIndex = 43;
			this->txtscholarship1->Text = L"No";
			this->txtscholarship1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::cboModel5_SelectedIndexChanged);
			// 
			// txtexchange1
			// 
			this->txtexchange1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtexchange1->FormattingEnabled = true;
			this->txtexchange1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
			this->txtexchange1->Location = System::Drawing::Point(300, 172);
			this->txtexchange1->Margin = System::Windows::Forms::Padding(4);
			this->txtexchange1->Name = L"txtexchange1";
			this->txtexchange1->Size = System::Drawing::Size(155, 44);
			this->txtexchange1->TabIndex = 42;
			this->txtexchange1->Text = L"No";
			// 
			// txtaccommodation1
			// 
			this->txtaccommodation1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtaccommodation1->FormattingEnabled = true;
			this->txtaccommodation1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
			this->txtaccommodation1->Location = System::Drawing::Point(303, 118);
			this->txtaccommodation1->Margin = System::Windows::Forms::Padding(4);
			this->txtaccommodation1->Name = L"txtaccommodation1";
			this->txtaccommodation1->Size = System::Drawing::Size(155, 44);
			this->txtaccommodation1->TabIndex = 41;
			this->txtaccommodation1->Text = L"No";
			// 
			// txtoversea1
			// 
			this->txtoversea1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtoversea1->FormattingEnabled = true;
			this->txtoversea1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
			this->txtoversea1->Location = System::Drawing::Point(300, 64);
			this->txtoversea1->Margin = System::Windows::Forms::Padding(4);
			this->txtoversea1->Name = L"txtoversea1";
			this->txtoversea1->Size = System::Drawing::Size(155, 44);
			this->txtoversea1->TabIndex = 40;
			this->txtoversea1->Text = L"No";
			// 
			// txthomestudent1
			// 
			this->txthomestudent1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txthomestudent1->FormattingEnabled = true;
			this->txthomestudent1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"No", L"Yes" });
			this->txthomestudent1->Location = System::Drawing::Point(300, 11);
			this->txthomestudent1->Margin = System::Windows::Forms::Padding(4);
			this->txthomestudent1->Name = L"txthomestudent1";
			this->txthomestudent1->Size = System::Drawing::Size(155, 44);
			this->txthomestudent1->TabIndex = 39;
			this->txthomestudent1->Text = L"No";
			// 
			// txtexchange
			// 
			this->txtexchange->AutoSize = true;
			this->txtexchange->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtexchange->Location = System::Drawing::Point(4, 167);
			this->txtexchange->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtexchange->Name = L"txtexchange";
			this->txtexchange->Size = System::Drawing::Size(148, 36);
			this->txtexchange->TabIndex = 38;
			this->txtexchange->Text = L"Exchange";
			// 
			// txtscholarship
			// 
			this->txtscholarship->AutoSize = true;
			this->txtscholarship->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtscholarship->Location = System::Drawing::Point(4, 225);
			this->txtscholarship->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtscholarship->Name = L"txtscholarship";
			this->txtscholarship->Size = System::Drawing::Size(173, 36);
			this->txtscholarship->TabIndex = 37;
			this->txtscholarship->Text = L"Scholarship";
			// 
			// txtaccommodation
			// 
			this->txtaccommodation->AutoSize = true;
			this->txtaccommodation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtaccommodation->Location = System::Drawing::Point(4, 117);
			this->txtaccommodation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtaccommodation->Name = L"txtaccommodation";
			this->txtaccommodation->Size = System::Drawing::Size(228, 36);
			this->txtaccommodation->TabIndex = 36;
			this->txtaccommodation->Tag = L"";
			this->txtaccommodation->Text = L"Accommodation";
			// 
			// txthomestudent
			// 
			this->txthomestudent->AutoSize = true;
			this->txthomestudent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txthomestudent->Location = System::Drawing::Point(4, 11);
			this->txthomestudent->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txthomestudent->Name = L"txthomestudent";
			this->txthomestudent->Size = System::Drawing::Size(195, 36);
			this->txthomestudent->TabIndex = 35;
			this->txthomestudent->Text = L"HomeStudent";
			// 
			// txtoversea
			// 
			this->txtoversea->AutoSize = true;
			this->txtoversea->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtoversea->Location = System::Drawing::Point(1, 64);
			this->txtoversea->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtoversea->Name = L"txtoversea";
			this->txtoversea->Size = System::Drawing::Size(241, 36);
			this->txtoversea->TabIndex = 34;
			this->txtoversea->Text = L"OverSea Student";
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(4, 305);
			this->panel7->Margin = System::Windows::Forms::Padding(4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(290, 112);
			this->panel7->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::Control;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->txtguidancemobile);
			this->panel3->Controls->Add(this->txtguidanceemail);
			this->panel3->Controls->Add(this->txtguidancelastname);
			this->panel3->Controls->Add(this->txtguidanceaddress);
			this->panel3->Controls->Add(this->txtguidancefirstname);
			this->panel3->Controls->Add(this->txtGuidence);
			this->panel3->Controls->Add(this->txtguidanceemail1);
			this->panel3->Controls->Add(this->txtguidancemobile1);
			this->panel3->Controls->Add(this->txtguidanceaddress1);
			this->panel3->Controls->Add(this->txtguidancelastname1);
			this->panel3->Controls->Add(this->txtguidancefirstname1);
			this->panel3->Controls->Add(this->txtGuidence1);
			this->panel3->Location = System::Drawing::Point(12, 553);
			this->panel3->Margin = System::Windows::Forms::Padding(4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(578, 327);
			this->panel3->TabIndex = 0;
			// 
			// txtguidancemobile
			// 
			this->txtguidancemobile->AutoSize = true;
			this->txtguidancemobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtguidancemobile->Location = System::Drawing::Point(4, 231);
			this->txtguidancemobile->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtguidancemobile->Name = L"txtguidancemobile";
			this->txtguidancemobile->Size = System::Drawing::Size(104, 36);
			this->txtguidancemobile->TabIndex = 73;
			this->txtguidancemobile->Text = L"Mobile";
			// 
			// txtguidanceemail
			// 
			this->txtguidanceemail->AutoSize = true;
			this->txtguidanceemail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtguidanceemail->Location = System::Drawing::Point(4, 278);
			this->txtguidanceemail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtguidanceemail->Name = L"txtguidanceemail";
			this->txtguidanceemail->Size = System::Drawing::Size(88, 36);
			this->txtguidanceemail->TabIndex = 72;
			this->txtguidanceemail->Text = L"Email";
			// 
			// txtguidancelastname
			// 
			this->txtguidancelastname->AutoSize = true;
			this->txtguidancelastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtguidancelastname->Location = System::Drawing::Point(4, 132);
			this->txtguidancelastname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtguidancelastname->Name = L"txtguidancelastname";
			this->txtguidancelastname->Size = System::Drawing::Size(156, 36);
			this->txtguidancelastname->TabIndex = 71;
			this->txtguidancelastname->Text = L"Last Name";
			// 
			// txtguidanceaddress
			// 
			this->txtguidanceaddress->AutoSize = true;
			this->txtguidanceaddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtguidanceaddress->Location = System::Drawing::Point(4, 180);
			this->txtguidanceaddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtguidanceaddress->Name = L"txtguidanceaddress";
			this->txtguidanceaddress->Size = System::Drawing::Size(142, 36);
			this->txtguidanceaddress->TabIndex = 70;
			this->txtguidanceaddress->Text = L"Adderess";
			// 
			// txtguidancefirstname
			// 
			this->txtguidancefirstname->AutoSize = true;
			this->txtguidancefirstname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtguidancefirstname->Location = System::Drawing::Point(3, 79);
			this->txtguidancefirstname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtguidancefirstname->Name = L"txtguidancefirstname";
			this->txtguidancefirstname->Size = System::Drawing::Size(158, 36);
			this->txtguidancefirstname->TabIndex = 69;
			this->txtguidancefirstname->Tag = L"";
			this->txtguidancefirstname->Text = L"First Name";
			// 
			// txtGuidence
			// 
			this->txtGuidence->AutoSize = true;
			this->txtGuidence->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGuidence->Location = System::Drawing::Point(4, 23);
			this->txtGuidence->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtGuidence->Name = L"txtGuidence";
			this->txtGuidence->Size = System::Drawing::Size(143, 36);
			this->txtGuidence->TabIndex = 68;
			this->txtGuidence->Text = L"Guidance";
			// 
			// txtguidanceemail1
			// 
			this->txtguidanceemail1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtguidanceemail1->Location = System::Drawing::Point(229, 278);
			this->txtguidanceemail1->Margin = System::Windows::Forms::Padding(4);
			this->txtguidanceemail1->Name = L"txtguidanceemail1";
			this->txtguidanceemail1->Size = System::Drawing::Size(329, 41);
			this->txtguidanceemail1->TabIndex = 67;
			// 
			// txtguidancemobile1
			// 
			this->txtguidancemobile1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtguidancemobile1->Location = System::Drawing::Point(229, 228);
			this->txtguidancemobile1->Margin = System::Windows::Forms::Padding(4);
			this->txtguidancemobile1->Name = L"txtguidancemobile1";
			this->txtguidancemobile1->Size = System::Drawing::Size(329, 41);
			this->txtguidancemobile1->TabIndex = 66;
			// 
			// txtguidanceaddress1
			// 
			this->txtguidanceaddress1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtguidanceaddress1->Location = System::Drawing::Point(229, 176);
			this->txtguidanceaddress1->Margin = System::Windows::Forms::Padding(4);
			this->txtguidanceaddress1->Name = L"txtguidanceaddress1";
			this->txtguidanceaddress1->Size = System::Drawing::Size(329, 41);
			this->txtguidanceaddress1->TabIndex = 65;
			// 
			// txtguidancelastname1
			// 
			this->txtguidancelastname1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtguidancelastname1->Location = System::Drawing::Point(229, 126);
			this->txtguidancelastname1->Margin = System::Windows::Forms::Padding(4);
			this->txtguidancelastname1->Name = L"txtguidancelastname1";
			this->txtguidancelastname1->Size = System::Drawing::Size(329, 41);
			this->txtguidancelastname1->TabIndex = 64;
			// 
			// txtguidancefirstname1
			// 
			this->txtguidancefirstname1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtguidancefirstname1->Location = System::Drawing::Point(229, 75);
			this->txtguidancefirstname1->Margin = System::Windows::Forms::Padding(4);
			this->txtguidancefirstname1->Name = L"txtguidancefirstname1";
			this->txtguidancefirstname1->Size = System::Drawing::Size(329, 41);
			this->txtguidancefirstname1->TabIndex = 63;
			// 
			// txtGuidence1
			// 
			this->txtGuidence1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGuidence1->FormattingEnabled = true;
			this->txtGuidence1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Father", L"Mother", L"Brother", L"Other" });
			this->txtGuidence1->Location = System::Drawing::Point(229, 16);
			this->txtGuidence1->Margin = System::Windows::Forms::Padding(4);
			this->txtGuidence1->Name = L"txtGuidence1";
			this->txtGuidence1->Size = System::Drawing::Size(329, 44);
			this->txtGuidence1->TabIndex = 62;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::Control;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->txtcoursetutor1);
			this->panel2->Controls->Add(this->txtprogramleader1);
			this->panel2->Controls->Add(this->txtdeanfaculty1);
			this->panel2->Controls->Add(this->txtfaculty1);
			this->panel2->Controls->Add(this->txtcoursecode1);
			this->panel2->Controls->Add(this->txtcourse1);
			this->panel2->Controls->Add(this->txtprogramleader);
			this->panel2->Controls->Add(this->txtcoursetutor);
			this->panel2->Controls->Add(this->txtdeanfaculty);
			this->panel2->Controls->Add(this->txtcoursecode);
			this->panel2->Controls->Add(this->txtfaculty);
			this->panel2->Controls->Add(this->txtcourse);
			this->panel2->Location = System::Drawing::Point(599, 7);
			this->panel2->Margin = System::Windows::Forms::Padding(4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(789, 418);
			this->panel2->TabIndex = 0;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// txtcoursetutor1
			// 
			this->txtcoursetutor1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcoursetutor1->Location = System::Drawing::Point(255, 331);
			this->txtcoursetutor1->Margin = System::Windows::Forms::Padding(4);
			this->txtcoursetutor1->Name = L"txtcoursetutor1";
			this->txtcoursetutor1->Size = System::Drawing::Size(476, 41);
			this->txtcoursetutor1->TabIndex = 45;
			// 
			// txtprogramleader1
			// 
			this->txtprogramleader1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtprogramleader1->Location = System::Drawing::Point(255, 268);
			this->txtprogramleader1->Margin = System::Windows::Forms::Padding(4);
			this->txtprogramleader1->Name = L"txtprogramleader1";
			this->txtprogramleader1->Size = System::Drawing::Size(476, 41);
			this->txtprogramleader1->TabIndex = 44;
			// 
			// txtdeanfaculty1
			// 
			this->txtdeanfaculty1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtdeanfaculty1->Location = System::Drawing::Point(255, 208);
			this->txtdeanfaculty1->Margin = System::Windows::Forms::Padding(4);
			this->txtdeanfaculty1->Name = L"txtdeanfaculty1";
			this->txtdeanfaculty1->Size = System::Drawing::Size(476, 41);
			this->txtdeanfaculty1->TabIndex = 43;
			// 
			// txtfaculty1
			// 
			this->txtfaculty1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfaculty1->Location = System::Drawing::Point(255, 148);
			this->txtfaculty1->Margin = System::Windows::Forms::Padding(4);
			this->txtfaculty1->Name = L"txtfaculty1";
			this->txtfaculty1->Size = System::Drawing::Size(476, 41);
			this->txtfaculty1->TabIndex = 42;
			// 
			// txtcoursecode1
			// 
			this->txtcoursecode1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcoursecode1->Location = System::Drawing::Point(255, 87);
			this->txtcoursecode1->Margin = System::Windows::Forms::Padding(4);
			this->txtcoursecode1->Name = L"txtcoursecode1";
			this->txtcoursecode1->Size = System::Drawing::Size(476, 41);
			this->txtcoursecode1->TabIndex = 41;
			// 
			// txtcourse1
			// 
			this->txtcourse1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcourse1->FormattingEnabled = true;
			this->txtcourse1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Select a course", L"Bsc Serios Games", L"BscComputer science",
					L"Electrical", L"power electrinics", L"power Engineernig", L"Object oriented programming"
			});
			this->txtcourse1->Location = System::Drawing::Point(255, 28);
			this->txtcourse1->Margin = System::Windows::Forms::Padding(4);
			this->txtcourse1->Name = L"txtcourse1";
			this->txtcourse1->Size = System::Drawing::Size(476, 44);
			this->txtcourse1->TabIndex = 40;
			this->txtcourse1->Text = L"Select a Course";
			this->txtcourse1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::txtcourse1_SelectedIndexChanged);
			// 
			// txtprogramleader
			// 
			this->txtprogramleader->AutoSize = true;
			this->txtprogramleader->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtprogramleader->Location = System::Drawing::Point(4, 273);
			this->txtprogramleader->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtprogramleader->Name = L"txtprogramleader";
			this->txtprogramleader->Size = System::Drawing::Size(228, 36);
			this->txtprogramleader->TabIndex = 33;
			this->txtprogramleader->Text = L"Program Leader";
			// 
			// txtcoursetutor
			// 
			this->txtcoursetutor->AutoSize = true;
			this->txtcoursetutor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcoursetutor->Location = System::Drawing::Point(4, 330);
			this->txtcoursetutor->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtcoursetutor->Name = L"txtcoursetutor";
			this->txtcoursetutor->Size = System::Drawing::Size(189, 36);
			this->txtcoursetutor->TabIndex = 32;
			this->txtcoursetutor->Text = L"Course Tutor";
			// 
			// txtdeanfaculty
			// 
			this->txtdeanfaculty->AutoSize = true;
			this->txtdeanfaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtdeanfaculty->Location = System::Drawing::Point(3, 204);
			this->txtdeanfaculty->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtdeanfaculty->Name = L"txtdeanfaculty";
			this->txtdeanfaculty->Size = System::Drawing::Size(222, 36);
			this->txtdeanfaculty->TabIndex = 31;
			this->txtdeanfaculty->Tag = L"";
			this->txtdeanfaculty->Text = L"Dean of Faculty";
			// 
			// txtcoursecode
			// 
			this->txtcoursecode->AutoSize = true;
			this->txtcoursecode->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcoursecode->Location = System::Drawing::Point(4, 78);
			this->txtcoursecode->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtcoursecode->Name = L"txtcoursecode";
			this->txtcoursecode->Size = System::Drawing::Size(190, 36);
			this->txtcoursecode->TabIndex = 30;
			this->txtcoursecode->Text = L"Course Code";
			// 
			// txtfaculty
			// 
			this->txtfaculty->AutoSize = true;
			this->txtfaculty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtfaculty->Location = System::Drawing::Point(5, 138);
			this->txtfaculty->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtfaculty->Name = L"txtfaculty";
			this->txtfaculty->Size = System::Drawing::Size(111, 36);
			this->txtfaculty->TabIndex = 29;
			this->txtfaculty->Text = L"Faculty";
			this->txtfaculty->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// txtcourse
			// 
			this->txtcourse->AutoSize = true;
			this->txtcourse->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtcourse->Location = System::Drawing::Point(4, 28);
			this->txtcourse->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtcourse->Name = L"txtcourse";
			this->txtcourse->Size = System::Drawing::Size(111, 36);
			this->txtcourse->TabIndex = 28;
			this->txtcourse->Tag = L"";
			this->txtcourse->Text = L"Course";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->txtEmail1);
			this->panel1->Controls->Add(this->txtMobile1);
			this->panel1->Controls->Add(this->txtMobile);
			this->panel1->Controls->Add(this->txtEmail);
			this->panel1->Controls->Add(this->txtDob1);
			this->panel1->Controls->Add(this->txtAddress1);
			this->panel1->Controls->Add(this->txtlastname1);
			this->panel1->Controls->Add(this->txtFirstName1);
			this->panel1->Controls->Add(this->studentid);
			this->panel1->Controls->Add(this->txtGender1);
			this->panel1->Controls->Add(this->txtGender);
			this->panel1->Controls->Add(this->txtDob);
			this->panel1->Controls->Add(this->txtAddress);
			this->panel1->Controls->Add(this->txtFirstName);
			this->panel1->Controls->Add(this->txtlastname);
			this->panel1->Controls->Add(this->id);
			this->panel1->Location = System::Drawing::Point(12, 7);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(578, 536);
			this->panel1->TabIndex = 0;
			// 
			// txtEmail1
			// 
			this->txtEmail1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail1->Location = System::Drawing::Point(229, 459);
			this->txtEmail1->Margin = System::Windows::Forms::Padding(4);
			this->txtEmail1->Name = L"txtEmail1";
			this->txtEmail1->Size = System::Drawing::Size(329, 41);
			this->txtEmail1->TabIndex = 61;
			// 
			// txtMobile1
			// 
			this->txtMobile1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMobile1->Location = System::Drawing::Point(229, 404);
			this->txtMobile1->Margin = System::Windows::Forms::Padding(4);
			this->txtMobile1->Name = L"txtMobile1";
			this->txtMobile1->Size = System::Drawing::Size(329, 41);
			this->txtMobile1->TabIndex = 60;
			// 
			// txtMobile
			// 
			this->txtMobile->AutoSize = true;
			this->txtMobile->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtMobile->Location = System::Drawing::Point(4, 399);
			this->txtMobile->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtMobile->Name = L"txtMobile";
			this->txtMobile->Size = System::Drawing::Size(151, 36);
			this->txtMobile->TabIndex = 59;
			this->txtMobile->Text = L"Mobile No";
			// 
			// txtEmail
			// 
			this->txtEmail->AutoSize = true;
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(5, 458);
			this->txtEmail->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtEmail->Name = L"txtEmail";
			this->txtEmail->Size = System::Drawing::Size(88, 36);
			this->txtEmail->TabIndex = 58;
			this->txtEmail->Text = L"Email";
			// 
			// txtDob1
			// 
			this->txtDob1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDob1->Location = System::Drawing::Point(229, 346);
			this->txtDob1->Margin = System::Windows::Forms::Padding(4);
			this->txtDob1->Name = L"txtDob1";
			this->txtDob1->Size = System::Drawing::Size(329, 41);
			this->txtDob1->TabIndex = 57;
			// 
			// txtAddress1
			// 
			this->txtAddress1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress1->Location = System::Drawing::Point(229, 222);
			this->txtAddress1->Margin = System::Windows::Forms::Padding(4);
			this->txtAddress1->Name = L"txtAddress1";
			this->txtAddress1->Size = System::Drawing::Size(329, 41);
			this->txtAddress1->TabIndex = 56;
			// 
			// txtlastname1
			// 
			this->txtlastname1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlastname1->Location = System::Drawing::Point(229, 161);
			this->txtlastname1->Margin = System::Windows::Forms::Padding(4);
			this->txtlastname1->Name = L"txtlastname1";
			this->txtlastname1->Size = System::Drawing::Size(329, 41);
			this->txtlastname1->TabIndex = 55;
			// 
			// txtFirstName1
			// 
			this->txtFirstName1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName1->Location = System::Drawing::Point(229, 96);
			this->txtFirstName1->Margin = System::Windows::Forms::Padding(4);
			this->txtFirstName1->Name = L"txtFirstName1";
			this->txtFirstName1->Size = System::Drawing::Size(329, 41);
			this->txtFirstName1->TabIndex = 54;
			// 
			// studentid
			// 
			this->studentid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->studentid->Location = System::Drawing::Point(229, 34);
			this->studentid->Margin = System::Windows::Forms::Padding(4);
			this->studentid->Name = L"studentid";
			this->studentid->Size = System::Drawing::Size(329, 41);
			this->studentid->TabIndex = 53;
			// 
			// txtGender1
			// 
			this->txtGender1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGender1->FormattingEnabled = true;
			this->txtGender1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Female", L"Male" });
			this->txtGender1->Location = System::Drawing::Point(229, 282);
			this->txtGender1->Margin = System::Windows::Forms::Padding(4);
			this->txtGender1->Name = L"txtGender1";
			this->txtGender1->Size = System::Drawing::Size(329, 44);
			this->txtGender1->TabIndex = 52;
			// 
			// txtGender
			// 
			this->txtGender->AutoSize = true;
			this->txtGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtGender->Location = System::Drawing::Point(5, 287);
			this->txtGender->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(114, 36);
			this->txtGender->TabIndex = 51;
			this->txtGender->Text = L"Gender";
			// 
			// txtDob
			// 
			this->txtDob->AutoSize = true;
			this->txtDob->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtDob->Location = System::Drawing::Point(5, 343);
			this->txtDob->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtDob->Name = L"txtDob";
			this->txtDob->Size = System::Drawing::Size(78, 36);
			this->txtDob->TabIndex = 50;
			this->txtDob->Text = L"DOB";
			// 
			// txtAddress
			// 
			this->txtAddress->AutoSize = true;
			this->txtAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtAddress->Location = System::Drawing::Point(5, 222);
			this->txtAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(126, 36);
			this->txtAddress->TabIndex = 49;
			this->txtAddress->Tag = L"";
			this->txtAddress->Text = L"Address";
			// 
			// txtFirstName
			// 
			this->txtFirstName->AutoSize = true;
			this->txtFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtFirstName->Location = System::Drawing::Point(5, 96);
			this->txtFirstName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtFirstName->Name = L"txtFirstName";
			this->txtFirstName->Size = System::Drawing::Size(158, 36);
			this->txtFirstName->TabIndex = 48;
			this->txtFirstName->Text = L"First Name";
			// 
			// txtlastname
			// 
			this->txtlastname->AutoSize = true;
			this->txtlastname->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtlastname->Location = System::Drawing::Point(5, 165);
			this->txtlastname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->txtlastname->Name = L"txtlastname";
			this->txtlastname->Size = System::Drawing::Size(156, 36);
			this->txtlastname->TabIndex = 47;
			this->txtlastname->Text = L"Last Name";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(5, 28);
			this->id->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(155, 36);
			this->id->TabIndex = 46;
			this->id->Tag = L"";
			this->id->Text = L"Student ID";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(4);
			this->tabPage2->Size = System::Drawing::Size(1821, 895);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"StudentDatabase";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 7);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1795, 873);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1827, 922);
			this->Controls->Add(this->tabControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtPhD1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtMsc1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtMA1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtBSc1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtBA1))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private:
			System::Void studentUpload() {
				sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + passowrd + ";" + "database=" + database;
				sqlConn->Open();
				sqlCmd->Connection = sqlConn;
				sqlCmd->CommandText = "select * from cppstudentdb";

				sqlRd = sqlCmd->ExecuteReader();
				sqlDt->Load(sqlRd);
				sqlRd->Close();
				sqlConn->Close();
				dataGridView1->DataSource = sqlDt;
			}

private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	studentUpload();
}

private: System::Void btnAddNew_Click(System::Object^ sender, System::EventArgs^ e) {
	sqlConn->ConnectionString = "server=" + server + ";" + "username=" + username + ";" + "password=" + passowrd + ";" + "database=" + database;
	try {
		sqlConn->Open();
		sqlQuery = "insert into cppstudentdb(StudentID,Firstname,LastName,Addresss,Gender,DOB,Mobile,Email," +
			"Course,CourseCode,HomeStudent,OverseaStudent,Accommodation,Exchange,Scholarship,BA,BSc," +
			"MA,MSc,PhD,Module1,Module2,Module3,Module4,Module5,Module6,Module7,Module8," +
			"Score1,Score2,Score3,Score4,Score5,Score6,Score7,Score8,TotalScore,Ranking,Date)"+
			"values('" + studentid->Text + "','" + txtFirstName1->Text + "','" + txtlastname1->Text + "','" + txtAddress1->Text + "','" + txtGender1->Text + "','" + txtDob1->Text + "','" +txtMobile1->Text + "','" + txtEmail1->Text + "','" +
			txtcourse1->Text + "','" + txtcoursecode1->Text + "','" + txthomestudent1->Text + "','" + txtoversea1->Text + "','" + txtaccommodation1->Text + "','" + txtexchange1->Text + "','" + txtscholarship1->Text + "','" + txtBA1->Text +
			"','" + txtBSc1->Text + "','" + txtMA1->Text + "','" + txtMsc1->Text + "','" + txtPhD1->Text + "','" + cboModel1->Text + "','" + cboModel2->Text + "','" + cboModel3->Text + "','" + cboModel4->Text + "','" + cboModel5->Text +
			"','" + cboModel6->Text + "','" + cboModel7->Text + "','" + cboModel8->Text + "','" + txtScore1->Text + "','" + txtScore2->Text + "','" + txtScore3->Text + "','" + txtScore4->Text + "','" + txtScore5->Text + "','" +
			txtScore6->Text + "','" + txtScore7->Text + "','" + txtScore8->Text + "','" + lblTotal->Text + "','" + lblBanking->Text + "','" + lblDate->Text + "')";
		sqlCmd = gcnew MySqlCommand(sqlQuery, sqlConn);
		sqlRd = sqlCmd->ExecuteReader();
		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
	finally {
		sqlConn->Close();
	}
	MessageBox::Show("Student Managment System Updated!!");
	studentUpload();
	
}

private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnAddExit_Click(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::DialogResult iExit;
	iExit = MessageBox::Show("Confirm if you want to exit", "Student Managment System", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
	if (iExit == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
}
private: System::Void txtcourse1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (txtcourse1->Text == "Select a course") {
		txtcoursecode1->Text = "";
		txtfaculty1->Text = "";
		txtdeanfaculty1->Text = "";
		txtprogramleader1->Text = "";
		txtcoursetutor1->Text = "";
	}
	else if (txtcourse1->Text == "Bsc Serios Games") {
		txtcoursecode1->Text = "543";
		txtfaculty1->Text = "Brijesh";
		txtdeanfaculty1->Text = "Dr.Rajesh";
		txtprogramleader1->Text = "Dr. Thomas";
		txtcoursetutor1->Text = "Ramesh";
	}
	else if (txtcourse1->Text == "BscComputer science") {
		txtcoursecode1->Text = "544";
		txtfaculty1 ->Text= "Radha Mam";
		txtdeanfaculty1->Text = "Dr.Rajesheshwar";
		txtprogramleader1->Text = "Dr. Thomas jane";
		txtcoursetutor1->Text = "Ramesh gupta";
	}
	else if (txtcourse1->Text == "Electrical") {
		txtcoursecode1->Text = "545";
		txtfaculty1->Text = "Radha Mam";
		txtdeanfaculty1->Text = "Dr.shani";
		txtprogramleader1->Text = "Dr. anmol";
		txtcoursetutor1->Text = "MackRand";
	}
	else if (txtcourse1->Text == "power electrinics") {
		txtcoursecode1->Text = "546";
		txtfaculty1->Text = "Radha Mam";
		txtdeanfaculty1->Text = "Dr.shani rao";
		txtprogramleader1->Text = "Dr. rajesh";
		txtcoursetutor1->Text = "Saket";
	}
	else if (txtcourse1->Text == "power Engineernig") {
		txtcoursecode1->Text = "547";
		txtfaculty1->Text = "Radha Mam";
		txtdeanfaculty1->Text = "Dr.shaily rao";
		txtprogramleader1->Text = "Dr. yash";
		txtcoursetutor1->Text = "Shivansh";
	}
	   else if (txtcourse1->Text == "Object oriented programming") {
	   txtcoursecode1->Text = "548";
	   txtfaculty1->Text = "Radha Mam";
	   txtdeanfaculty1->Text = "Dr.Peter Parkar";
	   txtprogramleader1->Text = "Dr. Strange";
	   txtcoursetutor1->Text = "Spider Man";
	}
}
private: System::Void cboModel1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel1->Text == "") {
		txtScore1->Text = "0";
		txtScore1->Enabled = false;
	}
	else {
		txtScore1->Text = "";
		txtScore1->Enabled = true;
		txtScore1->Focus();
	}
}

private: System::Void cboModel2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel2->Text == "") {
		txtScore2->Text = "0";
		txtScore2->Enabled = false;
	}
	else {
		txtScore2->Text = "";
		txtScore2->Enabled = true;
		txtScore2->Focus();
	}
}
private: System::Void cboModel3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		   if (cboModel3->Text == "") {
			   txtScore3->Text = "0";
			   txtScore3->Enabled = false;
		   }
		   else {
			   txtScore3->Text = "";
			   txtScore3->Enabled = true;
			   txtScore3->Focus();
		   }
	   }
private: System::Void cboModel4_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel4->Text == "") {
		txtScore4->Text = "0";
		txtScore4->Enabled = false;
	}
	else {
		txtScore4->Text = "";
		txtScore4->Enabled = true;
		txtScore4->Focus();
	}
}

private: System::Void cboModel5_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel5->Text == "") {
		txtScore5->Text = "0";
		txtScore5->Enabled = false;
	}
	else {
		txtScore5->Text = "";
		txtScore5->Enabled = true;
		txtScore5->Focus();
	}
}
private: System::Void cboModel6_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel6->Text == "") {
		txtScore6->Text = "0";
		txtScore6->Enabled = false;
	}
	else {
		txtScore6->Text = "";
		txtScore6->Enabled = true;
		txtScore6->Focus();
	}
}
private: System::Void cboModel7_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel7->Text == "") {
		txtScore7->Text = "0";
		txtScore7->Enabled = false;
	}
	else {
		txtScore7->Text = "";
		txtScore7->Enabled = true;
		txtScore7->Focus();
	}
}
private: System::Void cboModel8_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (cboModel8->Text == "") {
		txtScore8->Text = "0";
		txtScore8->Enabled = false;
	}
	else {
		txtScore8->Text = "";
		txtScore8->Enabled = true;
		txtScore8->Focus();
	}
}
private: System::Void MLeaves(System::Object^ sender, System::EventArgs^ e) {
	TextBox^ c = safe_cast<TextBox^>(sender);
	if (c->Text == "") {
		c->Text = "0";
	}
}
private: System::Void btnAddReset_Click(System::Object^ sender, System::EventArgs^ e) {
	studentid->Text = String::Empty;
	txtFirstName1->Text = "";
	txtlastname1->Text = "";
	txtAddress1->Text = "";
	txtGender1->Text = "";
	txtDob1->Text = "";
	txtMobile1->Text = "";
	txtEmail1->Text = "";
	txtGuidence1->Text = "";
	txtguidancefirstname1->Text = "";
	txtguidancelastname1->Text = "";
	txtguidanceaddress1->Text = "";
	txtguidancemobile1->Text = "";
	txtguidanceemail1->Text = "";
	txtcourse1->Text = "Select a course";
	cboModel1->Text = "";
	cboModel2->Text = "";
	cboModel3->Text = "";
	cboModel4->Text = "";
	cboModel5->Text = "";
	cboModel6->Text = ""; 
	cboModel7->Text = "";
	cboModel8->Text = "";

	txthomestudent1->Text = "No";
	txtaccommodation1->Text = "No";
	txtoversea1->Text = "No";
	txtscholarship1->Text = "No";
	txtexchange1->Text = "No";


	txtScore1->Text = "";
	txtScore2->Text = "";
	txtScore3->Text = "";
	txtScore4->Text = "";
	txtScore5->Text = "";
	txtScore6->Text = "";
	txtScore7->Text = "";
	txtScore8->Text = "";

	txtMA1->Text = "0";
	txtMsc1->Text = "0";
	txtBSc1->Text = "0";
	txtPhD1->Text = "0";
	txtBA1->Text = "0";

	txttotal->Text = "";
	txtranking->Text = "";
	txtfinalDate->Text = "";

}
private: System::Void btnAddResult_Click(System::Object^ sender, System::EventArgs^ e) {
	int unit[9];
	try {
		unit[0] = Convert::ToInt32(txtScore1->Text);
		unit[1] = Convert::ToInt32(txtScore2->Text);
		unit[2] = Convert::ToInt32(txtScore3->Text);
		unit[3] = Convert::ToInt32(txtScore4->Text);
		unit[4] = Convert::ToInt32(txtScore5->Text);
		unit[5] = Convert::ToInt32(txtScore6->Text);
		unit[6] = Convert::ToInt32(txtScore7->Text);
		unit[7] = Convert::ToInt32(txtScore8->Text);

		if (unit[0] > 100) {
			txtScore1->Text = "0";
		}
		if (unit[1] > 100) {
			txtScore2->Text = "0";
		}if (unit[2] > 100) {
			txtScore3->Text = "0";
		}if (unit[3] > 100) {
			txtScore4->Text = "0";
		}if (unit[4] > 100) {
			txtScore5->Text = "0";
		}if (unit[5] > 100) {
			txtScore6->Text = "0";
		}if (unit[6] > 100) {
			txtScore7->Text = "0";
		}if (unit[7] > 100) {
			txtScore8->Text = "0";
		}
		unit[8] = (unit[1] + unit[0] + unit[2] + unit[3] + unit[4] + unit[5] + unit[6] + unit[7]);
		lblTotal->Text = Convert::ToString(unit[8]);
		if (unit[8] >= 700) {
			lblBanking->Text = "1st Class";
		}
		else if (unit[8] >= 600) {
			lblBanking->Text = "2nd Class";
		}
		else if (unit[8] >= 500) {
			lblBanking->Text = "3rd Class";
		}
		else if (unit[8] >= 400) {
			lblBanking->Text = "4th Class";
		}
		else if (unit[8] >= 300) {
			lblBanking->Text = "5th Class";
		}
		else {
			lblBanking->Text = "Fail!!";
		}
		lblDate->Text = monthCalendar1->SelectionStart.ToLongDateString();

	}
	catch(Exception^ e){
		MessageBox::Show(e->Message);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try {
		studentid->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		txtFirstName1->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		txtlastname1->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		txtAddress1->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		txtGender1->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		txtDob1->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		txtMobile1->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		txtEmail1->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		

	}
	catch(Exception ^ex){
		MessageBox::Show(ex->Message);
	}
}
};
}
