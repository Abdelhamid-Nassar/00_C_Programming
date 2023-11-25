# Chapter 02 

## 2.2 Another Simple C Program: Adding Two Integers

```
// fig 02_04.c
// Addition Program. 
#include <stdio.h>

// function main begins porgram execution

int main(void)
{
    int integer1=0; // will hold first number user enters
    int integer2=0; // will hold second number user enters
    
    printf("Enter first integer: "); // prompt
    scanf("%d",&integer1); //read an integer
    
    printf("Enter second integer: "); // prompt
    scanf("%d",&integer2); //read an integer

    int sum =0 ; // variablein which sum will be stored
    sum = integer1 + integer2; // assign total to sum

    printf("Sum is %d\n",sum); //print sum
} // end function main

```
### Variables and Variable Definitions
 Lines 7 and 8 

  `int integer1=0; // will hold first number user enters`
  `int integer2=0; // will hold second number user enters`

 + are **definitions**. The names integer1 and integer2 are variables—locations in memory where the program can store values for later use. These definitions specify that integer1 and integer2 have type **int**.

 + Lines 7 and 8 initialize each variable to 0 by following the variable’s name with an = and a value.

### Define Variables Before They Are Used
 + All variables must be defined with a name and a type before they can be used in a program.

### Identifiers and Case Sensitivity

>[!TIP]
>as in totalCommissions. The latter style is called **camel casing** because the pattern of uppercase and lowercase letters resembles a camel’s silhouette. We prefer camel casing.

### The scanf Function and Formatted Inputs
Line 11

`scanf("%d", &integer1); // read an integer`

 + This scanf has two arguments "%d" and &integer1.
     - The **"%d"** is the **format control string**. It indicates the type of data the user should enter. The **%d conversion specification** specifies that the data should be an integer
        -The **d** stands for “decimal integer”.
        - A **%** character begins each conversion specification.
 + The & is the **address operator** and, when combined with the variable name, tells scanf the location (or address) in memory of the variable integer1. scanf then stores the value the user enters at that memory location.

> [!CAUTION]
> Forgetting the ampersand (&) before a variable in a scanf statement typically results in an execution-time error. On many systems, this causes a **"segmentation fault"** or **"access violation"**.

### Assignment Statement
The **assignment statement** in line 17
`sum = integer1 + integer2; // assign total to sum`
calculates the total of variables integer1 and integer2, then assigns the result to variable
sum using the **assignment operator (=)**. The statement is read as, “sum gets the
value of the expression integer1 + integer2.” Most calculations are performed in
assignments.

### Printing with a Format Control String
The format control string **"Sum is %d\n"** in line 19
`printf("Sum is %d\n", sum); // print sum`
contains some literal characters to display ("Sum is ") and the conversion specification
%d, which is a placeholder for an integer. The sum is the value to insert in place of %d.
The conversion specification for an integer (%d) is the same in both printf and
scanf—this is true for most, but not all, C data types.

### Calculations in printf Statements
Actually, we do not need the variable sum, because we can perform the calculation in the printf statement. So lines 16–19 can be replaced with
`printf("Sum is %d\n", integer1 + integer2);`
