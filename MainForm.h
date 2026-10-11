#pragma once
#include "Db.h"
#include "Theme.h"
#include "ProfileForm.h"
#include "DashboardPage.h"
#include "CarPage.h"
#include "CustomerPage.h"
#include "RentalPage.h"
#include "PaymentPage.h"
#include "MaintenancePage.h"
#include "EmployeePage.h"
#include "SupplierPage.h"

namespace RentXpress {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			LoggedOut = false;
			lblUser->Text = Session::User + "  (" + Session::Role + ")";
			pgDash = gcnew DashboardPage(); Mount(tpDash, pgDash);
			pgCar = gcnew CarPage(); Mount(tpCar, pgCar);
			pgCust = gcnew CustomerPage(); Mount(tpCust, pgCust);
			pgRental = gcnew RentalPage(); Mount(tpRental, pgRental);
			pgPay = gcnew PaymentPage(); Mount(tpPay, pgPay);
			pgMaint = gcnew MaintenancePage(); Mount(tpMaint, pgMaint);
			pgEmp = gcnew EmployeePage(); Mount(tpEmp, pgEmp);
			pgSupp = gcnew SupplierPage(); Mount(tpSupp, pgSupp);
			SetActive(0);
		}
	protected:
		~MainForm()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::TabControl^  tabMain;
	private: System::Windows::Forms::Panel^  pnlSide;
	private: System::Windows::Forms::Panel^  pnlHeader;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblUser;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Button^  btnDash;
	private: System::Windows::Forms::Button^  btnCar;
	private: System::Windows::Forms::Button^  btnCust;
	private: System::Windows::Forms::Button^  btnRental;
	private: System::Windows::Forms::Button^  btnPay;
	private: System::Windows::Forms::Button^  btnMaint;
	private: System::Windows::Forms::Button^  btnEmp;
	private: System::Windows::Forms::Button^  btnSupp;
	private: System::Windows::Forms::Button^  btnLogout;
	private: System::Windows::Forms::TabPage^  tpDash;
	private: System::Windows::Forms::TabPage^  tpCar;
	private: System::Windows::Forms::TabPage^  tpCust;
	private: System::Windows::Forms::TabPage^  tpRental;
	private: System::Windows::Forms::TabPage^  tpPay;
	private: System::Windows::Forms::TabPage^  tpMaint;
	private: System::Windows::Forms::TabPage^  tpEmp;
	private: System::Windows::Forms::TabPage^  tpSupp;



	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->tabMain = (gcnew System::Windows::Forms::TabControl());
			this->tpDash = (gcnew System::Windows::Forms::TabPage());
			this->tpCar = (gcnew System::Windows::Forms::TabPage());
			this->tpCust = (gcnew System::Windows::Forms::TabPage());
			this->tpRental = (gcnew System::Windows::Forms::TabPage());
			this->tpPay = (gcnew System::Windows::Forms::TabPage());
			this->tpMaint = (gcnew System::Windows::Forms::TabPage());
			this->tpEmp = (gcnew System::Windows::Forms::TabPage());
			this->tpSupp = (gcnew System::Windows::Forms::TabPage());
			this->pnlSide = (gcnew System::Windows::Forms::Panel());
			this->btnDash = (gcnew System::Windows::Forms::Button());
			this->btnCar = (gcnew System::Windows::Forms::Button());
			this->btnCust = (gcnew System::Windows::Forms::Button());
			this->btnRental = (gcnew System::Windows::Forms::Button());
			this->btnPay = (gcnew System::Windows::Forms::Button());
			this->btnMaint = (gcnew System::Windows::Forms::Button());
			this->btnEmp = (gcnew System::Windows::Forms::Button());
			this->btnSupp = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->pnlHeader = (gcnew System::Windows::Forms::Panel());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->tabMain->SuspendLayout();
			this->pnlSide->SuspendLayout();
			this->pnlHeader->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabMain
			// 
			this->tabMain->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabMain->Controls->Add(this->tpDash);
			this->tabMain->Controls->Add(this->tpCar);
			this->tabMain->Controls->Add(this->tpCust);
			this->tabMain->Controls->Add(this->tpRental);
			this->tabMain->Controls->Add(this->tpPay);
			this->tabMain->Controls->Add(this->tpMaint);
			this->tabMain->Controls->Add(this->tpEmp);
			this->tabMain->Controls->Add(this->tpSupp);
			this->tabMain->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabMain->ItemSize = System::Drawing::Size(0, 1);
			this->tabMain->Location = System::Drawing::Point(200, 70);
			this->tabMain->Name = L"tabMain";
			this->tabMain->Padding = System::Drawing::Point(0, 0);
			this->tabMain->SelectedIndex = 0;
			this->tabMain->Size = System::Drawing::Size(980, 650);
			this->tabMain->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabMain->TabIndex = 0;
			// 
			// tpDash
			// 
			this->tpDash->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpDash->Location = System::Drawing::Point(4, 5);
			this->tpDash->Name = L"tpDash";
			this->tpDash->Size = System::Drawing::Size(972, 641);
			this->tpDash->TabIndex = 0;
			this->tpDash->Text = L"Dashboard";
			// 
			// tpCar
			// 
			this->tpCar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpCar->Location = System::Drawing::Point(4, 5);
			this->tpCar->Name = L"tpCar";
			this->tpCar->Size = System::Drawing::Size(972, 641);
			this->tpCar->TabIndex = 1;
			this->tpCar->Text = L"Car Management";
			// 
			// tpCust
			// 
			this->tpCust->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpCust->Location = System::Drawing::Point(4, 5);
			this->tpCust->Name = L"tpCust";
			this->tpCust->Size = System::Drawing::Size(972, 641);
			this->tpCust->TabIndex = 2;
			this->tpCust->Text = L"Customer Management";
			// 
			// tpRental
			// 
			this->tpRental->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpRental->Location = System::Drawing::Point(4, 5);
			this->tpRental->Name = L"tpRental";
			this->tpRental->Size = System::Drawing::Size(972, 641);
			this->tpRental->TabIndex = 3;
			this->tpRental->Text = L"Rental Management";
			// 
			// tpPay
			// 
			this->tpPay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpPay->Location = System::Drawing::Point(4, 5);
			this->tpPay->Name = L"tpPay";
			this->tpPay->Size = System::Drawing::Size(972, 641);
			this->tpPay->TabIndex = 4;
			this->tpPay->Text = L"Payments";
			// 
			// tpMaint
			// 
			this->tpMaint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpMaint->Location = System::Drawing::Point(4, 5);
			this->tpMaint->Name = L"tpMaint";
			this->tpMaint->Size = System::Drawing::Size(972, 641);
			this->tpMaint->TabIndex = 5;
			this->tpMaint->Text = L"Maintenance";
			// 
			// tpEmp
			// 
			this->tpEmp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpEmp->Location = System::Drawing::Point(4, 5);
			this->tpEmp->Name = L"tpEmp";
			this->tpEmp->Size = System::Drawing::Size(972, 641);
			this->tpEmp->TabIndex = 6;
			this->tpEmp->Text = L"Employee Management";
			// 
			// tpSupp
			// 
			this->tpSupp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->tpSupp->Location = System::Drawing::Point(4, 5);
			this->tpSupp->Name = L"tpSupp";
			this->tpSupp->Size = System::Drawing::Size(972, 641);
			this->tpSupp->TabIndex = 7;
			this->tpSupp->Text = L"Supplier Management";
			// 
			// pnlSide
			// 
			this->pnlSide->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->pnlSide->Controls->Add(this->btnDash);
			this->pnlSide->Controls->Add(this->btnCar);
			this->pnlSide->Controls->Add(this->btnCust);
			this->pnlSide->Controls->Add(this->btnRental);
			this->pnlSide->Controls->Add(this->btnPay);
			this->pnlSide->Controls->Add(this->btnMaint);
			this->pnlSide->Controls->Add(this->btnEmp);
			this->pnlSide->Controls->Add(this->btnSupp);
			this->pnlSide->Controls->Add(this->btnLogout);
			this->pnlSide->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlSide->Location = System::Drawing::Point(0, 70);
			this->pnlSide->Name = L"pnlSide";
			this->pnlSide->Size = System::Drawing::Size(200, 650);
			this->pnlSide->TabIndex = 1;
			// 
			// btnDash
			// 
			this->btnDash->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnDash->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDash->FlatAppearance->BorderSize = 0;
			this->btnDash->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDash->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDash->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnDash->Location = System::Drawing::Point(0, 10);
			this->btnDash->Name = L"btnDash";
			this->btnDash->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnDash->Size = System::Drawing::Size(200, 50);
			this->btnDash->TabIndex = 0;
			this->btnDash->Tag = L"0";
			this->btnDash->Text = L"Dashboard";
			this->btnDash->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnDash->UseVisualStyleBackColor = false;
			this->btnDash->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnCar
			// 
			this->btnCar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnCar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCar->FlatAppearance->BorderSize = 0;
			this->btnCar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCar->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnCar->Location = System::Drawing::Point(0, 60);
			this->btnCar->Name = L"btnCar";
			this->btnCar->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnCar->Size = System::Drawing::Size(200, 50);
			this->btnCar->TabIndex = 1;
			this->btnCar->Tag = L"1";
			this->btnCar->Text = L"Car Management";
			this->btnCar->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCar->UseVisualStyleBackColor = false;
			this->btnCar->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnCust
			// 
			this->btnCust->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnCust->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCust->FlatAppearance->BorderSize = 0;
			this->btnCust->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCust->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCust->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnCust->Location = System::Drawing::Point(0, 110);
			this->btnCust->Name = L"btnCust";
			this->btnCust->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnCust->Size = System::Drawing::Size(200, 50);
			this->btnCust->TabIndex = 2;
			this->btnCust->Tag = L"2";
			this->btnCust->Text = L"Customer Management";
			this->btnCust->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCust->UseVisualStyleBackColor = false;
			this->btnCust->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnRental
			// 
			this->btnRental->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnRental->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnRental->FlatAppearance->BorderSize = 0;
			this->btnRental->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnRental->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRental->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnRental->Location = System::Drawing::Point(0, 160);
			this->btnRental->Name = L"btnRental";
			this->btnRental->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnRental->Size = System::Drawing::Size(200, 50);
			this->btnRental->TabIndex = 3;
			this->btnRental->Tag = L"3";
			this->btnRental->Text = L"Rental Management";
			this->btnRental->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnRental->UseVisualStyleBackColor = false;
			this->btnRental->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnPay
			// 
			this->btnPay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnPay->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnPay->FlatAppearance->BorderSize = 0;
			this->btnPay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnPay->Location = System::Drawing::Point(0, 210);
			this->btnPay->Name = L"btnPay";
			this->btnPay->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnPay->Size = System::Drawing::Size(200, 50);
			this->btnPay->TabIndex = 4;
			this->btnPay->Tag = L"4";
			this->btnPay->Text = L"Payments";
			this->btnPay->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnPay->UseVisualStyleBackColor = false;
			this->btnPay->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnMaint
			// 
			this->btnMaint->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnMaint->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnMaint->FlatAppearance->BorderSize = 0;
			this->btnMaint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMaint->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMaint->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnMaint->Location = System::Drawing::Point(0, 260);
			this->btnMaint->Name = L"btnMaint";
			this->btnMaint->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnMaint->Size = System::Drawing::Size(200, 50);
			this->btnMaint->TabIndex = 5;
			this->btnMaint->Tag = L"5";
			this->btnMaint->Text = L"Maintenance";
			this->btnMaint->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMaint->UseVisualStyleBackColor = false;
			this->btnMaint->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnEmp
			// 
			this->btnEmp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnEmp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEmp->FlatAppearance->BorderSize = 0;
			this->btnEmp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEmp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEmp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnEmp->Location = System::Drawing::Point(0, 310);
			this->btnEmp->Name = L"btnEmp";
			this->btnEmp->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnEmp->Size = System::Drawing::Size(200, 50);
			this->btnEmp->TabIndex = 6;
			this->btnEmp->Tag = L"6";
			this->btnEmp->Text = L"Employee Management";
			this->btnEmp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEmp->UseVisualStyleBackColor = false;
			this->btnEmp->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnSupp
			// 
			this->btnSupp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnSupp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSupp->FlatAppearance->BorderSize = 0;
			this->btnSupp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSupp->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSupp->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(203)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(225)));
			this->btnSupp->Location = System::Drawing::Point(0, 360);
			this->btnSupp->Name = L"btnSupp";
			this->btnSupp->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnSupp->Size = System::Drawing::Size(200, 50);
			this->btnSupp->TabIndex = 7;
			this->btnSupp->Tag = L"7";
			this->btnSupp->Text = L"Supplier Management";
			this->btnSupp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSupp->UseVisualStyleBackColor = false;
			this->btnSupp->Click += gcnew System::EventHandler(this, &MainForm::NavClick);
			// 
			// btnLogout
			// 
			this->btnLogout->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->btnLogout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnLogout->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->btnLogout->FlatAppearance->BorderSize = 0;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(248)), static_cast<System::Int32>(static_cast<System::Byte>(113)),
				static_cast<System::Int32>(static_cast<System::Byte>(113)));
			this->btnLogout->Location = System::Drawing::Point(0, 600);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->btnLogout->Size = System::Drawing::Size(200, 50);
			this->btnLogout->TabIndex = 8;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnLogout->UseVisualStyleBackColor = false;
			this->btnLogout->Click += gcnew System::EventHandler(this, &MainForm::btnLogout_Click);
			// 
			// pnlHeader
			// 
			this->pnlHeader->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->pnlHeader->Controls->Add(this->lblTitle);
			this->pnlHeader->Controls->Add(this->lblUser);
			this->pnlHeader->Controls->Add(this->btnExit);
			this->pnlHeader->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlHeader->Location = System::Drawing::Point(0, 0);
			this->pnlHeader->Name = L"pnlHeader";
			this->pnlHeader->Size = System::Drawing::Size(1180, 70);
			this->pnlHeader->TabIndex = 2;
			// 
			// lblTitle
			// 
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Fill;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(209)), static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(219)));
			this->lblTitle->Location = System::Drawing::Point(200, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(910, 70);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"RentXpress";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblTitle->Click += gcnew System::EventHandler(this, &MainForm::lblTitle_Click);
			// 
			// lblUser
			// 
			this->lblUser->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(15)), static_cast<System::Int32>(static_cast<System::Byte>(23)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->lblUser->Cursor = System::Windows::Forms::Cursors::Hand;
			this->lblUser->Dock = System::Windows::Forms::DockStyle::Left;
			this->lblUser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->lblUser->Location = System::Drawing::Point(0, 0);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(200, 70);
			this->lblUser->TabIndex = 1;
			this->lblUser->Text = L"User";
			this->lblUser->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblUser->Click += gcnew System::EventHandler(this, &MainForm::lblUser_Click);
			// 
			// btnExit
			// 
			this->btnExit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(59)));
			this->btnExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnExit->Location = System::Drawing::Point(1110, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(70, 70);
			this->btnExit->TabIndex = 2;
			this->btnExit->Text = L"X";
			this->btnExit->UseVisualStyleBackColor = false;
			this->btnExit->Click += gcnew System::EventHandler(this, &MainForm::btnExit_Click);
			// 
			// MainForm
			// 
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->ClientSize = System::Drawing::Size(1180, 720);
			this->Controls->Add(this->tabMain);
			this->Controls->Add(this->pnlSide);
			this->Controls->Add(this->pnlHeader);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(1100, 680);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RentXpress - Car Rental System";
			this->tabMain->ResumeLayout(false);
			this->pnlSide->ResumeLayout(false);
			this->pnlHeader->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool LoggedOut;
	private: DashboardPage^ pgDash;
	private: CarPage^ pgCar;
	private: CustomerPage^ pgCust;
	private: RentalPage^ pgRental;
	private: PaymentPage^ pgPay;
	private: MaintenancePage^ pgMaint;
	private: EmployeePage^ pgEmp;
	private: SupplierPage^ pgSupp;
	private:
		void Mount(TabPage^ tp, UserControl^ page)
		{
			page->Dock = DockStyle::Fill;
			tp->Controls->Add(page);
		}
		void SetActive(int i)
		{
			tabMain->SelectedIndex = i;
			array<Button^>^ nav = { btnDash, btnCar, btnCust, btnRental, btnPay, btnMaint, btnEmp, btnSupp };
			for (int k = 0; k < nav->Length; k++)
				nav[k]->BackColor = (k == i) ? Theme::Accent : Color::FromArgb(15, 23, 42);
			switch (i)
			{
				case 0: pgDash->RefreshData(); break;
				case 1: pgCar->RefreshData(); break;
				case 2: pgCust->RefreshData(); break;
				case 3: pgRental->RefreshData(); break;
				case 4: pgPay->RefreshData(); break;
				case 5: pgMaint->RefreshData(); break;
				case 6: pgEmp->RefreshData(); break;
				case 7: pgSupp->RefreshData(); break;
			}
		}
	private: System::Void NavClick(System::Object^ sender, System::EventArgs^ e)
	{
		Button^ b = safe_cast<Button^>(sender);
		SetActive(Convert::ToInt32(b->Tag));
	}
	private: System::Void lblUser_Click(System::Object^ sender, System::EventArgs^ e)
	{
		ProfileForm^ f = gcnew ProfileForm();
		f->ShowDialog();
	}
	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LoggedOut = true;
		this->Close();
	}
	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		LoggedOut = false;
		this->Close();
	}

private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
