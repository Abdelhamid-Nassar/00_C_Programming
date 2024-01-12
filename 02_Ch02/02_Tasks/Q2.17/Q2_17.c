/********************************************************************************************/
/* 2.17 (Displaying Values with printf) Write a program that displays the numbers 1         */
/* to 4 on the same line. Write the program using the following methods.                    */
/*  a) Using one printf statement with no conversion specifications.                        */
/*  b) Using one printf statement with four conversion specifications.                      */
/*  c) Using four printf statements.                                                        */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/12/2024  Friday                                                              */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{
    //a) Using one printf statement with no conversion specifications.

    puts("1\t2\t3\t4");

    //b) Using one printf statement with four conversion specifications.

    int a=1;
    int b=2;
    int c=3;
    int d=4; 
    printf("%d\t%d\t%d\t%d\n", a, b, c, d);

    //c) Using four printf statements.

    printf("%d\t", a);
    printf("%d\t", b);
    printf("%d\t", c);
    printf("%d\n", d);

}