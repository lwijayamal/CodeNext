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

	
	public ref class SupplierPage : public System::Windows::Forms::UserControl
	{
	public:
		SupplierPage(void)
		{
			InitializeComponent();
			Theme::Grid(dgv);
			LoadData();
		}
	protected:
		~SupplierPage()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^  pnlRight;
	private: System::Windows::Forms::Panel^  pnlForm;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblId;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  lblName;
	private: System::Windows::Forms::TextBox^  txtName;
	private: System::Windows::Forms::Label^  lblPhone;
	private: System::Windows::Forms::TextBox^  txtPhone;
	private: System::Windows::Forms::Label^  lblEmail;
	private: System::Windows::Forms::TextBox^  txtEmail;
	private: System::Windows::Forms::Label^  lblServices;
	private: System::Windows::Forms::TextBox^  txtServices;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnUpdate;
	private: System::Windows::Forms::Button^  btnDelete;
	private: System::Windows::Forms::Button^  btnClear;
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
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->lblPhone = (gcnew System::Windows::Forms::Label());
			this->txtPhone = (gcnew System::Windows::Forms::TextBox());
			this->lblEmail = (gcnew System::Windows::Forms::Label());
			this->txtEmail = (gcnew System::Windows::Forms::TextBox());
			this->lblServices = (gcnew System::Windows::Forms::Label());
			this->txtServices = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
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
			this->pnlForm->Controls->Add(this->lblName);
			this->pnlForm->Controls->Add(this->txtName);
			this->pnlForm->Controls->Add(this->lblPhone);
			this->pnlForm->Controls->Add(this->txtPhone);
			this->pnlForm->Controls->Add(this->lblEmail);
			this->pnlForm->Controls->Add(this->txtEmail);
			this->pnlForm->Controls->Add(this->lblServices);
			this->pnlForm->Controls->Add(this->txtServices);
			this->pnlForm->Controls->Add(this->btnAdd);
			this->pnlForm->Controls->Add(this->btnUpdate);
			this->pnlForm->Controls->Add(this->btnDelete);
			this->pnlForm->Controls->Add(this->btnClear);
			this->pnlForm->TabIndex = 1;
			this->pnlForm->Name = L"pnlForm";
			//
			// dgv
			//
			this->dgv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgv->TabIndex = 0;
			this->dgv->Name = L"dgv";
			this->dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &SupplierPage::dgv_CellClick);
			//
			// lblTitle
			//
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->lblTitle->Size = System::Drawing::Size(0, 50);
			this->lblTitle->Text = L"Supplier Management";
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
			this->lblId->Text = L"Supplier ID";
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
			// lblName
			//
			this->lblName->AutoSize = true;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblName->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblName->Location = System::Drawing::Point(20, 80);
			this->lblName->Text = L"Name";
			this->lblName->TabIndex = 2;
			this->lblName->Name = L"lblName";
			//
			// txtName
			//
			this->txtName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtName->Location = System::Drawing::Point(20, 102);
			this->txtName->Size = System::Drawing::Size(250, 25);
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtName->TabIndex = 3;
			this->txtName->Name = L"txtName";
			//
			// lblPhone
			//
			this->lblPhone->AutoSize = true;
			this->lblPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblPhone->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblPhone->Location = System::Drawing::Point(20, 140);
			this->lblPhone->Text = L"Phone";
			this->lblPhone->TabIndex = 4;
			this->lblPhone->Name = L"lblPhone";
			//
			// txtPhone
			//
			this->txtPhone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtPhone->Location = System::Drawing::Point(20, 162);
			this->txtPhone->Size = System::Drawing::Size(250, 25);
			this->txtPhone->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPhone->TabIndex = 5;
			this->txtPhone->Name = L"txtPhone";
			//
			// lblEmail
			//
			this->lblEmail->AutoSize = true;
			this->lblEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblEmail->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblEmail->Location = System::Drawing::Point(20, 200);
			this->lblEmail->Text = L"Email";
			this->lblEmail->TabIndex = 6;
			this->lblEmail->Name = L"lblEmail";
			//
			// txtEmail
			//
			this->txtEmail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtEmail->Location = System::Drawing::Point(20, 222);
			this->txtEmail->Size = System::Drawing::Size(250, 25);
			this->txtEmail->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtEmail->TabIndex = 7;
			this->txtEmail->Name = L"txtEmail";
			//
			// lblServices
			//
			this->lblServices->AutoSize = true;
			this->lblServices->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblServices->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblServices->Location = System::Drawing::Point(20, 260);
			this->lblServices->Text = L"Services Provided";
			this->lblServices->TabIndex = 8;
			this->lblServices->Name = L"lblServices";
			//
			// txtServices
			//
			this->txtServices->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtServices->Location = System::Drawing::Point(20, 282);
			this->txtServices->Size = System::Drawing::Size(250, 25);
			this->txtServices->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtServices->TabIndex = 9;
			this->txtServices->Name = L"txtServices";
			//
			// btnAdd
			//
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(22, 163, 74);
			this->btnAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnAdd->Location = System::Drawing::Point(20, 330);
			this->btnAdd->Size = System::Drawing::Size(120, 36);
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Click += gcnew System::EventHandler(this, &SupplierPage::btnAdd_Click);
			//
			// btnUpdate
			//
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(37, 99, 235);
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnUpdate->Location = System::Drawing::Point(150, 330);
			this->btnUpdate->Size = System::Drawing::Size(120, 36);
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->TabIndex = 11;
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Click += gcnew System::EventHandler(this, &SupplierPage::btnUpdate_Click);
			//
			// btnDelete
			//
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(220, 38, 38);
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnDelete->Location = System::Drawing::Point(20, 376);
			this->btnDelete->Size = System::Drawing::Size(120, 36);
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Click += gcnew System::EventHandler(this, &SupplierPage::btnDelete_Click);
			//
			// btnClear
			//
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(100, 116, 139);
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnClear->Location = System::Drawing::Point(150, 376);
			this->btnClear->Size = System::Drawing::Size(120, 36);
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->TabIndex = 13;
			this->btnClear->Name = L"btnClear";
			this->btnClear->Click += gcnew System::EventHandler(this, &SupplierPage::btnClear_Click);
			//
			// this
			//
			this->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->Size = System::Drawing::Size(980, 650);
			this->Controls->Add(this->pnlRight);
			this->Controls->Add(this->pnlForm);
			this->Name = L"SupplierPage";
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
			dgv->DataSource = Db::Query("SELECT id AS 'ID', name AS 'Name', phone AS 'Phone', email AS 'Email', services AS 'Services Provided' FROM suppliers ORDER BY id");
		}
		void ClearFields()
		{
			txtId->Clear();
			txtName->Clear();
			txtPhone->Clear();
			txtEmail->Clear();
			txtServices->Clear();
		}
		bool Valid()
		{
			if (txtName->Text->Trim()->Length == 0 || txtPhone->Text->Trim()->Length == 0 || txtServices->Text->Trim()->Length == 0) { Theme::Warn("Please fill: Name, Phone, Services Provided"); return false; }
			if (txtPhone->Text->Trim()->Length < 9) { Theme::Warn("Phone number is too short."); return false; }
			if (txtEmail->Text->Trim()->Length > 0 && !txtEmail->Text->Contains("@")) { Theme::Warn("Invalid email address."); return false; }
			return true;
		}

	private: System::Void dgv_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex < 0) return;
		DataGridViewRow^ r = dgv->Rows[e->RowIndex];
		txtId->Text = r->Cells[0]->Value->ToString();
		txtName->Text = r->Cells[1]->Value->ToString();
		txtPhone->Text = r->Cells[2]->Value->ToString();
		txtEmail->Text = r->Cells[3]->Value->ToString();
		txtServices->Text = r->Cells[4]->Value->ToString();

	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Valid()) return;
		try
		{
			Db::Exec("INSERT INTO suppliers(name,phone,email,services) VALUES(@p0,@p1,@p2,@p3)", txtName->Text->Trim(), txtPhone->Text->Trim(), txtEmail->Text->Trim(), txtServices->Text->Trim());
			
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
			Db::Exec("UPDATE suppliers SET name=@p0,phone=@p1,email=@p2,services=@p3 WHERE id=@p4", txtName->Text->Trim(), txtPhone->Text->Trim(), txtEmail->Text->Trim(), txtServices->Text->Trim(), Convert::ToInt32(txtId->Text));
			
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
			Db::Exec("DELETE FROM suppliers WHERE id=@p0", Convert::ToInt32(txtId->Text));
			
			LoadData(); ClearFields();
		}
		catch (Exception^ ex) { Theme::Error("Cannot delete - this record is used by other data.\n" + ex->Message); }
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { ClearFields(); }
	};
}
