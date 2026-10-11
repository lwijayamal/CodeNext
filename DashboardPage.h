#pragma once
#include "Db.h"
#include "Theme.h"

namespace RentXpress {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class DashboardPage : public System::Windows::Forms::UserControl
	{
	public:
		DashboardPage(void)
		{
			InitializeComponent();
			Theme::Round(pnlCust, 22); Theme::Round(pnlRent, 22); Theme::Round(pnlEmp, 22); Theme::Round(pnlRev, 22); Theme::Round(pnlCars, 22);
			LoadData();
		}
	protected:
		~DashboardPage()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^  pnlCust;
	private: System::Windows::Forms::Label^  lblCustVal;
	private: System::Windows::Forms::Label^  lblCustCap;
	private: System::Windows::Forms::Panel^  pnlRent;
	private: System::Windows::Forms::Label^  lblRentVal;
	private: System::Windows::Forms::Label^  lblRentCap;
	private: System::Windows::Forms::Panel^  pnlEmp;
	private: System::Windows::Forms::Label^  lblEmpVal;
	private: System::Windows::Forms::Label^  lblEmpCap;
	private: System::Windows::Forms::Panel^  pnlRev;
	private: System::Windows::Forms::Label^  lblRevVal;
	private: System::Windows::Forms::Label^  lblRevCap;
	private: System::Windows::Forms::Panel^  pnlCars;
	private: System::Windows::Forms::Label^  lblCarsCap;
	private: System::Windows::Forms::Label^  lblAvailCap;
	private: System::Windows::Forms::Label^  lblAvail;
	private: System::Windows::Forms::Label^  lblRentedCap;
	private: System::Windows::Forms::Label^  lblRented;
	private: System::Windows::Forms::Label^  lblMaintCap;
	private: System::Windows::Forms::Label^  lblMaint;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->pnlCust = (gcnew System::Windows::Forms::Panel());
			this->lblCustVal = (gcnew System::Windows::Forms::Label());
			this->lblCustCap = (gcnew System::Windows::Forms::Label());
			this->pnlRent = (gcnew System::Windows::Forms::Panel());
			this->lblRentVal = (gcnew System::Windows::Forms::Label());
			this->lblRentCap = (gcnew System::Windows::Forms::Label());
			this->pnlEmp = (gcnew System::Windows::Forms::Panel());
			this->lblEmpVal = (gcnew System::Windows::Forms::Label());
			this->lblEmpCap = (gcnew System::Windows::Forms::Label());
			this->pnlRev = (gcnew System::Windows::Forms::Panel());
			this->lblRevVal = (gcnew System::Windows::Forms::Label());
			this->lblRevCap = (gcnew System::Windows::Forms::Label());
			this->pnlCars = (gcnew System::Windows::Forms::Panel());
			this->lblCarsCap = (gcnew System::Windows::Forms::Label());
			this->lblAvailCap = (gcnew System::Windows::Forms::Label());
			this->lblAvail = (gcnew System::Windows::Forms::Label());
			this->lblRentedCap = (gcnew System::Windows::Forms::Label());
			this->lblRented = (gcnew System::Windows::Forms::Label());
			this->lblMaintCap = (gcnew System::Windows::Forms::Label());
			this->lblMaint = (gcnew System::Windows::Forms::Label());

