/********************************************************************************************/
/* 2.18 (Comparing Integers) Write a program that reads two integers from the user          */
/* then displays the larger number followed by the words “is larger.” If the numbers        */
/* are equal, display the message “These numbers are equal.” Use only the single-selection  */
/* form of the if statement you learned in this chapter.                                    */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/12/2024  Friday                                                              */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{
    int num1 = 0 ; 
    int num2 = 0 ;
    puts("Enter two integer");

    scanf("%d%d",&num1, &num2);

    if (num1 > num2)
    {
        printf("%d is larger.", num1);
    }

    if (num1 < num2)
    {
        printf("%d is larger.", num2);
    }

    if (num1 == num2)
    {
        puts("These numbers are equal.");
    }

}