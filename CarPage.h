#pragma once
#include "Db.h"
#include "Models.h"
#include "Theme.h"

namespace RentXpress {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class CarPage : public System::Windows::Forms::UserControl
	{
	public:
		CarPage(void)
		{
			InitializeComponent();
			Theme::Grid(dgv);
			LoadData();
		}
	protected:
		~CarPage()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^  pnlRight;
	private: System::Windows::Forms::Panel^  pnlForm;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblId;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  lblModel;
	private: System::Windows::Forms::TextBox^  txtModel;
	private: System::Windows::Forms::Label^  lblBrand;
	private: System::Windows::Forms::TextBox^  txtBrand;
	private: System::Windows::Forms::Label^  lblReg;
	private: System::Windows::Forms::TextBox^  txtReg;
	private: System::Windows::Forms::Label^  lblPrice;
	private: System::Windows::Forms::TextBox^  txtPrice;
	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::ComboBox^  cmbStatus;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Label^  lblInfo;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->pnlRight = (gcnew System::Windows::Forms::Panel());
			this->pnlForm = (gcnew System::Windows::Forms::Panel());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblModel = (gcnew System::Windows::Forms::Label());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->lblBrand = (gcnew System::Windows::Forms::Label());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->lblReg = (gcnew System::Windows::Forms::Label());
			this->txtReg = (gcnew System::Windows::Forms::TextBox());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->cmbStatus = (gcnew System::Windows::Forms::ComboBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->BeginInit();
			this->pnlRight->SuspendLayout();
			this->pnlForm->SuspendLayout();
			this->SuspendLayout();
			//
			// pnlRight
			//
			this->pnlRight->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlRight->Padding = System::Windows::Forms::Padding(18, 10, 18, 18);
			this->pnlRight->Controls->Add(this->dgv);
			this->pnlRight->Controls->Add(this->lblTitle);
			this->pnlRight->TabIndex = 0;
			this->pnlRight->Name = L"pnlRight";
			//
			// pnlForm
			//
			this->pnlForm->BackColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->pnlForm->Dock = System::Windows::Forms::DockStyle::Left;
			this->pnlForm->Size = System::Drawing::Size(290, 650);
			this->pnlForm->Controls->Add(this->lblId);
			this->pnlForm->Controls->Add(this->txtId);
			this->pnlForm->Controls->Add(this->lblModel);
			this->pnlForm->Controls->Add(this->txtModel);
			this->pnlForm->Controls->Add(this->lblBrand);
			this->pnlForm->Controls->Add(this->txtBrand);
			this->pnlForm->Controls->Add(this->lblReg);
			this->pnlForm->Controls->Add(this->txtReg);
			this->pnlForm->Controls->Add(this->lblPrice);
			this->pnlForm->Controls->Add(this->txtPrice);
			this->pnlForm->Controls->Add(this->lblStatus);
			this->pnlForm->Controls->Add(this->cmbStatus);
			this->pnlForm->Controls->Add(this->btnAdd);
			this->pnlForm->Controls->Add(this->btnUpdate);
			this->pnlForm->Controls->Add(this->btnDelete);
			this->pnlForm->Controls->Add(this->btnClear);
			this->pnlForm->Controls->Add(this->lblInfo);
			this->pnlForm->TabIndex = 1;
			this->pnlForm->Name = L"pnlForm";
			//
			// dgv
			//
			this->dgv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgv->TabIndex = 0;
			this->dgv->Name = L"dgv";
			this->dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &CarPage::dgv_CellClick);
			//
			// lblTitle
			//
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->lblTitle->Size = System::Drawing::Size(0, 50);
			this->lblTitle->Text = L"Car Management";
			this->lblTitle->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->lblTitle->TabIndex = 1;
			this->lblTitle->Name = L"lblTitle";
			//
			// lblId
			//
			this->lblId->AutoSize = true;
			this->lblId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblId->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblId->Location = System::Drawing::Point(20, 20);
			this->lblId->Text = L"Car ID";
			this->lblId->TabIndex = 0;
			this->lblId->Name = L"lblId";
			//
			// txtId
			//
			this->txtId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtId->Location = System::Drawing::Point(20, 42);
			this->txtId->Size = System::Drawing::Size(250, 25);
			this->txtId->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtId->ReadOnly = true;
			this->txtId->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->txtId->TabIndex = 1;
			this->txtId->Name = L"txtId";
			//
			// lblModel
			//
			this->lblModel->AutoSize = true;
			this->lblModel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblModel->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblModel->Location = System::Drawing::Point(20, 80);
			this->lblModel->Text = L"Model";
			this->lblModel->TabIndex = 2;
			this->lblModel->Name = L"lblModel";
			//
			// txtModel
			//
			this->txtModel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtModel->Location = System::Drawing::Point(20, 102);
			this->txtModel->Size = System::Drawing::Size(250, 25);
			this->txtModel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtModel->TabIndex = 3;
			this->txtModel->Name = L"txtModel";
			//
			// lblBrand
			//
			this->lblBrand->AutoSize = true;
			this->lblBrand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblBrand->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblBrand->Location = System::Drawing::Point(20, 140);
			this->lblBrand->Text = L"Brand";
			this->lblBrand->TabIndex = 4;
			this->lblBrand->Name = L"lblBrand";
			//
			// txtBrand
			//
			this->txtBrand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtBrand->Location = System::Drawing::Point(20, 162);
			this->txtBrand->Size = System::Drawing::Size(250, 25);
			this->txtBrand->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBrand->TabIndex = 5;
			this->txtBrand->Name = L"txtBrand";
			//
			// lblReg
			//
			this->lblReg->AutoSize = true;
			this->lblReg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblReg->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblReg->Location = System::Drawing::Point(20, 200);
			this->lblReg->Text = L"Registration Number";
			this->lblReg->TabIndex = 6;
			this->lblReg->Name = L"lblReg";
			//
			// txtReg
			//
			this->txtReg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtReg->Location = System::Drawing::Point(20, 222);
			this->txtReg->Size = System::Drawing::Size(250, 25);
			this->txtReg->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtReg->TabIndex = 7;
			this->txtReg->Name = L"txtReg";
			//
			// lblPrice
			//
			this->lblPrice->AutoSize = true;
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPrice->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblPrice->Location = System::Drawing::Point(20, 260);
			this->lblPrice->Text = L"Rental Price (Rs. / day)";
			this->lblPrice->TabIndex = 8;
			this->lblPrice->Name = L"lblPrice";
			//
			// txtPrice
			//
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtPrice->Location = System::Drawing::Point(20, 282);
			this->txtPrice->Size = System::Drawing::Size(250, 25);
			this->txtPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPrice->TabIndex = 9;
			this->txtPrice->Name = L"txtPrice";
			//
			// lblStatus
			//
			this->lblStatus->AutoSize = true;
			this->lblStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblStatus->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblStatus->Location = System::Drawing::Point(20, 320);
			this->lblStatus->Text = L"Availability Status";
			this->lblStatus->TabIndex = 10;
			this->lblStatus->Name = L"lblStatus";
			//
			// cmbStatus
			//
			this->cmbStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbStatus->Location = System::Drawing::Point(20, 342);
			this->cmbStatus->Size = System::Drawing::Size(250, 25);
			this->cmbStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStatus->FormattingEnabled = true;
			this->cmbStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Available", L"Rented", L"Maintenance"});
			this->cmbStatus->TabIndex = 11;
			this->cmbStatus->Name = L"cmbStatus";
			//
			// btnAdd
			//
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(22, 163, 74);
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnAdd->Location = System::Drawing::Point(20, 390);
			this->btnAdd->Size = System::Drawing::Size(120, 36);
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Click += gcnew System::EventHandler(this, &CarPage::btnAdd_Click);
			//
			// btnUpdate
			//
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(37, 99, 235);
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnUpdate->Location = System::Drawing::Point(150, 390);
			this->btnUpdate->Size = System::Drawing::Size(120, 36);
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->TabIndex = 13;
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Click += gcnew System::EventHandler(this, &CarPage::btnUpdate_Click);
			//
			// btnDelete
			//
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(220, 38, 38);
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnDelete->Location = System::Drawing::Point(20, 436);
			this->btnDelete->Size = System::Drawing::Size(120, 36);
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->TabIndex = 14;
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Click += gcnew System::EventHandler(this, &CarPage::btnDelete_Click);
			//
			// btnClear
			//
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(100, 116, 139);
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnClear->Location = System::Drawing::Point(150, 436);
			this->btnClear->Size = System::Drawing::Size(120, 36);
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->TabIndex = 15;
			this->btnClear->Name = L"btnClear";
			this->btnClear->Click += gcnew System::EventHandler(this, &CarPage::btnClear_Click);
			//
			// lblInfo
			//
			this->lblInfo->AutoSize = false;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblInfo->ForeColor = System::Drawing::Color::FromArgb(148, 163, 184);
			this->lblInfo->Location = System::Drawing::Point(20, 490);
			this->lblInfo->Size = System::Drawing::Size(250, 80);
			this->lblInfo->Text = L"";
			this->lblInfo->TabIndex = 16;
			this->lblInfo->Name = L"lblInfo";
			//
			// this
			//
			this->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->Size = System::Drawing::Size(980, 650);
			this->Controls->Add(this->pnlRight);
			this->Controls->Add(this->pnlForm);
			this->Name = L"CarPage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv))->EndInit();
			this->pnlRight->ResumeLayout(false);
			this->pnlRight->PerformLayout();
			this->pnlForm->ResumeLayout(false);
			this->pnlForm->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	public: void RefreshData() { LoadData(); }
	private:
		void LoadData()
		{
			dgv->DataSource = Db::Query("SELECT id AS 'ID', model AS 'Model', brand AS 'Brand', reg_no AS 'Registration No', price AS 'Rental Price', status AS 'Status' FROM cars ORDER BY id");
		}
		void ClearFields()
		{
			txtId->Clear();
			txtModel->Clear();
			txtBrand->Clear();
			txtReg->Clear();
			txtPrice->Clear();
			cmbStatus->SelectedIndex = -1;
			lblInfo->Text = "";
		}
		bool Valid()
		{
			if (txtModel->Text->Trim()->Length == 0 || txtBrand->Text->Trim()->Length == 0 || txtReg->Text->Trim()->Length == 0) { Theme::Warn("Please fill: Model, Brand, Registration Number"); return false; }
			{ Decimal d; if (!Decimal::TryParse(txtPrice->Text, d) || Decimal::Compare(d, Decimal::Zero) <= 0) { Theme::Warn("Rental Price (Rs. / day) must be a positive number."); return false; } }
			if (cmbStatus->SelectedIndex < 0) { Theme::Warn("Please select Availability Status."); return false; }
			return true;
		}

