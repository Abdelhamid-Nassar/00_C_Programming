/********************************************************************************************/
/* 2.16 (Arithmetic) Write a program that reads two integers from the user then displays    */
/* their sum, product, difference, quotient and remainder.                                  */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/12/2024  Friday                                                              */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{ 
    int num1 = 0 ; 
    int num2 = 0 ;
    int sum = 0 ;
    int product = 0 ;
    int difference = 0 ;
    int quotient = 0 ;
    int remainder = 0 ;

    puts("Enter two integer");

    scanf("%d%d",&num1, &num2);

    sum = num1 + num2 ;
    product = num1 * num2 ;
    difference = num1 - num2 ;
    quotient = num1 / num2 ;
    remainder = num1 % num2 ;

    printf("sum = %d\nproduct = %d\ndifference = %d\nquotient = %d\nreminder = %d\n", sum, product, difference, quotient, remainder);
}