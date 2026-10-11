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

	public ref class MaintenancePage : public System::Windows::Forms::UserControl
	{
	public:
		MaintenancePage(void)
		{
			InitializeComponent();
			Theme::Grid(dgv);
			LoadData();
		}
	protected:
		~MaintenancePage()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^  pnlRight;
	private: System::Windows::Forms::Panel^  pnlForm;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblId;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  lblCar;
	private: System::Windows::Forms::ComboBox^  cmbCar;
	private: System::Windows::Forms::Label^  lblDate;
	private: System::Windows::Forms::DateTimePicker^  dtpDate;
	private: System::Windows::Forms::Label^  lblRemarks;
	private: System::Windows::Forms::TextBox^  txtRemarks;
	private: System::Windows::Forms::Label^  lblStatus;
	private: System::Windows::Forms::ComboBox^  cmbStatus;
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
			this->lblCar = (gcnew System::Windows::Forms::Label());
			this->cmbCar = (gcnew System::Windows::Forms::ComboBox());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblRemarks = (gcnew System::Windows::Forms::Label());
			this->txtRemarks = (gcnew System::Windows::Forms::TextBox());
			this->lblStatus = (gcnew System::Windows::Forms::Label());
			this->cmbStatus = (gcnew System::Windows::Forms::ComboBox());
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
			this->pnlForm->Controls->Add(this->lblCar);
			this->pnlForm->Controls->Add(this->cmbCar);
			this->pnlForm->Controls->Add(this->lblDate);
			this->pnlForm->Controls->Add(this->dtpDate);
			this->pnlForm->Controls->Add(this->lblRemarks);
			this->pnlForm->Controls->Add(this->txtRemarks);
			this->pnlForm->Controls->Add(this->lblStatus);
			this->pnlForm->Controls->Add(this->cmbStatus);
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
			this->dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MaintenancePage::dgv_CellClick);
			//
			// lblTitle
			//
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->lblTitle->Size = System::Drawing::Size(0, 50);
			this->lblTitle->Text = L"Maintenance Management";
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
			this->lblId->Text = L"Maintenance ID";
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
			// lblCar
			//
			this->lblCar->AutoSize = true;
			this->lblCar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCar->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblCar->Location = System::Drawing::Point(20, 80);
			this->lblCar->Text = L"Car ID";
			this->lblCar->TabIndex = 2;
			this->lblCar->Name = L"lblCar";
			//
			// cmbCar
			//
			this->cmbCar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbCar->Location = System::Drawing::Point(20, 102);
			this->cmbCar->Size = System::Drawing::Size(250, 25);
			this->cmbCar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCar->FormattingEnabled = true;
			this->cmbCar->TabIndex = 3;
			this->cmbCar->Name = L"cmbCar";
			//
			// lblDate
			//
			this->lblDate->AutoSize = true;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDate->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblDate->Location = System::Drawing::Point(20, 140);
			this->lblDate->Text = L"Date";
			this->lblDate->TabIndex = 4;
			this->lblDate->Name = L"lblDate";
			//
			// dtpDate
			//
			this->dtpDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpDate->Location = System::Drawing::Point(20, 162);
			this->dtpDate->Size = System::Drawing::Size(250, 25);
			this->dtpDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDate->TabIndex = 5;
			this->dtpDate->Name = L"dtpDate";
			//
			// lblRemarks
			//
			this->lblRemarks->AutoSize = true;
			this->lblRemarks->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRemarks->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblRemarks->Location = System::Drawing::Point(20, 200);
			this->lblRemarks->Text = L"Remarks";
			this->lblRemarks->TabIndex = 6;
			this->lblRemarks->Name = L"lblRemarks";
			//
			// txtRemarks
			//
			this->txtRemarks->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtRemarks->Location = System::Drawing::Point(20, 222);
			this->txtRemarks->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtRemarks->Multiline = true;
			this->txtRemarks->Size = System::Drawing::Size(250, 60);
			this->txtRemarks->TabIndex = 7;
			this->txtRemarks->Name = L"txtRemarks";
			//
			// lblStatus
			//
			this->lblStatus->AutoSize = true;
			this->lblStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblStatus->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblStatus->Location = System::Drawing::Point(20, 295);
			this->lblStatus->Text = L"Status";
			this->lblStatus->TabIndex = 8;
			this->lblStatus->Name = L"lblStatus";
			//
			// cmbStatus
			//
			this->cmbStatus->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbStatus->Location = System::Drawing::Point(20, 317);
			this->cmbStatus->Size = System::Drawing::Size(250, 25);
			this->cmbStatus->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbStatus->FormattingEnabled = true;
			this->cmbStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Pending", L"In Progress", L"Completed"});
			this->cmbStatus->TabIndex = 9;
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
			this->btnAdd->Location = System::Drawing::Point(20, 365);
			this->btnAdd->Size = System::Drawing::Size(120, 36);
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->TabIndex = 10;
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Click += gcnew System::EventHandler(this, &MaintenancePage::btnAdd_Click);
			//
			// btnUpdate
			//
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(37, 99, 235);
			this->btnUpdate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnUpdate->FlatAppearance->BorderSize = 0;
			this->btnUpdate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnUpdate->Location = System::Drawing::Point(150, 365);
			this->btnUpdate->Size = System::Drawing::Size(120, 36);
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->TabIndex = 11;
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Click += gcnew System::EventHandler(this, &MaintenancePage::btnUpdate_Click);
			//
			// btnDelete
			//
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(220, 38, 38);
			this->btnDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnDelete->FlatAppearance->BorderSize = 0;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnDelete->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnDelete->Location = System::Drawing::Point(20, 411);
			this->btnDelete->Size = System::Drawing::Size(120, 36);
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Click += gcnew System::EventHandler(this, &MaintenancePage::btnDelete_Click);
			//
			// btnClear
			//
			this->btnClear->BackColor = System::Drawing::Color::FromArgb(100, 116, 139);
			this->btnClear->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnClear->FlatAppearance->BorderSize = 0;
			this->btnClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnClear->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnClear->Location = System::Drawing::Point(150, 411);
			this->btnClear->Size = System::Drawing::Size(120, 36);
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->TabIndex = 13;
			this->btnClear->Name = L"btnClear";
			this->btnClear->Click += gcnew System::EventHandler(this, &MaintenancePage::btnClear_Click);
			//
			// this
			//
			this->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->Size = System::Drawing::Size(980, 650);
			this->Controls->Add(this->pnlRight);
			this->Controls->Add(this->pnlForm);
			this->Name = L"MaintenancePage";
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
		void LoadCombos()
		{
			cmbCar->DisplayMember = "label"; cmbCar->ValueMember = "id";
			cmbCar->DataSource = Db::Query("SELECT id, CONCAT('#', id, ' - ', brand, ' ', model, ' - ', reg_no) AS label FROM cars ORDER BY id");
		}
		void LoadData()
		{
			LoadCombos();
			dgv->DataSource = Db::Query("SELECT id AS 'ID', car_id AS 'Car ID', DATE_FORMAT(mdate,'%Y-%m-%d') AS 'Date', remarks AS 'Remarks', status AS 'Status' FROM maintenance ORDER BY id DESC");
		}
		void ClearFields()
		{
			txtId->Clear();
			cmbCar->SelectedIndex = -1;
			dtpDate->Value = DateTime::Today;
			txtRemarks->Clear();
			cmbStatus->SelectedIndex = -1;
		}
		bool Valid()
		{
			if (txtRemarks->Text->Trim()->Length == 0) { Theme::Warn("Please fill: Remarks"); return false; }
			if (cmbCar->SelectedValue == nullptr) { Theme::Warn("Please select Car ID (it must already exist in the system)."); return false; }
			if (cmbStatus->SelectedIndex < 0) { Theme::Warn("Please select Status."); return false; }
			return true;
		}
		// keeps cars.status in sync with open maintenance jobs
		void SyncCars()
		{
			Db::Exec("UPDATE cars SET status='Maintenance' WHERE id IN (SELECT car_id FROM maintenance WHERE status<>'Completed')");
			Db::Exec("UPDATE cars SET status='Available' WHERE status='Maintenance' AND id NOT IN (SELECT car_id FROM maintenance WHERE status<>'Completed')");
		}
	private: System::Void dgv_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex < 0) return;
		DataGridViewRow^ r = dgv->Rows[e->RowIndex];
		txtId->Text = r->Cells[0]->Value->ToString();
		cmbCar->SelectedValue = Convert::ToInt32(r->Cells[1]->Value);
		dtpDate->Value = Convert::ToDateTime(r->Cells[2]->Value);
		txtRemarks->Text = r->Cells[3]->Value->ToString();
		cmbStatus->SelectedItem = r->Cells[4]->Value->ToString();

	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Valid()) return;
		try
		{
			Db::Exec("INSERT INTO maintenance(car_id,mdate,remarks,status) VALUES(@p0,@p1,@p2,@p3)", Convert::ToInt32(cmbCar->SelectedValue), dtpDate->Value, txtRemarks->Text->Trim(), cmbStatus->Text);
			SyncCars();
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
			Db::Exec("UPDATE maintenance SET car_id=@p0,mdate=@p1,remarks=@p2,status=@p3 WHERE id=@p4", Convert::ToInt32(cmbCar->SelectedValue), dtpDate->Value, txtRemarks->Text->Trim(), cmbStatus->Text, Convert::ToInt32(txtId->Text));
			SyncCars();
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
			Db::Exec("DELETE FROM maintenance WHERE id=@p0", Convert::ToInt32(txtId->Text));
			SyncCars();
			LoadData(); ClearFields();
		}
		catch (Exception^ ex) { Theme::Error("Cannot delete - this record is used by other data.\n" + ex->Message); }
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { ClearFields(); }
	};
}
