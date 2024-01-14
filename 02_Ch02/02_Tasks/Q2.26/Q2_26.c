/********************************************************************************************/
/* 2.26 (Separating Digits in an Integer) Write a program that inputs one five-digit        */
/* number, separates the number into its individual digits and displays the digits separated*/
/* from one another by three spaces each. [Hint: Use combinations of integer division       */
/* and the remainder operation.] For example, if the user types in 42139, the               */
/* program should display : like Photo "Q2_26.PNG"                                          */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/14/2024  Sunday                                                              */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{
  int num = 0 ;
  int mod = 0 ;
  int div = 0 ;

  puts("Enter five digit integer :");
  scanf("%d", &num);

  div = num/10000;
  mod = div % 10;
  printf("%d  ", mod);

  div = num/1000;
  mod = div % 10;
  printf("%d  ", mod);

  div = num/100;
  mod = div % 10;
  printf("%d  ", mod);

  div = num/10;
  mod = div % 10;
  printf("%d  ", mod);

  div = num/1;
  mod = div % 10;
  printf("%d  ", mod);

}
