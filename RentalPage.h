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

	public ref class RentalPage : public System::Windows::Forms::UserControl
	{
	public:
		RentalPage(void)
		{
			InitializeComponent();
			Theme::Grid(dgv);
			ClearFields();
			LoadData();
		}
	protected:
		~RentalPage()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^  pnlRight;
	private: System::Windows::Forms::Panel^  pnlForm;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::Label^  lblTitle;
	private: System::Windows::Forms::Label^  lblId;
	private: System::Windows::Forms::TextBox^  txtId;
	private: System::Windows::Forms::Label^  lblCustomer;
	private: System::Windows::Forms::ComboBox^  cmbCustomer;
	private: System::Windows::Forms::Label^  lblCar;
	private: System::Windows::Forms::ComboBox^  cmbCar;
	private: System::Windows::Forms::Label^  lblStart;
	private: System::Windows::Forms::DateTimePicker^  dtpStart;
	private: System::Windows::Forms::Label^  lblEnd;
	private: System::Windows::Forms::DateTimePicker^  dtpEnd;
	private: System::Windows::Forms::Label^  lblTotal;
	private: System::Windows::Forms::TextBox^  txtTotal;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnReturn;
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
			this->lblCustomer = (gcnew System::Windows::Forms::Label());
			this->cmbCustomer = (gcnew System::Windows::Forms::ComboBox());
			this->lblCar = (gcnew System::Windows::Forms::Label());
			this->cmbCar = (gcnew System::Windows::Forms::ComboBox());
			this->lblStart = (gcnew System::Windows::Forms::Label());
			this->dtpStart = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblEnd = (gcnew System::Windows::Forms::Label());
			this->dtpEnd = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->txtTotal = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnReturn = (gcnew System::Windows::Forms::Button());
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
			this->pnlForm->Controls->Add(this->lblCustomer);
			this->pnlForm->Controls->Add(this->cmbCustomer);
			this->pnlForm->Controls->Add(this->lblCar);
			this->pnlForm->Controls->Add(this->cmbCar);
			this->pnlForm->Controls->Add(this->lblStart);
			this->pnlForm->Controls->Add(this->dtpStart);
			this->pnlForm->Controls->Add(this->lblEnd);
			this->pnlForm->Controls->Add(this->dtpEnd);
			this->pnlForm->Controls->Add(this->lblTotal);
			this->pnlForm->Controls->Add(this->txtTotal);
			this->pnlForm->Controls->Add(this->btnAdd);
			this->pnlForm->Controls->Add(this->btnReturn);
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
			this->dgv->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RentalPage::dgv_CellClick);
			//
			// lblTitle
			//
			this->lblTitle->Dock = System::Windows::Forms::DockStyle::Top;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->lblTitle->Size = System::Drawing::Size(0, 50);
			this->lblTitle->Text = L"Rental (Booking) Management";
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
			this->lblId->Text = L"Rental ID";
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
			// lblCustomer
			//
			this->lblCustomer->AutoSize = true;
			this->lblCustomer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCustomer->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblCustomer->Location = System::Drawing::Point(20, 80);
			this->lblCustomer->Text = L"Customer (existing only)";
			this->lblCustomer->TabIndex = 2;
			this->lblCustomer->Name = L"lblCustomer";
			//
			// cmbCustomer
			//
			this->cmbCustomer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbCustomer->Location = System::Drawing::Point(20, 102);
			this->cmbCustomer->Size = System::Drawing::Size(250, 25);
			this->cmbCustomer->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCustomer->FormattingEnabled = true;
			this->cmbCustomer->TabIndex = 3;
			this->cmbCustomer->Name = L"cmbCustomer";
			//
			// lblCar
			//
			this->lblCar->AutoSize = true;
			this->lblCar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCar->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblCar->Location = System::Drawing::Point(20, 140);
			this->lblCar->Text = L"Car (available only)";
			this->lblCar->TabIndex = 4;
			this->lblCar->Name = L"lblCar";
			//
			// cmbCar
			//
			this->cmbCar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->cmbCar->Location = System::Drawing::Point(20, 162);
			this->cmbCar->Size = System::Drawing::Size(250, 25);
			this->cmbCar->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCar->FormattingEnabled = true;
			this->cmbCar->TabIndex = 5;
			this->cmbCar->Name = L"cmbCar";
			this->cmbCar->SelectedIndexChanged += gcnew System::EventHandler(this, &RentalPage::Recalc_Changed);
			//
			// lblStart
			//
			this->lblStart->AutoSize = true;
			this->lblStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblStart->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblStart->Location = System::Drawing::Point(20, 200);
			this->lblStart->Text = L"Start Date";
			this->lblStart->TabIndex = 6;
			this->lblStart->Name = L"lblStart";
			//
			// dtpStart
			//
			this->dtpStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpStart->Location = System::Drawing::Point(20, 222);
			this->dtpStart->Size = System::Drawing::Size(250, 25);
			this->dtpStart->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpStart->TabIndex = 7;
			this->dtpStart->Name = L"dtpStart";
			this->dtpStart->ValueChanged += gcnew System::EventHandler(this, &RentalPage::Recalc_Changed);
			//
			// lblEnd
			//
			this->lblEnd->AutoSize = true;
			this->lblEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblEnd->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblEnd->Location = System::Drawing::Point(20, 260);
			this->lblEnd->Text = L"End Date";
			this->lblEnd->TabIndex = 8;
			this->lblEnd->Name = L"lblEnd";
			//
			// dtpEnd
			//
			this->dtpEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->dtpEnd->Location = System::Drawing::Point(20, 282);
			this->dtpEnd->Size = System::Drawing::Size(250, 25);
			this->dtpEnd->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dtpEnd->TabIndex = 9;
			this->dtpEnd->Name = L"dtpEnd";
			this->dtpEnd->ValueChanged += gcnew System::EventHandler(this, &RentalPage::Recalc_Changed);
			//
			// lblTotal
			//
			this->lblTotal->AutoSize = true;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblTotal->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblTotal->Location = System::Drawing::Point(20, 320);
			this->lblTotal->Text = L"Total (Rs.)";
			this->lblTotal->TabIndex = 10;
			this->lblTotal->Name = L"lblTotal";
			//
			// txtTotal
			//
			this->txtTotal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtTotal->Location = System::Drawing::Point(20, 342);
			this->txtTotal->Size = System::Drawing::Size(250, 25);
			this->txtTotal->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtTotal->ReadOnly = true;
			this->txtTotal->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->txtTotal->TabIndex = 11;
			this->txtTotal->Name = L"txtTotal";
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
			this->btnAdd->Text = L"Book Rental";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->TabIndex = 12;
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Click += gcnew System::EventHandler(this, &RentalPage::btnAdd_Click);
			//
			// btnReturn
			//
			this->btnReturn->BackColor = System::Drawing::Color::FromArgb(37, 99, 235);
			this->btnReturn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnReturn->FlatAppearance->BorderSize = 0;
			this->btnReturn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReturn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnReturn->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnReturn->Location = System::Drawing::Point(150, 390);
			this->btnReturn->Size = System::Drawing::Size(120, 36);
			this->btnReturn->Text = L"Mark Returned";
			this->btnReturn->UseVisualStyleBackColor = false;
			this->btnReturn->TabIndex = 13;
			this->btnReturn->Name = L"btnReturn";
			this->btnReturn->Click += gcnew System::EventHandler(this, &RentalPage::btnReturn_Click);
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
			this->btnDelete->Click += gcnew System::EventHandler(this, &RentalPage::btnDelete_Click);
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
			this->btnClear->Click += gcnew System::EventHandler(this, &RentalPage::btnClear_Click);
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
			this->Name = L"RentalPage";
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
			cmbCustomer->DisplayMember = "label"; cmbCustomer->ValueMember = "id";
			cmbCustomer->DataSource = Db::Query("SELECT id, CONCAT(name,' - ',phone) AS label FROM customers ORDER BY name");
			cmbCar->DisplayMember = "label"; cmbCar->ValueMember = "id";
			cmbCar->DataSource = Db::Query("SELECT id, brand, model, reg_no, price, CONCAT(brand,' ',model,' - ',reg_no) AS label FROM cars WHERE status='Available' ORDER BY brand");
			dgv->DataSource = Db::Query("SELECT r.id AS 'ID', c.name AS 'Customer', CONCAT(ca.brand,' ',ca.model) AS 'Car', DATE_FORMAT(r.start_date,'%Y-%m-%d') AS 'Start', DATE_FORMAT(r.end_date,'%Y-%m-%d') AS 'End', r.total AS 'Total', r.status AS 'Status' FROM rentals r JOIN customers c ON c.id=r.customer_id JOIN cars ca ON ca.id=r.car_id ORDER BY r.id DESC");
			Recalc();
		}
		void ClearFields()
		{
			txtId->Clear(); dtpStart->Value = DateTime::Today; dtpEnd->Value = DateTime::Today.AddDays(1); lblInfo->Text = "";
		}
		void Recalc()
		{
			if (cmbCar->SelectedItem == nullptr) { txtTotal->Text = "0.00"; return; }
			DataRowView^ drv = safe_cast<DataRowView^>(cmbCar->SelectedItem);
			Car^ car = gcnew Car(Convert::ToInt32(drv["id"]), drv["brand"]->ToString(), drv["model"]->ToString(), drv["reg_no"]->ToString(), Convert::ToDecimal(drv["price"]));
			DateTime a = dtpStart->Value.Date; DateTime b = dtpEnd->Value.Date;
			TimeSpan ts = b.Subtract(a);
			txtTotal->Text = car->CalcRent(ts.Days + 1).ToString("F2");
		}
	private: System::Void Recalc_Changed(System::Object^ sender, System::EventArgs^ e) { Recalc(); }
	private: System::Void dgv_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e)
	{
		if (e->RowIndex < 0) return;
		DataGridViewRow^ r = dgv->Rows[e->RowIndex];
		txtId->Text = r->Cells[0]->Value->ToString();
		lblInfo->Text = String::Format("Customer: {0}\nCar: {1}\n{2}  to  {3}\nStatus: {4}", r->Cells[1]->Value, r->Cells[2]->Value, r->Cells[3]->Value, r->Cells[4]->Value, r->Cells[6]->Value);
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (cmbCustomer->SelectedValue == nullptr || cmbCar->SelectedValue == nullptr)
		{ Theme::Warn("Add at least one customer and one available car first."); return; }
		DateTime a = dtpStart->Value.Date; DateTime b = dtpEnd->Value.Date;
		if (DateTime::Compare(b, a) < 0) { Theme::Warn("End date cannot be before start date."); return; }
		try
		{
			int custId = Convert::ToInt32(cmbCustomer->SelectedValue); int carId = Convert::ToInt32(cmbCar->SelectedValue);
			Db::Exec("INSERT INTO rentals(customer_id,car_id,start_date,end_date,total,status) VALUES(@p0,@p1,@p2,@p3,@p4,'Active')", custId, carId, a, b, Convert::ToDecimal(txtTotal->Text));
			Db::Exec("UPDATE cars SET status='Rented' WHERE id=@p0", carId);
			LoadData(); ClearFields();
			Theme::Info("Rental booked successfully.");
		}
		catch (Exception^ ex) { Theme::Error(ex->Message); }
	}
	private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (txtId->Text->Length == 0) { Theme::Warn("Select a rental from the table first."); return; }
		int id = Convert::ToInt32(txtId->Text);
		try
		{
			int n = Db::Exec("UPDATE rentals SET status='Returned' WHERE id=@p0 AND status='Active'", id);
			if (n == 0) { Theme::Warn("This rental is already returned."); return; }
			Db::Exec("UPDATE cars SET status='Available' WHERE id=(SELECT car_id FROM rentals WHERE id=@p0)", id);
			LoadData(); ClearFields();
			Theme::Info("Car returned. It is available again.");
		}
		catch (Exception^ ex) { Theme::Error(ex->Message); }
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (txtId->Text->Length == 0) { Theme::Warn("Select a rental from the table first."); return; }
		if (!Theme::Ask("Delete this rental (and its payments)?")) return;
		int id = Convert::ToInt32(txtId->Text);
		try
		{
			Db::Exec("UPDATE cars SET status='Available' WHERE status='Rented' AND id=(SELECT car_id FROM rentals WHERE id=@p0 AND status='Active')", id);
			Db::Exec("DELETE FROM rentals WHERE id=@p0", id);
			LoadData(); ClearFields();
		}
		catch (Exception^ ex) { Theme::Error(ex->Message); }
	}
	private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) { ClearFields(); }
	};
}
