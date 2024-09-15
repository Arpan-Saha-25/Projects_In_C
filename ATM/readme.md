# ATM Simulation Program

This is a simple ATM simulation program written in C that allows users to:
- Check their balance.
- Withdraw money.
- Deposit money.
- Exit the ATM system.

The program reads valid card numbers and their corresponding PINs from a file named `data.txt`. The user must enter a valid 12-digit card number and 5-digit PIN to access the ATM services.

## Features
1. **Card Number and PIN Validation**:
   - The card number and PIN are verified by reading from the `data.txt` file.
   - If the card number or PIN is invalid, the program will terminate with an error message.

2. **Options**:
   - Check balance.
   - Withdraw money (only if the amount is available in the account).
   - Deposit money.
   - Exit the ATM system.

## File Structure
- **ATM Program**: The main program is written in C (`MAIN.c`).
- **Data File**: The `data.txt` file contains card numbers and corresponding PINs.

## Getting Started

### Prerequisites
To run this program, you need:
- A C compiler (like `gcc`).
- A terminal or command prompt.

### Setup Instructions

1. **Clone the Repository** (or copy the files to your system):
   ```bash
   git clone <repository-url>
   ```
   Alternatively, download the `MAIN.c` and `data.txt` files manually.

2. **Create the `data.txt` file**:
   The `data.txt` file must contain valid card numbers and PINs in the following format:
   ```txt
   <card_number> <pin>
   ```
   Example `data.txt` file:
   ```txt
   123456789012 12345
   987654321098 54321
   112233445566 11111
   989898986969 42069
   ```

3. **Compile the Program**:
   Open the terminal and compile the program using a C compiler like `gcc`:
   ```bash
   gcc -o atm_program MAIN.c
   ```

4. **Run the Program**:
   After successful compilation, run the program:
   ```bash
   ./atm_program
   ```

## Usage

1. The program will prompt the user to enter their 12-digit card number.
2. If the card number is valid (from `data.txt`), it will ask for a 5-digit PIN.
3. If both card number and PIN are valid, the user will be presented with the following options:
   - **1. Check balance**: Displays the current balance.
   - **2. Withdraw money**: Allows the user to withdraw money, ensuring the withdrawal amount does not exceed the current balance.
   - **3. Deposit money**: Allows the user to deposit money into their account.
   - **4. Exit**: Terminates the program.

### Example Interaction:
```
=========================================
------- Welcome To The ATM Services -----
=========================================

Enter your 12-digit card no. : 123456789012
Enter 5-digit PIN : 12345

=========================================
Please choose an option :
1. Check balance
2. Withdraw Money
3. Deposit Money
4. Exit

Your Choice: 1
Your Balance is Rs10000.
```

## Notes
- The program checks for a valid 12-digit card number and a 5-digit PIN. If the user enters invalid data, the program will terminate.
- You can update the `data.txt` file with more card numbers and PINs to simulate multiple users.

## License
This program is open-source and licensed under the MIT License. You can modify and distribute it as needed.

---

This version reflects that the main program file is named `MAIN.c`. Let me know if you need further adjustments!