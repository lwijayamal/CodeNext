#pragma once

namespace RentXpress {
	using namespace System;

	
	public ref class Person abstract
	{
	private:                                   // ENCAPSULATION: private data...
		int id; String^ name; String^ phone; String^ email;
	public:
		Person(int id, String^ name, String^ phone, String^ email)
		{ this->id = id; this->name = name; this->phone = phone; this->email = email; }

		property int Id { int get() { return id; } void set(int v) { id = v; } }   // ...public properties
		property String^ Name { String^ get() { return name; } void set(String^ v) { name = v; } }
		property String^ Phone { String^ get() { return phone; } void set(String^ v) { phone = v; } }
		property String^ Email { String^ get() { return email; } void set(String^ v) { email = v; } }

		virtual String^ GetRole() abstract;     // must be implemented by child classes
		virtual String^ Describe() { return Name + " | " + Phone + " | " + Email; }
	};

	// INHERITANCE: Customer is a Person
	public ref class Customer : public Person
	{
	private: String^ licenseNo;
	public:
		Customer(int id, String^ name, String^ phone, String^ email, String^ license) : Person(id, name, phone, email)
		{ licenseNo = license; }
		property String^ LicenseNo { String^ get() { return licenseNo; } void set(String^ v) { licenseNo = v; } }
		// POLYMORPHISM: overriding virtual methods
		virtual String^ GetRole() override { return "Customer"; }
		virtual String^ Describe() override { return Person::Describe() + " | License: " + licenseNo; }
	};

	// INHERITANCE: Employee is a Person
	public ref class Employee : public Person
	{
	private: String^ position; DateTime hireDate;
	public:
		Employee(int id, String^ name, String^ phone, String^ email, String^ position, DateTime hireDate) : Person(id, name, phone, email)
		{ this->position = position; this->hireDate = hireDate; }
		property String^ Position { String^ get() { return position; } void set(String^ v) { position = v; } }
		property DateTime HireDate { DateTime get() { return hireDate; } void set(DateTime v) { hireDate = v; } }
		virtual String^ GetRole() override { return "Employee (" + position + ")"; }
		virtual String^ Describe() override { return Person::Describe() + " | Hired: " + hireDate.ToString("yyyy-MM-dd"); }
	};

	// CLASS + OBJECT: Car (objects are created with gcnew Car(...))
	public ref class Car
	{
	private: int id; String^ brand; String^ model; String^ regNo; Decimal price;
	public:
		Car(int id, String^ brand, String^ model, String^ regNo, Decimal price)
		{ this->id = id; this->brand = brand; this->model = model; this->regNo = regNo; this->price = price; }
		property int Id { int get() { return id; } }
		property String^ Brand { String^ get() { return brand; } }
		property Decimal Price   // encapsulation with validation
		{
			Decimal get() { return price; }
			void set(Decimal v) { if (Decimal::Compare(v, Decimal::Zero) < 0) throw gcnew ArgumentException("Price cannot be negative"); price = v; }
		}
		Decimal CalcRent(int days) { if (days < 1) return Decimal::Zero; return Decimal::Multiply(price, Decimal(days)); }
		virtual String^ ToString() override { return brand + " " + model + " (" + regNo + ")"; }
	};
}
