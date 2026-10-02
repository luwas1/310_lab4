# 310_lab4
# CMPE 310 Lab 4

This program reads integers from a data file using C and stores them in an array.

The C program passes the array address and the number of integers to an assembly function. The assembly function adds all of the integers and returns the sum.

## Files

- main.c - reads the data file and calls the assembly function
- sum.s - assembly function that sums the integers
- data.txt - input data file

## Compile

gcc -c sum.s -o sum.o
gcc main.c sum.o -o lab4

## Run

./lab4 data.txt

## Output

Sum: 5559
