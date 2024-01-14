/********************************************************************************************/
/* 2.23 (Multiples) Write a program that reads two integers and determines and displays     */
/* whether the first is a multiple of the second. Use the remainder operator.               */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/13/2024  Saturday                                                            */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{
  int num1;
  int num2;

  puts("Enter two integers :");
  scanf("%d%d", &num1 , &num2);

  if ( (num1 % num2) == 0 )
  {
    printf("%d is a multiple of the %d", num1 , num2);
  }

  if ( (num1 % num2) != 0 )
  {
    printf("%d is NOT a multiple of the %d", num1 , num2);
  }

}
