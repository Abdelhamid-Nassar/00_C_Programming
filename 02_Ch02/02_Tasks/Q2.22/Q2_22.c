/********************************************************************************************/
/* 2.22 (Odd or Even) Write a program that reads an integer and determines and displays     */
/* whether it’s odd or even. Use the remainder operator. An even number is a multiple       */
/* of two. Any multiple of two leaves a remainder of zero when divided by 2.                */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/13/2024  Saturday                                                            */
/********************************************************************************************/  

#include <stdio.h>

int main(void)
{
    int num;
    puts("Enter an integer :");
    scanf("%d", &num);

    if ( (num %2) == 0 )
    {
        puts("Its Even");
    }
    if ( (num %2) == 1 )
    {
       puts("Its Odd"); 
    }
}