	private: System::Void dgv_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex < 0) return;
		DataGridViewRow^ r = dgv->Rows[e->RowIndex];
		txtId->Text = r->Cells[0]->Value->ToString();
		txtModel->Text = r->Cells[1]->Value->ToString();
		txtBrand->Text = r->Cells[2]->Value->ToString();
		txtReg->Text = r->Cells[3]->Value->ToString();
		txtPrice->Text = r->Cells[4]->Value->ToString();
		cmbStatus->SelectedItem = r->Cells[5]->Value->ToString();
		
		Car^ car = gcnew Car(Convert::ToInt32(txtId->Text), txtBrand->Text, txtModel->Text, txtReg->Text, Convert::ToDecimal(txtPrice->Text));
		lblInfo->Text = car->ToString() + "\n7-day rental: Rs. " + car->CalcRent(7).ToString("N2");
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Valid()) return;
		try
		{
			Db::Exec("INSERT INTO cars(model,brand,reg_no,price,status) VALUES(@p0,@p1,@p2,@p3,@p4)", txtModel->Text->Trim(), txtBrand->Text->Trim(), txtReg->Text->Trim(), Convert::ToDecimal(txtPrice->Text), cmbStatus->Text);
			
			LoadData(); ClearFields();
			Theme::Info("Record added successfully.");
		}
		catch (Exception^ ex) { Theme::Error(ex->Message); }
	}
	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (txtId->Text->Length == 0) { Theme::Warn("Select a record from the table first."); return; }
		if (!Valid()) return;
		try
		{
			Db::Exec("UPDATE cars SET model=@p0,brand=@p1,reg_no=@p2,price=@p3,status=@p4 WHERE id=@p5", txtModel->Text->Trim(), txtBrand->Text->Trim(), txtReg->Text->Trim(), Convert::ToDecimal(txtPrice->Text), cmbStatus->Text, Convert::ToInt32(txtId->Text));
			
			LoadData(); ClearFields();
			Theme::Info("Record updated successfully.");
		}
		catch (Exception^ ex) { Theme::Error(ex->Message); }
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (txtId->Text->Length == 0) { Theme::Warn("Select a record from the table first."); return; }
		if (!Theme::Ask("Delete the selected record?")) return;
		try
		{
			Db::Exec("DELETE FROM cars WHERE id=@p0", Convert::ToInt32(txtId->Text));
			
			LoadData(); ClearFields();
		}
		catch (Exception^ ex) { Theme::Error("Cannot delete - this record is used by other data.\n" + ex->Message); }
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { ClearFields(); }
	};
}
