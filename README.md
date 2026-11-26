# ATM Simulation

## Team Details
- Team Number: 5
- Team Name: Stack Overflow
- Batch: [54]
- Team Members:
  1. Prashant Mishra
  2. Jyoti Chaudhary

## Project Description
ATM Simulation is a menu-driven C program that simulates basic ATM operations using a single demonstration account.

## Objectives
- Check account balance
- Deposit money
- Withdraw money
- Validate transactions
- Display updated balance

## C Concepts Used
- Variables and data types
- printf() and scanf()
- switch-case
- if-else statements
- do-while loop
- Arithmetic operators
- Logical operators

## Initial Balance
Rs. 5000

## Algorithm
1. Start the program.
2. Initialize balance to 5000.
3. Display the ATM menu.
4. Accept the user's choice.
5. Perform the selected operation.
6. Validate deposit and withdrawal amounts.
7. Display the updated balance.
8. Repeat until the user selects Exit.
9. End the program.

## How to Run
1. Open the C source file.
2. Compile using GCC:
   gcc atm.c -o atm
3. Run:
   ./atm

## Sample Test Cases

| Operation | Input | Expected Result |
|---|---|---|
| Check Balance | 1 | Rs. 5000 |
| Deposit | 2000 | Rs. 7000 |
| Withdraw | 1000 | Rs. 6000 |
| Insufficient Balance | 10000 | Transaction rejected |

## Conclusion
The project demonstrates basic ATM operations using fundamental C programming concepts.
