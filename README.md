# Bank Account Management System (C++)

This project is a console-based C++ application that simulates basic banking operations using:

- Inheritance
- Encapsulation
- Constructor Overloading
- Interest Calculation
- Penalty for Minimum Balance

---

## 💡 Classes Used

### 🔷 `account` (Base Class)

Represents a general account with:

- Customer name
- Account number
- Account type

### 🔶 `current_account` (Derived Class)

Inherits from `account` and includes:

- Deposit functionality
- Balance check
- Minimum balance enforcement
- Penalty of Rs. 20 if balance goes below Rs. 500

### 🔶 `saving_account` (Derived Class)

Inherits from `account` and includes:

- Deposit functionality
- Interest calculation (default rate: 5%)
- Withdrawal with balance check

---

## ⚙️ Functionalities

- Create `account` with name, number, and type
- Deposit money to saving or current account
- Display account balance
- Apply interest to saving account
- Enforce penalty on current account if balance drops below threshold
- Withdraw from saving account with insufficient balance check

## 🧑‍💻 How to Run

1. Save the code as `bank_account.cpp`
2. Compile the file:
g++ bank_account.cpp -o bank

3. Run the program:
./bank

---

## ⚠️ Notes

- The `account` class constructor is used to set up basic customer details but isn't fully integrated with the derived classes.
- You could enhance this by linking customer details to both `saving_account` and `current_account` using constructor inheritance or composition.
- Error handling (e.g., negative deposit/withdrawal values) is not implemented and can be added as an improvement.

---
