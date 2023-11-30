# Chapter 02 

## 2.4 Memory Concepts

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

- Every variable has a **name**, a **type**, a **value** and a **memory location**.
- When a value is placed in a memory location, it replaces the location’s previous value, which is lost. So this process is said to be **destructive**.
- Reading a value from a memory location is **nondestructive**.