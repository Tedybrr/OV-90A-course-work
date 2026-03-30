# OV-90A-course-work
Course work for Applied Informatics.

# Matrix Modification Program

## Description
This program reads a square matrix of integers and modifies its elements based on a specific condition.

Each element of the matrix is checked, and if the sum of the element and a given number **M**:
- is an even number
- and lies within a given range **[K, L]**

then the element is set to **0**.

The program also counts how many elements were modified.

---

## Features
- Input validation for matrix elements (range: -1000 to 1000)
- Dynamic matrix size (n × n)
- Condition-based element modification
- Displays original and modified matrix
- Counts modified elements

---

## Technologies Used
- C programming language
- Standard library (`stdio.h`)
- Compiled with GCC
- Developed in CLion

---

## How to Run

1. Compile the program:

   gcc main.c -o matrix
   
3. Run the program:

  ./matrix

3. Follow the input instructions:

  Enter matrix size (n)
  Enter matrix elements
  Enter value M
  Enter range K and L

Example
Input:
n = 2
Matrix:
1 2
3 4
M = 1
Range: 2 6

Output:
Modified matrix:
0 2
0 4

Program Logic:
For each element a[i][j]:
Compute sum = a[i][j] + M
Check:
sum is even (sum % 2 == 0)
sum is within range [K, L]
If true - set element to 0



  
