-- RentXpress database  
DROP DATABASE IF EXISTS rentxpress;
CREATE DATABASE rentxpress CHARACTER SET utf8mb4;
USE rentxpress;

CREATE TABLE IF NOT EXISTS users (
  id INT AUTO_INCREMENT PRIMARY KEY,
  username VARCHAR(50) NOT NULL UNIQUE,
  password_hash CHAR(64) NOT NULL,
  role VARCHAR(20) NOT NULL DEFAULT 'Owner');
CREATE TABLE IF NOT EXISTS cars (
  id INT AUTO_INCREMENT PRIMARY KEY,
  model VARCHAR(60) NOT NULL, brand VARCHAR(60) NOT NULL,
  reg_no VARCHAR(20) NOT NULL UNIQUE,
  price DECIMAL(10,2) NOT NULL,
  status ENUM('Available','Rented','Maintenance') NOT NULL DEFAULT 'Available');
CREATE TABLE IF NOT EXISTS customers (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(80) NOT NULL, phone VARCHAR(20) NOT NULL,
  license_no VARCHAR(30) NOT NULL UNIQUE, email VARCHAR(80));
CREATE TABLE IF NOT EXISTS employees (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(80) NOT NULL, position VARCHAR(50) NOT NULL, phone VARCHAR(20) NOT NULL,
  email VARCHAR(80), hire_date DATE NOT NULL);
CREATE TABLE IF NOT EXISTS suppliers (
  id INT AUTO_INCREMENT PRIMARY KEY,
  name VARCHAR(80) NOT NULL, phone VARCHAR(20) NOT NULL, email VARCHAR(80), services VARCHAR(255) NOT NULL);
CREATE TABLE IF NOT EXISTS rentals (
  id INT AUTO_INCREMENT PRIMARY KEY,
  customer_id INT NOT NULL, car_id INT NOT NULL,
  start_date DATE NOT NULL, end_date DATE NOT NULL,
  total DECIMAL(12,2) NOT NULL,
  status ENUM('Active','Returned') NOT NULL DEFAULT 'Active',
  FOREIGN KEY (customer_id) REFERENCES customers(id),
  FOREIGN KEY (car_id) REFERENCES cars(id));
CREATE TABLE IF NOT EXISTS payments (
  id INT AUTO_INCREMENT PRIMARY KEY,
  rental_id INT NOT NULL, amount DECIMAL(12,2) NOT NULL,
  pay_date DATE NOT NULL, method VARCHAR(20) NOT NULL,
  FOREIGN KEY (rental_id) REFERENCES rentals(id) ON DELETE CASCADE);
CREATE TABLE IF NOT EXISTS maintenance (
  id INT AUTO_INCREMENT PRIMARY KEY,
  car_id INT NOT NULL, mdate DATE NOT NULL, remarks VARCHAR(255) NOT NULL,
  status ENUM('Pending','In Progress','Completed') NOT NULL DEFAULT 'Pending',
  FOREIGN KEY (car_id) REFERENCES cars(id) ON DELETE CASCADE);

-- login: admin / admin123
INSERT IGNORE INTO users(username, password_hash, role) VALUES ('admin', SHA2('admin123',256), 'Owner');

-- sample data
INSERT IGNORE INTO cars(model,brand,reg_no,price,status) VALUES
 ('Axio','Toyota','CAB-1234',8000,'Available'), ('Alto','Suzuki','CBD-5678',5000,'Available'),
 ('Fit','Honda','KY-2020',7000,'Available'), ('Aqua','Toyota','CAR-9090',7500,'Available'),
 ('Vitz','Toyota','WP-4455',6000,'Available');
INSERT IGNORE INTO customers(name,phone,license_no,email) VALUES
 ('Nimal Perera','0771234567','B1234567','nimal@mail.com'), ('Kasuni Silva','0712345678','B7654321','kasuni@mail.com');
INSERT IGNORE INTO employees(name,position,phone,email,hire_date) VALUES
 ('Sunil Fernando','Manager','0777654321','sunil@rentxpress.lk','2024-01-15');
INSERT IGNORE INTO suppliers(name,phone,email,services) VALUES
 ('AutoCare Lanka','0112233445','info@autocare.lk','Tyres, Oil change, Spare parts');
