@@ -1,54 +1,54 @@
## Bank Interest Calculator - Documentation 
## 1. Introduction
The Bank Interest Calculator is a simple C++ console application that calculates Simple Interest and Compound Interest based on user input. It demonstrates real-life banking calculations in a programmatic way.

## 2. Problem Statement
Bank customers need a program to calculate the total amount payable or receivable based on principal, rate of interest, and time. The program should provide options for both Simple and Compound Interest.

## 3. Objective
To create a menu-driven program for calculating bank interest.
To demonstrate the use of loops, switch-case, and mathematical operations in C++.
To provide a simple real-life application of programming.
## 4. Approach / Method Used
Display a menu with options for Simple Interest, Compound Interest, and Exit.
Take user input: Principal, Rate, Time.
Perform calculations using formulas:
Simple Interest (SI): SI = (P × R × T) / 100
Compound Interest (CI): CI = P * (1 + R/100)^T - P
Display the calculated interest and total amount.
Repeat until user chooses Exit.
## 5. Algorithm
Start
Display menu
Input choice
If choice is 1 → calculate SI
If choice is 2 → calculate CI
Display result
Repeat menu
End
## 6. Intuition
The program follows the standard mathematical formulas for interest calculation. It uses loops and switch-case to create an interactive menu.

## 7. Time Complexity
Simple operations → O(1)
Menu loop → O(n) where n = number of times user interacts
8. Space Complexity
Uses constant extra memory for variables → O(1)
Vector/arrays not used → minimal memory
## 9. Sample Input/Output
===== Bank Interest Calculator =====

Simple Interest
Compound Interest
Exit Enter your choice: 1
Enter Principal Amount (₹): 10000 Enter Rate of Interest (% per year): 5 Enter Time (in years): 3

Simple Interest = ₹1500 Total Amount = ₹11500

## Algorithm for Bank Interest Calculation
Step-1: Start Step-2: Declare variables P → Principal amount R → Rate of interest T → Time (in years) SI → Simple Interest Step-3: Input the Principal amount (P). Step-4: Input the Rate of interest (R). Step-5: Input the Time period (T). Step-6: Calculate the Simple Interest using the formula Step-7: Display the Simple Interest (SI). Step-8: Stop.

## Flowchart
 ![image alt](https://github.com/charvisri04-creator/BANKING-INTEREST--cpp-project-2/blob/d813271ce8260236404f40b4543fd60721672f6b/WhatsApp%20Image%202026-04-18%20at%2012.18.14%20PM.jpeg)                                                                                                                                                                   
## 10. Conclusion
This program provides a simple, interactive way to calculate bank interest. It helps beginners understand menu-driven programming, arithmetic operations, and real-life application of programming concepts.                                                                                                                                                                    
                                                                                                                                                                    
