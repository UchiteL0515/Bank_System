# 💳 Bank_System (C++)

> A simple banking system written in C++ with MySQL integration.  
> Rewritten from my original Java OOP project during my second year at university.

---

## 📋 Table of Contents
- [Features](#-features)
- [Database](#-database)
- [Installation](#-installation)
- [Usage](#-usage)
- [License](#-license)
- [Credits](#-credits)

---

## 🚀 Features

Supports two user types: **ADMIN** and **USER**.

### 👤 ADMIN
- Create new user accounts
- Update or delete existing user records
- View, update, or delete transaction records

### 👥 USER
- Request an account (pending admin approval)
- Deposit and withdraw funds
- View transaction history
- Close account

---

## 🗃️ Database

- Uses **MySQL** to store all user and transaction data.
- On launch, the program checks if the required database exists.
  - If not found, it automatically creates the necessary database and tables.

> ⚠️ **Note:** Make sure **MySQL Server** is installed and running on your system before running the application.

---

## 🛠️ Installation

### 1. Install MySQL Server  
Download and install from [MySQL Community Server](https://dev.mysql.com/downloads/mysql/)

### 2. Clone this repository
```bash
git clone https://github.com/your-username/Bank_System_CPP.git
cd Bank_System_CPP
```

### 3. Set up your MySQL credentials
Open the file where the database connection is configured (e.g., config.h or main.cpp) and update:
```bash
const char* DB_HOST = "localhost";
const char* DB_USER = "your_mysql_username";
const char* DB_PASS = "your_mysql_password";
const char* DB_NAME = "bank_system_db";
```

### 4. Build and run
On Linux/macOS:
```bash
g++ -o bank_system main.cpp -lmysqlclient
./bank_system
```

On Windows(MinGW):
```bash
g++ -o bank_system.exe main.cpp -lmysql
bank_system.exe
```
Make sure MySQL libraries are linked properly and libmysql.dll (if needed) is in your path.

---

## ▶️ Usage

- Run the program from the terminal.
- Choose between ADMIN and USER login.
- Navigate menus to perform tasks like account creation, deposits, withdrawals, etc.

---

## 🪪 License

This project is open-source and licensed under the [GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html).

You are free to use, modify, and distribute this software under the terms of the GPL.  
Please see the [LICENSE](LICENSE) file for more information.

---

## 🙌 Credits

Made with ❤️ by UchiteLeiden
Originally developed in Java, now rewritten in C++ to deepen my understanding of software development.

# Thank you for trying the application!!
