#pragma once
#include "Db.h"

namespace RentXpress {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();

		}
	protected:
		~LoginForm()
		{
			if (components) delete components;
		}
	private: System::Windows::Forms::Panel^ pnlLeft;
	private: System::Windows::Forms::Label^ lblBrand;
	private: System::Windows::Forms::Label^ lblTag;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Label^ lblWelcome;
	private: System::Windows::Forms::Label^ lblSub;
	private: System::Windows::Forms::Label^ lblUser;
	private: System::Windows::Forms::TextBox^ txtUser;
	private: System::Windows::Forms::Label^ lblPass;
	private: System::Windows::Forms::TextBox^ txtPass;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Label^ lblMsg;
	private: System::Windows::Forms::Label^ lblHint;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			   this->pnlLeft = (gcnew System::Windows::Forms::Panel());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->lblBrand = (gcnew System::Windows::Forms::Label());
			   this->lblTag = (gcnew System::Windows::Forms::Label());
			   this->btnClose = (gcnew System::Windows::Forms::Button());
			   this->lblWelcome = (gcnew System::Windows::Forms::Label());
			   this->lblSub = (gcnew System::Windows::Forms::Label());
			   this->lblUser = (gcnew System::Windows::Forms::Label());
			   this->txtUser = (gcnew System::Windows::Forms::TextBox());
			   this->lblPass = (gcnew System::Windows::Forms::Label());
			   this->txtPass = (gcnew System::Windows::Forms::TextBox());
			   this->btnLogin = (gcnew System::Windows::Forms::Button());
			   this->lblMsg = (gcnew System::Windows::Forms::Label());
			   this->lblHint = (gcnew System::Windows::Forms::Label());
			   this->pnlLeft->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // pnlLeft
			   // 
			   this->pnlLeft->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				   static_cast<System::Int32>(static_cast<System::Byte>(59)));
			   this->pnlLeft->Controls->Add(this->pictureBox1);
			   this->pnlLeft->Controls->Add(this->lblBrand);
			   this->pnlLeft->Controls->Add(this->lblTag);
			   this->pnlLeft->Dock = System::Windows::Forms::DockStyle::Left;
			   this->pnlLeft->Location = System::Drawing::Point(0, 0);
			   this->pnlLeft->Name = L"pnlLeft";
			   this->pnlLeft->Size = System::Drawing::Size(300, 460);
			   this->pnlLeft->TabIndex = 0;
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 125);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(300, 249);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			   this->pictureBox1->TabIndex = 2;
			   this->pictureBox1->TabStop = false;
			   // 
			   // lblBrand
			   // 
			   this->lblBrand->AutoSize = true;
			   this->lblBrand->Font = (gcnew System::Drawing::Font(L"Segoe UI", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblBrand->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->lblBrand->Location = System::Drawing::Point(30, 150);
			   this->lblBrand->Name = L"lblBrand";
			   this->lblBrand->Size = System::Drawing::Size(257, 60);
			   this->lblBrand->TabIndex = 0;
			   this->lblBrand->Text = L"RentXpress";
			   // 
			   // lblTag
			   // 
			   this->lblTag->AutoSize = true;
			   this->lblTag->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblTag->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->lblTag->Location = System::Drawing::Point(34, 205);
			   this->lblTag->Name = L"lblTag";
			   this->lblTag->Size = System::Drawing::Size(255, 23);
			   this->lblTag->TabIndex = 1;
			   this->lblTag->Text = L"Car Rental Management System";
			   // 
			   // btnClose
			   // 
			   this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->btnClose->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnClose->FlatAppearance->BorderSize = 0;
			   this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnClose->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(139)));
			   this->btnClose->Location = System::Drawing::Point(738, 8);
			   this->btnClose->Name = L"btnClose";
			   this->btnClose->Size = System::Drawing::Size(36, 30);
			   this->btnClose->TabIndex = 1;
			   this->btnClose->Text = L"X";
			   this->btnClose->UseVisualStyleBackColor = false;
			   this->btnClose->Click += gcnew System::EventHandler(this, &LoginForm::btnClose_Click);
			   // 
			   // lblWelcome
			   // 
			   this->lblWelcome->AutoSize = true;
			   this->lblWelcome->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblWelcome->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				   static_cast<System::Int32>(static_cast<System::Byte>(59)));
			   this->lblWelcome->Location = System::Drawing::Point(340, 80);
			   this->lblWelcome->Name = L"lblWelcome";
			   this->lblWelcome->Size = System::Drawing::Size(277, 50);
			   this->lblWelcome->TabIndex = 2;
			   this->lblWelcome->Text = L"Welcome Back";
			   // 
			   // lblSub
			   // 
			   this->lblSub->AutoSize = true;
			   this->lblSub->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblSub->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(100)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				   static_cast<System::Int32>(static_cast<System::Byte>(139)));
			   this->lblSub->Location = System::Drawing::Point(342, 125);
			   this->lblSub->Name = L"lblSub";
			   this->lblSub->Size = System::Drawing::Size(155, 23);
			   this->lblSub->TabIndex = 3;
			   this->lblSub->Text = L"Sign in to continue";
			   // 
			   // lblUser
			   // 
			   this->lblUser->AutoSize = true;
			   this->lblUser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblUser->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				   static_cast<System::Int32>(static_cast<System::Byte>(105)));
			   this->lblUser->Location = System::Drawing::Point(342, 180);
			   this->lblUser->Name = L"lblUser";
			   this->lblUser->Size = System::Drawing::Size(80, 20);
			   this->lblUser->TabIndex = 4;
			   this->lblUser->Text = L"Username";
			   // 
			   // txtUser
			   // 
			   this->txtUser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->txtUser->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtUser->Location = System::Drawing::Point(342, 202);
			   this->txtUser->Name = L"txtUser";
			   this->txtUser->Size = System::Drawing::Size(390, 32);
			   this->txtUser->TabIndex = 5;
			   // 
			   // lblPass
			   // 
			   this->lblPass->AutoSize = true;
			   this->lblPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblPass->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(71)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				   static_cast<System::Int32>(static_cast<System::Byte>(105)));
			   this->lblPass->Location = System::Drawing::Point(342, 252);
			   this->lblPass->Name = L"lblPass";
			   this->lblPass->Size = System::Drawing::Size(76, 20);
			   this->lblPass->TabIndex = 6;
			   this->lblPass->Text = L"Password";
			   // 
			   // txtPass
			   // 
			   this->txtPass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			   this->txtPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->txtPass->Location = System::Drawing::Point(342, 274);
			   this->txtPass->Name = L"txtPass";
			   this->txtPass->Size = System::Drawing::Size(390, 32);
			   this->txtPass->TabIndex = 7;
			   this->txtPass->UseSystemPasswordChar = true;
			   // 
			   // btnLogin
			   // 
			   this->btnLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(99)),
				   static_cast<System::Int32>(static_cast<System::Byte>(235)));
			   this->btnLogin->Cursor = System::Windows::Forms::Cursors::Hand;
			   this->btnLogin->FlatAppearance->BorderSize = 0;
			   this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->btnLogin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->btnLogin->Location = System::Drawing::Point(342, 330);
			   this->btnLogin->Name = L"btnLogin";
			   this->btnLogin->Size = System::Drawing::Size(390, 44);
			   this->btnLogin->TabIndex = 8;
			   this->btnLogin->Text = L"LOGIN";
			   this->btnLogin->UseVisualStyleBackColor = false;
			   this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			   // 
			   // lblMsg
			   // 
			   this->lblMsg->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblMsg->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(38)),
				   static_cast<System::Int32>(static_cast<System::Byte>(38)));
			   this->lblMsg->Location = System::Drawing::Point(342, 388);
			   this->lblMsg->Name = L"lblMsg";
			   this->lblMsg->Size = System::Drawing::Size(390, 20);
			   this->lblMsg->TabIndex = 9;
			   // 
			   // lblHint
			   // 
			   this->lblHint->AutoSize = true;
			   this->lblHint->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->lblHint->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(163)),
				   static_cast<System::Int32>(static_cast<System::Byte>(184)));
			   this->lblHint->Location = System::Drawing::Point(342, 420);
			   this->lblHint->Name = L"lblHint";
			   this->lblHint->Size = System::Drawing::Size(0, 20);
			   this->lblHint->TabIndex = 10;
			   // 
			   // LoginForm
			   // 
			   this->AcceptButton = this->btnLogin;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				   static_cast<System::Int32>(static_cast<System::Byte>(255)));
			   this->ClientSize = System::Drawing::Size(780, 460);
			   this->Controls->Add(this->pnlLeft);
			   this->Controls->Add(this->btnClose);
			   this->Controls->Add(this->lblWelcome);
			   this->Controls->Add(this->lblSub);
			   this->Controls->Add(this->lblUser);
			   this->Controls->Add(this->txtUser);
			   this->Controls->Add(this->lblPass);
			   this->Controls->Add(this->txtPass);
			   this->Controls->Add(this->btnLogin);
			   this->Controls->Add(this->lblMsg);
			   this->Controls->Add(this->lblHint);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Name = L"LoginForm";
			   this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			   this->Text = L"RentXpress - Login";
			   this->pnlLeft->ResumeLayout(false);
			   this->pnlLeft->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e)
	{
		try
		{
			DataTable^ dt = Db::Query("SELECT username, role FROM users WHERE username=@p0 AND password_hash=SHA2(@p1,256)", txtUser->Text->Trim(), txtPass->Text);
			if (dt->Rows->Count == 1)
			{
				Session::User = dt->Rows[0]["username"]->ToString();
				Session::Role = dt->Rows[0]["role"]->ToString();
				this->DialogResult = System::Windows::Forms::DialogResult::OK;
				this->Close();
			}
			else lblMsg->Text = "Invalid username or password.";
		}
		catch (Exception^ ex)
		{
			lblMsg->Text = "Database error (see message box)";
			MessageBox::Show("Database error:\n\n" + ex->ToString(), "RentXpress", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		this->Close();
	}

};
}