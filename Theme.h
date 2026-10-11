#pragma once
// UI helper: colours, DataGridView style, rounded corners, message boxes
namespace RentXpress {
	using namespace System;
	using namespace System::Drawing;
	using namespace System::Windows::Forms;

	public ref class Theme abstract sealed
	{
	public:
		static property Color Navy   { Color get() { return Color::FromArgb(30, 41, 59); } }
		static property Color Dark   { Color get() { return Color::FromArgb(15, 23, 42); } }
		static property Color Accent { Color get() { return Color::FromArgb(37, 99, 235); } }

		static void Grid(DataGridView^ g)
		{
			g->BackgroundColor = Color::White;
			g->BorderStyle = System::Windows::Forms::BorderStyle::None;
			g->EnableHeadersVisualStyles = false;
			g->ColumnHeadersBorderStyle = DataGridViewHeaderBorderStyle::None;
			g->ColumnHeadersDefaultCellStyle->BackColor = Navy;
			g->ColumnHeadersDefaultCellStyle->ForeColor = Color::White;
			g->ColumnHeadersDefaultCellStyle->Font = gcnew System::Drawing::Font("Segoe UI", 10, FontStyle::Bold);
			g->ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode::DisableResizing;
			g->ColumnHeadersHeight = 38;
			g->RowHeadersVisible = false;
			g->RowTemplate->Height = 32;
			g->AllowUserToAddRows = false;
			g->AllowUserToDeleteRows = false;
			g->ReadOnly = true;
			g->MultiSelect = false;
			g->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
			g->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::Fill;
			g->CellBorderStyle = DataGridViewCellBorderStyle::SingleHorizontal;
			g->GridColor = Color::FromArgb(226, 232, 240);
			g->DefaultCellStyle->Font = gcnew System::Drawing::Font("Segoe UI", 10);
			g->DefaultCellStyle->SelectionBackColor = Accent;
			g->DefaultCellStyle->SelectionForeColor = Color::White;
			g->AlternatingRowsDefaultCellStyle->BackColor = Color::FromArgb(241, 245, 249);
		}
		static void Round(Control^ c, int r)
		{
			System::Drawing::Drawing2D::GraphicsPath^ p = gcnew System::Drawing::Drawing2D::GraphicsPath();
			int d = r * 2, w = c->Width, h = c->Height;
			p->AddArc(0, 0, d, d, 180, 90);
			p->AddArc(w - d, 0, d, d, 270, 90);
			p->AddArc(w - d, h - d, d, d, 0, 90);
			p->AddArc(0, h - d, d, d, 90, 90);
			p->CloseFigure();
			c->Region = gcnew System::Drawing::Region(p);
		}
		static void Info(String^ m)  { MessageBox::Show(m, "RentXpress", MessageBoxButtons::OK, MessageBoxIcon::Information); }
		static void Warn(String^ m)  { MessageBox::Show(m, "RentXpress", MessageBoxButtons::OK, MessageBoxIcon::Warning); }
		static void Error(String^ m) { MessageBox::Show(m, "RentXpress", MessageBoxButtons::OK, MessageBoxIcon::Error); }
		static bool Ask(String^ m)
		{
			return MessageBox::Show(m, "RentXpress", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes;
		}
	};
}
