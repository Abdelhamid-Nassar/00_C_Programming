/********************************************************/
//Date      : 26/10/2023
//Auther    : Abdelhamid Nassar
// Q2.28    : Target heart Rate Calculator
/*******************************************************/
#include <stdio.h>

int main()
{

int Age;
float Max_Rate;
float Min_Rate;
puts("Enter Your Age : ");
scanf("%d",&Age);

Max_Rate=(220.0-Age)*0.85;
Min_Rate=(220.0-Age)*0.5;

printf("Maximum Heart-Rate = %.2f\n",Max_Rate);
printf("The Range of Heart-Rate is\n");
printf("Max                              Min\n");
printf("%.2f---------------------------%.2f\n",Max_Rate,Min_Rate);
}