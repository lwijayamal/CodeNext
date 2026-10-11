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

	public ref class PaymentPage : public System::Windows::Forms::UserControl
	{
	public:
		PaymentPage(void)
		{
			InitializeComponent();
			Theme::Grid(dgv);
			LoadData();
		}
	protected:
		~PaymentPage()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^  pnlRight;
	private: System::Windows::Forms::Panel^  pnlForm;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblId;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  lblRental;
	private: System::Windows::Forms::ComboBox^  cmbRental;
	private: System::Windows::Forms::Label^  lblAmount;
	private: System::Windows::Forms::TextBox^  txtAmount;
	private: System::Windows::Forms::Label^  lblDate;
	private: System::Windows::Forms::DateTimePicker^  dtpDate;
	private: System::Windows::Forms::Label^  lblMethod;
	private: System::Windows::Forms::ComboBox^  cmbMethod;
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
			this->lblRental = (gcnew System::Windows::Forms::Label());
			this->cmbRental = (gcnew System::Windows::Forms::ComboBox());
			this->lblAmount = (gcnew System::Windows::Forms::Label());
			this->txtAmount = (gcnew System::Windows::Forms::TextBox());
			this->lblDate = (gcnew System::Windows::Forms::Label());
			this->dtpDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblMethod = (gcnew System::Windows::Forms::Label());
			this->cmbMethod = (gcnew System::Windows::Forms::ComboBox());
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
			this->pnlForm->Controls->Add(this->lblRental);
			this->pnlForm->Controls->Add(this->cmbRental);
			this->pnlForm->Controls->Add(this->lblAmount);
			this->pnlForm->Controls->Add(this->txtAmount);
			this->pnlForm->Controls->Add(this->lblDate);
			this->pnlForm->Controls->Add(this->dtpDate);
			this->pnlForm->Controls->Add(this->lblMethod);
			this->pnlForm->Controls->Add(this->cmbMethod);
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
			this->dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &PaymentPage::dgv_CellClick);
			//
			// lblTitle
			//
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->lblTitle->Size = System::Drawing::Size(0, 50);
			this->lblTitle->Text = L"Payment / Billing";
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
			this->lblId->Text = L"Payment ID";
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
			// lblRental
			//
			this->lblRental->AutoSize = true;
			this->lblRental->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRental->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblRental->Location = System::Drawing::Point(20, 80);
			this->lblRental->Text = L"Rental";
			this->lblRental->TabIndex = 2;
			this->lblRental->Name = L"lblRental";
			//
			// cmbRental
			//
			this->cmbRental->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbRental->Location = System::Drawing::Point(20, 102);
			this->cmbRental->Size = System::Drawing::Size(250, 25);
			this->cmbRental->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbRental->FormattingEnabled = true;
			this->cmbRental->TabIndex = 3;
			this->cmbRental->Name = L"cmbRental";
			//
			// lblAmount
			//
			this->lblAmount->AutoSize = true;
			this->lblAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAmount->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblAmount->Location = System::Drawing::Point(20, 140);
			this->lblAmount->Text = L"Amount (Rs.)";
			this->lblAmount->TabIndex = 4;
			this->lblAmount->Name = L"lblAmount";
			//
			// txtAmount
			//
			this->txtAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtAmount->Location = System::Drawing::Point(20, 162);
			this->txtAmount->Size = System::Drawing::Size(250, 25);
			this->txtAmount->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtAmount->TabIndex = 5;
			this->txtAmount->Name = L"txtAmount";
			//
			// lblDate
			//
			this->lblDate->AutoSize = true;
			this->lblDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblDate->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblDate->Location = System::Drawing::Point(20, 200);
			this->lblDate->Text = L"Payment Date";
			this->lblDate->TabIndex = 6;
			this->lblDate->Name = L"lblDate";
			//
			// dtpDate
			//
			this->dtpDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpDate->Location = System::Drawing::Point(20, 222);
			this->dtpDate->Size = System::Drawing::Size(250, 25);
			this->dtpDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpDate->TabIndex = 7;
			this->dtpDate->Name = L"dtpDate";
			//
			// lblMethod
			//
			this->lblMethod->AutoSize = true;
			this->lblMethod->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblMethod->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblMethod->Location = System::Drawing::Point(20, 260);
			this->lblMethod->Text = L"Method";
			this->lblMethod->TabIndex = 8;
			this->lblMethod->Name = L"lblMethod";
			//
			// cmbMethod
			//
			this->cmbMethod->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbMethod->Location = System::Drawing::Point(20, 282);
			this->cmbMethod->Size = System::Drawing::Size(250, 25);
			this->cmbMethod->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbMethod->FormattingEnabled = true;
			this->cmbMethod->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Cash", L"Card", L"Bank Transfer"});
			this->cmbMethod->TabIndex = 9;
			this->cmbMethod->Name = L"cmbMethod";
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
			this->btnAdd->Click += gcnew System::EventHandler(this, &PaymentPage::btnAdd_Click);
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
			this->btnUpdate->Click += gcnew System::EventHandler(this, &PaymentPage::btnUpdate_Click);
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
			this->btnDelete->Click += gcnew System::EventHandler(this, &PaymentPage::btnDelete_Click);
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
			this->btnClear->Click += gcnew System::EventHandler(this, &PaymentPage::btnClear_Click);
			//
			// lblInfo
			//
			this->lblInfo->AutoSize = false;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblInfo->ForeColor = System::Drawing::Color::FromArgb(148, 163, 184);
			this->lblInfo->Location = System::Drawing::Point(20, 430);
			this->lblInfo->Size = System::Drawing::Size(250, 80);
			this->lblInfo->Text = L"";
			this->lblInfo->TabIndex = 14;
			this->lblInfo->Name = L"lblInfo";
			//
			// this
			//
			this->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->Size = System::Drawing::Size(980, 650);
			this->Controls->Add(this->pnlRight);
			this->Controls->Add(this->pnlForm);
			this->Name = L"PaymentPage";
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
			cmbRental->DisplayMember = "label"; cmbRental->ValueMember = "id";
			cmbRental->DataSource = Db::Query("SELECT r.id AS id, CONCAT('Rental #', r.id, ' - ', c.name, ' - Rs.', r.total) AS label FROM rentals r JOIN customers c ON c.id=r.customer_id ORDER BY r.id DESC");
		}
		void LoadData()
		{
			LoadCombos();
			dgv->DataSource = Db::Query("SELECT id AS 'ID', rental_id AS 'Rental ID', amount AS 'Amount', DATE_FORMAT(pay_date,'%Y-%m-%d') AS 'Date', method AS 'Method' FROM payments ORDER BY id DESC");
		}
		void ClearFields()
		{
			txtId->Clear();
			cmbRental->SelectedIndex = -1;
			txtAmount->Clear();
			dtpDate->Value = DateTime::Today;
			cmbMethod->SelectedIndex = -1;
			lblInfo->Text = "";
		}
		bool Valid()
		{
			if (cmbRental->SelectedValue == nullptr) { Theme::Warn("Please select Rental (it must already exist in the system)."); return false; }
			{ Decimal d; if (!Decimal::TryParse(txtAmount->Text, d) || Decimal::Compare(d, Decimal::Zero) <= 0) { Theme::Warn("Amount (Rs.) must be a positive number."); return false; } }
			if (cmbMethod->SelectedIndex < 0) { Theme::Warn("Please select Method."); return false; }
			return true;
		}

	private: System::Void dgv_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex < 0) return;
		DataGridViewRow^ r = dgv->Rows[e->RowIndex];
		txtId->Text = r->Cells[0]->Value->ToString();
		cmbRental->SelectedValue = Convert::ToInt32(r->Cells[1]->Value);
		txtAmount->Text = r->Cells[2]->Value->ToString();
		dtpDate->Value = Convert::ToDateTime(r->Cells[3]->Value);
		cmbMethod->SelectedItem = r->Cells[4]->Value->ToString();
		// Billing summary for the selected rental
		int rid = Convert::ToInt32(r->Cells[1]->Value);
		Object^ tot = Db::Scalar("SELECT total FROM rentals WHERE id=@p0", rid);
		Object^ paid = Db::Scalar("SELECT IFNULL(SUM(amount),0) FROM payments WHERE rental_id=@p0", rid);
		if (tot != nullptr)
			lblInfo->Text = String::Format("Rental total: Rs. {0:N2}\nPaid so far: Rs. {1:N2}\nBalance: Rs. {2:N2}", tot, paid, Convert::ToDecimal(tot) - Convert::ToDecimal(paid));
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!Valid()) return;
		try
		{
			Db::Exec("INSERT INTO payments(rental_id,amount,pay_date,method) VALUES(@p0,@p1,@p2,@p3)", Convert::ToInt32(cmbRental->SelectedValue), Convert::ToDecimal(txtAmount->Text), dtpDate->Value, cmbMethod->Text);
			
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
			Db::Exec("UPDATE payments SET rental_id=@p0,amount=@p1,pay_date=@p2,method=@p3 WHERE id=@p4", Convert::ToInt32(cmbRental->SelectedValue), Convert::ToDecimal(txtAmount->Text), dtpDate->Value, cmbMethod->Text, Convert::ToInt32(txtId->Text));
			
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
			Db::Exec("DELETE FROM payments WHERE id=@p0", Convert::ToInt32(txtId->Text));
			
			LoadData(); ClearFields();
		}
		catch (Exception^ ex) { Theme::Error("Cannot delete - this record is used by other data.\n" + ex->Message); }
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { ClearFields(); }
	};
}
