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

	public ref class ProfileForm : public System::Windows::Forms::Form
	{
	public:
		ProfileForm(void)
		{
			InitializeComponent();
			lblInfo->Text = "Username: " + Session::User + "      Role: " + Session::Role;
		}
	protected:
		~ProfileForm()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Label^  lblHead;
	private: System::Windows::Forms::Label^  lblInfo;
	private: System::Windows::Forms::Label^  lblOld;
	private: System::Windows::Forms::TextBox^  txtOld;
	private: System::Windows::Forms::Label^  lblNew;
	private: System::Windows::Forms::TextBox^  txtNew;
	private: System::Windows::Forms::Label^  lblConf;
	private: System::Windows::Forms::TextBox^  txtConf;
	private: System::Windows::Forms::Button^  btnSave;
	private: System::Windows::Forms::Button^  btnCancel;
	private: System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = gcnew System::ComponentModel::Container();
			this->lblHead = (gcnew System::Windows::Forms::Label());
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->lblOld = (gcnew System::Windows::Forms::Label());
			this->txtOld = (gcnew System::Windows::Forms::TextBox());
			this->lblNew = (gcnew System::Windows::Forms::Label());
			this->txtNew = (gcnew System::Windows::Forms::TextBox());
			this->lblConf = (gcnew System::Windows::Forms::Label());
			this->txtConf = (gcnew System::Windows::Forms::TextBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());

			this->SuspendLayout();
			//
			// lblHead
			//
			this->lblHead->AutoSize = true;
			this->lblHead->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblHead->ForeColor = System::Drawing::Color::FromArgb(30, 41, 59);
			this->lblHead->Location = System::Drawing::Point(26, 20);
			this->lblHead->Text = L"My Profile";
			this->lblHead->TabIndex = 0;
			this->lblHead->Name = L"lblHead";
			//
			// lblInfo
			//
			this->lblInfo->AutoSize = true;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblInfo->ForeColor = System::Drawing::Color::FromArgb(100, 116, 139);
			this->lblInfo->Location = System::Drawing::Point(28, 62);
			this->lblInfo->Text = L"user";
			this->lblInfo->TabIndex = 1;
			this->lblInfo->Name = L"lblInfo";
			//
			// lblOld
			//
			this->lblOld->AutoSize = true;
			this->lblOld->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblOld->ForeColor = System::Drawing::Color::FromArgb(71, 85, 105);
			this->lblOld->Location = System::Drawing::Point(28, 110);
			this->lblOld->Text = L"Current Password";
			this->lblOld->TabIndex = 2;
			this->lblOld->Name = L"lblOld";
			//
			// txtOld
			//
			this->txtOld->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtOld->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtOld->Location = System::Drawing::Point(28, 132);
			this->txtOld->Size = System::Drawing::Size(360, 28);
			this->txtOld->UseSystemPasswordChar = true;
			this->txtOld->TabIndex = 3;
			this->txtOld->Name = L"txtOld";
			//
			// lblNew
			//
			this->lblNew->AutoSize = true;
			this->lblNew->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblNew->ForeColor = System::Drawing::Color::FromArgb(71, 85, 105);
			this->lblNew->Location = System::Drawing::Point(28, 180);
			this->lblNew->Text = L"New Password";
			this->lblNew->TabIndex = 4;
			this->lblNew->Name = L"lblNew";
			//
			// txtNew
			//
			this->txtNew->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtNew->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtNew->Location = System::Drawing::Point(28, 202);
			this->txtNew->Size = System::Drawing::Size(360, 28);
			this->txtNew->UseSystemPasswordChar = true;
			this->txtNew->TabIndex = 5;
			this->txtNew->Name = L"txtNew";
			//
			// lblConf
			//
			this->lblConf->AutoSize = true;
			this->lblConf->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lblConf->ForeColor = System::Drawing::Color::FromArgb(71, 85, 105);
			this->lblConf->Location = System::Drawing::Point(28, 250);
			this->lblConf->Text = L"Confirm New Password";
			this->lblConf->TabIndex = 6;
			this->lblConf->Name = L"lblConf";
			//
			// txtConf
			//
			this->txtConf->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtConf->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.0F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtConf->Location = System::Drawing::Point(28, 272);
			this->txtConf->Size = System::Drawing::Size(360, 28);
			this->txtConf->UseSystemPasswordChar = true;
			this->txtConf->TabIndex = 7;
			this->txtConf->Name = L"txtConf";
			//
			// btnSave
			//
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(37, 99, 235);
			this->btnSave->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSave->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnSave->Location = System::Drawing::Point(28, 332);
			this->btnSave->Size = System::Drawing::Size(175, 40);
			this->btnSave->Text = L"Change Password";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->TabIndex = 8;
			this->btnSave->Name = L"btnSave";
			this->btnSave->Click += gcnew System::EventHandler(this, &ProfileForm::btnSave_Click);
			//
			// btnCancel
			//
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(100, 116, 139);
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.0F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->btnCancel->Location = System::Drawing::Point(213, 332);
			this->btnCancel->Size = System::Drawing::Size(175, 40);
			this->btnCancel->Text = L"Close";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->TabIndex = 9;
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Click += gcnew System::EventHandler(this, &ProfileForm::btnCancel_Click);
			//
			// this
			//
			this->BackColor = System::Drawing::Color::FromArgb(255, 255, 255);
			this->ClientSize = System::Drawing::Size(420, 400);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"My Profile";
			this->Controls->Add(this->lblHead);
			this->Controls->Add(this->lblInfo);
			this->Controls->Add(this->lblOld);
			this->Controls->Add(this->txtOld);
			this->Controls->Add(this->lblNew);
			this->Controls->Add(this->txtNew);
			this->Controls->Add(this->lblConf);
			this->Controls->Add(this->txtConf);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->btnCancel);
			this->Name = L"ProfileForm";

			this->ResumeLayout(false);
		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (txtNew->Text->Length < 4) { Theme::Warn("New password must be at least 4 characters."); return; }
		if (!txtNew->Text->Equals(txtConf->Text)) { Theme::Warn("Passwords do not match."); return; }
		try
		{
			int n = Db::Exec("UPDATE users SET password_hash=SHA2(@p0,256) WHERE username=@p1 AND password_hash=SHA2(@p2,256)", txtNew->Text, Session::User, txtOld->Text);
			if (n == 1) { Theme::Info("Password changed successfully."); this->Close(); }
			else Theme::Warn("Current password is incorrect.");
		}
		catch (Exception^ ex) { Theme::Error(ex->Message); }
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) { this->Close(); }
	};
}
