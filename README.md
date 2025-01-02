# Bank Management System (1st Semester Project - BIT)

## Project Overview

This project is a **Bank Management System**, developed in **C** as part of the 1st semester curriculum for the **Bachelor in Information Technology (BIT)** program. The system allows users to perform essential banking operations such as creating accounts, depositing and withdrawing funds, and viewing account details. 

## Features

1. **Account Management**:
   - Create new accounts with essential details such as name, address, phone number, etc.
   - Assign unique account numbers to each user.

2. **Transactions**:
   - Deposit funds into an account.
   - Withdraw funds from an account.

3. **Data Storage**:
   - Save account information securely in a text file (`bankdata.txt`).

4. **Security**:
   - Password-protected login system to prevent unauthorized access.

5. **User-Friendly Interface**:
   - Command-line based menu system for ease of use.
   - ASCII art and formatted outputs for an engaging user experience.

## How It Works

1. **Login**:
   - A password-protected login grants access to the main menu.

2. **Main Menu**:
   - Navigate through options like account creation, deposit, withdrawal, and balance inquiry.

3. **File Handling**:
   - All account details are stored in a file for persistence across sessions.

4. **Modular Code**:
   - Functions like `create_account`, `deposit_amount`, and `withdraw_amount` are modular, ensuring code clarity and maintainability.

## Technology Used

- **Programming Language**: C
- **Development Environment**: GCC Compiler (e.g., Code::Blocks, Turbo C)
- **File Handling**: Text file (`bankdata.txt`) for data storage

## How to Run

1. **Prerequisites**:
   - Install a C compiler like GCC.
   - Clone this repository to your local machine.

2. **Compile the Code**:
   ```bash
   gcc bank_management.c -o bank_management