			this->pnlCust->SuspendLayout();
			this->pnlRent->SuspendLayout();
			this->pnlEmp->SuspendLayout();
			this->pnlRev->SuspendLayout();
			this->pnlCars->SuspendLayout();
			this->SuspendLayout();
			//
			// pnlCust
			//
			this->pnlCust->BackColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->pnlCust->Location = System::Drawing::Point(20, 20);
			this->pnlCust->Size = System::Drawing::Size(300, 200);
			this->pnlCust->Controls->Add(this->lblCustVal);
			this->pnlCust->Controls->Add(this->lblCustCap);
			this->pnlCust->TabIndex = 0;
			this->pnlCust->Name = L"pnlCust";
			//
			// lblCustVal
			//
			this->lblCustVal->AutoSize = true;
			this->lblCustVal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCustVal->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblCustVal->Location = System::Drawing::Point(28, 50);
			this->lblCustVal->Text = L"0";
			this->lblCustVal->TabIndex = 0;
			this->lblCustVal->Name = L"lblCustVal";
			//
			// lblCustCap
			//
			this->lblCustCap->AutoSize = true;
			this->lblCustCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCustCap->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblCustCap->Location = System::Drawing::Point(32, 140);
			this->lblCustCap->Text = L"Customers";
			this->lblCustCap->TabIndex = 1;
			this->lblCustCap->Name = L"lblCustCap";
			//
			// pnlRent
			//
			this->pnlRent->BackColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->pnlRent->Location = System::Drawing::Point(340, 20);
			this->pnlRent->Size = System::Drawing::Size(300, 200);
			this->pnlRent->Controls->Add(this->lblRentVal);
			this->pnlRent->Controls->Add(this->lblRentCap);
			this->pnlRent->TabIndex = 1;
			this->pnlRent->Name = L"pnlRent";
			//
			// lblRentVal
			//
			this->lblRentVal->AutoSize = true;
			this->lblRentVal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRentVal->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblRentVal->Location = System::Drawing::Point(28, 50);
			this->lblRentVal->Text = L"0";
			this->lblRentVal->TabIndex = 0;
			this->lblRentVal->Name = L"lblRentVal";
			//
			// lblRentCap
			//
			this->lblRentCap->AutoSize = true;
			this->lblRentCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRentCap->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblRentCap->Location = System::Drawing::Point(32, 140);
			this->lblRentCap->Text = L"Rentals";
			this->lblRentCap->TabIndex = 1;
			this->lblRentCap->Name = L"lblRentCap";
			//
			// pnlEmp
			//
			this->pnlEmp->BackColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->pnlEmp->Location = System::Drawing::Point(660, 20);
			this->pnlEmp->Size = System::Drawing::Size(300, 200);
			this->pnlEmp->Controls->Add(this->lblEmpVal);
			this->pnlEmp->Controls->Add(this->lblEmpCap);
			this->pnlEmp->TabIndex = 2;
			this->pnlEmp->Name = L"pnlEmp";
			//
			// lblEmpVal
			//
			this->lblEmpVal->AutoSize = true;
			this->lblEmpVal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblEmpVal->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblEmpVal->Location = System::Drawing::Point(28, 50);
			this->lblEmpVal->Text = L"0";
			this->lblEmpVal->TabIndex = 0;
			this->lblEmpVal->Name = L"lblEmpVal";
			//
			// lblEmpCap
			//
			this->lblEmpCap->AutoSize = true;
			this->lblEmpCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblEmpCap->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblEmpCap->Location = System::Drawing::Point(32, 140);
			this->lblEmpCap->Text = L"Employees";
			this->lblEmpCap->TabIndex = 1;
			this->lblEmpCap->Name = L"lblEmpCap";
			//
			// pnlRev
			//
			this->pnlRev->BackColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->pnlRev->Location = System::Drawing::Point(20, 250);
			this->pnlRev->Size = System::Drawing::Size(460, 200);
			this->pnlRev->Controls->Add(this->lblRevVal);
			this->pnlRev->Controls->Add(this->lblRevCap);
			this->pnlRev->TabIndex = 3;
			this->pnlRev->Name = L"pnlRev";
			//
			// lblRevVal
			//
			this->lblRevVal->AutoSize = true;
			this->lblRevVal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 32.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRevVal->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblRevVal->Location = System::Drawing::Point(28, 50);
			this->lblRevVal->Text = L"Rs. 0.00";
			this->lblRevVal->TabIndex = 0;
			this->lblRevVal->Name = L"lblRevVal";
			//
			// lblRevCap
			//
			this->lblRevCap->AutoSize = true;
			this->lblRevCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRevCap->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblRevCap->Location = System::Drawing::Point(32, 140);
			this->lblRevCap->Text = L"Total Revenue";
			this->lblRevCap->TabIndex = 1;
			this->lblRevCap->Name = L"lblRevCap";
			//
			// pnlCars
			//
			this->pnlCars->BackColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->pnlCars->Location = System::Drawing::Point(500, 250);
			this->pnlCars->Size = System::Drawing::Size(460, 200);
			this->pnlCars->Controls->Add(this->lblCarsCap);
			this->pnlCars->Controls->Add(this->lblAvailCap);
			this->pnlCars->Controls->Add(this->lblAvail);
			this->pnlCars->Controls->Add(this->lblRentedCap);
			this->pnlCars->Controls->Add(this->lblRented);
			this->pnlCars->Controls->Add(this->lblMaintCap);
			this->pnlCars->Controls->Add(this->lblMaint);
			this->pnlCars->TabIndex = 4;
			this->pnlCars->Name = L"pnlCars";
			//
			// lblCarsCap
			//
			this->lblCarsCap->AutoSize = true;
			this->lblCarsCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblCarsCap->ForeColor = System::Drawing::Color::FromArgb(203, 213, 225);
			this->lblCarsCap->Location = System::Drawing::Point(28, 18);
			this->lblCarsCap->Text = L"Cars";
			this->lblCarsCap->TabIndex = 0;
			this->lblCarsCap->Name = L"lblCarsCap";
			//
			// lblAvailCap
			//
			this->lblAvailCap->AutoSize = true;
			this->lblAvailCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAvailCap->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblAvailCap->Location = System::Drawing::Point(28, 68);
			this->lblAvailCap->Text = L"Available Cars :";
			this->lblAvailCap->TabIndex = 1;
			this->lblAvailCap->Name = L"lblAvailCap";
			//
			// lblAvail
			//
			this->lblAvail->AutoSize = true;
			this->lblAvail->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblAvail->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblAvail->Location = System::Drawing::Point(380, 62);
			this->lblAvail->Text = L"0";
			this->lblAvail->TabIndex = 2;
			this->lblAvail->Name = L"lblAvail";
			//
			// lblRentedCap
			//
			this->lblRentedCap->AutoSize = true;
			this->lblRentedCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRentedCap->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblRentedCap->Location = System::Drawing::Point(28, 112);
			this->lblRentedCap->Text = L"Rented Cars :";
			this->lblRentedCap->TabIndex = 3;
			this->lblRentedCap->Name = L"lblRentedCap";
			//
			// lblRented
			//
			this->lblRented->AutoSize = true;
			this->lblRented->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblRented->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblRented->Location = System::Drawing::Point(380, 106);
			this->lblRented->Text = L"0";
			this->lblRented->TabIndex = 4;
			this->lblRented->Name = L"lblRented";
			//
			// lblMaintCap
			//
			this->lblMaintCap->AutoSize = true;
			this->lblMaintCap->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblMaintCap->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblMaintCap->Location = System::Drawing::Point(28, 156);
			this->lblMaintCap->Text = L"In Maintenance Cars :";
			this->lblMaintCap->TabIndex = 5;
			this->lblMaintCap->Name = L"lblMaintCap";
			//
			// lblMaint
			//
			this->lblMaint->AutoSize = true;
			this->lblMaint->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblMaint->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->lblMaint->Location = System::Drawing::Point(380, 150);
			this->lblMaint->Text = L"0";
			this->lblMaint->TabIndex = 6;
			this->lblMaint->Name = L"lblMaint";
			//
			// this
			//
			this->BackColor = System::Drawing::Color::FromArgb(226, 232, 240);
			this->Size = System::Drawing::Size(980, 650);
			this->Controls->Add(this->pnlCust);
			this->Controls->Add(this->pnlRent);
			this->Controls->Add(this->pnlEmp);
			this->Controls->Add(this->pnlRev);
			this->Controls->Add(this->pnlCars);
			this->Name = L"DashboardPage";

