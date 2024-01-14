/********************************************************************************************/
/* 2.20 (Circle Area, Diameter and Circumference) For a circle of radius 2, display the     */
/* diameter, circumference and area. Use the value 3.14159 for π. Use the following formulas*/
/* (r is the radius): diameter = 2r, circumference = 2πr and area = πr^2. Perform each      */
/* of these calculations inside the printf statement(s) and use the conversion specification*/
/* %f. This chapter discussed only integer constants and variables. Chapter 3 will          */
/* discuss floating-point numbers—that is, values that can have decimal points.             */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/13/2024  Saturday                                                            */
/********************************************************************************************/

#include <stdio.h>

int main(void)
{
    int r = 2 ;
    float pi = 3.14159 ; 
    float area ;
    float circumference ;
    float diameter ;

    diameter = 2 * r;
    circumference = 2 * pi * r ;
    area = pi * r * r;

    printf("diameter       = %f\n", diameter);
    printf("circumference  = %f\n", circumference);
    printf("area           = %f\n", area);    
}
