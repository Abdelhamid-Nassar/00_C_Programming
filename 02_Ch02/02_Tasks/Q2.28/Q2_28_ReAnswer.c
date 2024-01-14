/********************************************************************************************/
/* 2.28 (Target Heart-Rate Calculator) While exercising, you can use a heart-rate           */
/* monitor to see that your heart rate stays within a safe range suggested by your doctors  */
/* and trainers. According to the American Heart Association (AHA)                          */
/*(http://bit.ly/AHATargetHeartRates), the formula for calculating                          */
/* your maximum heart rate in beats                                                         */
/* per minute is 220 minus your age in years. Your target heart rate is 50–85% of your      */
/* maximum heart rate. Write a program that prompts for and inputs the user’s age and       */
/* calculates and displays the user’s maximum heart rate and the range of the user’s target */
/* heart rate. [These formulas are estimates provided by the AHA; maximum and               */
/* target heart rates may vary based on the health, fitness and gender of the individual.   */
/* Always consult a physician or qualified healthcare professional before beginning or      */
/* modifying an exercise program.]                                                          */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/14/2024  Sunday                                                              */
/********************************************************************************************/

//Max Heart Rate Equation ------>  MHR = 220 - Age

// Target Heart Rate Formula (Basic) ------>   THR = MHR * %Intensity

#include <stdio.h>

int main(void)
{
  int age = 0 ;
  int MHR = 0 ;
  float Min_THR = 0.0 ;
  float Max_THR = 0.0 ;

  puts("Enter your Age: ");
  scanf("%d", &age);

  MHR = 220 - age ;
  Min_THR = MHR * (0.5);
  Max_THR = MHR * (0.85);

  printf("Max Heart Rate = %d\n", MHR);
  printf("target heart rate\n");
  printf("Min THR---------------------Max THR\n");
  printf("%.2f ---------------------- %.2f", Min_THR, Max_THR);

}