			this->pnlCust->ResumeLayout(false);
			this->pnlCust->PerformLayout();
			this->pnlRent->ResumeLayout(false);
			this->pnlRent->PerformLayout();
			this->pnlEmp->ResumeLayout(false);
			this->pnlEmp->PerformLayout();
			this->pnlRev->ResumeLayout(false);
			this->pnlRev->PerformLayout();
			this->pnlCars->ResumeLayout(false);
			this->pnlCars->PerformLayout();
			this->ResumeLayout(false);
		}
#pragma endregion
	public: void RefreshData() { LoadData(); }
	private:
		String^ Count(String^ sql) { return Convert::ToString(Db::Scalar(sql)); }
		void LoadData()
		{
			lblCustVal->Text = Count("SELECT COUNT(*) FROM customers");
			lblRentVal->Text = Count("SELECT COUNT(*) FROM rentals");
			lblEmpVal->Text = Count("SELECT COUNT(*) FROM employees");
			lblRevVal->Text = String::Format("Rs. {0:N2}", Db::Scalar("SELECT IFNULL(SUM(amount),0) FROM payments"));
			lblAvail->Text = Count("SELECT COUNT(*) FROM cars WHERE status='Available'");
			lblRented->Text = Count("SELECT COUNT(*) FROM cars WHERE status='Rented'");
			lblMaint->Text = Count("SELECT COUNT(*) FROM cars WHERE status='Maintenance'");
		}
	};
}
