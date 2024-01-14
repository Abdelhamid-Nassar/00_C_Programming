/********************************************************************************************/
/* 2.19 (Arithmetic, Largest Value and Smallest Value) Write a program that inputs          */
/* three different integers from the keyboard, then displays the sum, the average, the      */
/* product, the smallest and the largest of these numbers. Use only the single-selection    */
/* form of the if statement you learned in this chapter. The screen dialogue should appear  */
/* as follows:  "Photo in the file: Q2.19"                                                  */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/13/2024  Saturday                                                            */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{
    int num1 = 0 ; 
    int num2 = 0 ;
    int num3 = 0 ;
    int sum = 0 ;
    int product = 0 ;
    int average = 0 ;

    printf("Enter three different integer:  ");
    scanf("%d%d%d", &num1, &num2, &num3);

    sum = num1 + num2 + num3 ;
    product = num1 * num2 * num3 ;
    average = sum / 3 ;
    
    printf("Sum is       %d\n", sum);
    printf("Product is   %d\n", product);
    printf("average is   %d\n", average);

    //For compearing smallest number

    if (num1 < num2 && num1 < num3)
    {
        printf("Smallest is  %d\n", num1); 
    }

    if (num2 < num1 && num2 < num3)
    {
        printf("Smallest is  %d\n", num2);
    }

    if (num3 < num2 && num3 < num1)
    {
        printf("Smallest is  %d\n", num3);
    }

    //For compearing Largest number

    if (num1 > num2 && num1 >num3)
    {
        printf("Largest is   %d\n", num1);
    }

    if (num2 > num1 && num2 >num3)
    {
        printf("Largest is   %d\n", num2);
    }

    if (num3 > num2 && num3 >num1)
    {
        printf("Largest is   %d\n", num3);
    }

    

}