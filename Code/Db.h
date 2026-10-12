#pragma once

namespace RentXpress {
	using namespace System;
	using namespace System::Data;
	using namespace MySql::Data::MySqlClient;

	// Logged-in user information
	public ref class Session abstract sealed
	{
	public:
		static String^ User;
		static String^ Role;
	};

	public ref class Db abstract sealed
	{
	public:
		static String^ ConnStr;
		static Db()
		{
			// >>> CHANGE user / password to your MySQL account <<<
			ConnStr = "server=localhost;port=3306;user=root;Pwd=admin;database=rentxpress;";
		}
		// SELECT -> DataTable.   Use @p0, @p1 ... as parameters
		static DataTable^ Query(String^ sql, ... array<Object^>^ args)
		{
			DataTable^ dt = gcnew DataTable();
			MySqlConnection^ con = gcnew MySqlConnection(ConnStr);
			try
			{
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, con);
				Bind(cmd, args);
				MySqlDataAdapter^ ad = gcnew MySqlDataAdapter(cmd);
				ad->Fill(dt);
			}
			finally { con->Close(); }
			return dt;
		}
		// INSERT / UPDATE / DELETE -> rows affected
		static int Exec(String^ sql, ... array<Object^>^ args)
		{
			MySqlConnection^ con = gcnew MySqlConnection(ConnStr);
			try
			{
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, con);
				Bind(cmd, args);
				return cmd->ExecuteNonQuery();
			}
			finally { con->Close(); }
		}
		// single value (COUNT, SUM ...)
		static Object^ Scalar(String^ sql, ... array<Object^>^ args)
		{
			MySqlConnection^ con = gcnew MySqlConnection(ConnStr);
			try
			{
				con->Open();
				MySqlCommand^ cmd = gcnew MySqlCommand(sql, con);
				Bind(cmd, args);
				return cmd->ExecuteScalar();
			}
			finally { con->Close(); }
		}
	private:
		static void Bind(MySqlCommand^ cmd, array<Object^>^ args)
		{
			if (args == nullptr) return;
			for (int i = 0; i < args->Length; i++)
			{
				Object^ v = args[i];
				if (v == nullptr) v = DBNull::Value;
				cmd->Parameters->AddWithValue(String::Concat("@p", i.ToString()), v);
			}
		}
	};
}
