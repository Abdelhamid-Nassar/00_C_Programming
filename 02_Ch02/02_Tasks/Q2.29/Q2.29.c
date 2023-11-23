/********************************************************/
//Date      : 26/10/2023
//Auther    : Abdelhamid Nassar
// Q2.29    : Target heart Rate Calculator
/*******************************************************/
#include <stdio.h>

int main()
{
    int a=0;
    int b=0;
    int c=0;
    printf ("Enter Three Numbers");

    scanf("%d%d%d",&a,&b,&c);

    if (a<b)
    {
        if (a<c)
        {
         printf("%d\t",a);

         if (b<c)
         {
            printf("%d\t",b);
            printf("%d\t",c);
         }  
         if (b>c)
         {
            printf("%d\t",c);
            printf("%d\t",b);
         }  
        }

        if (a>c)
        {
         if (b<c)
         {
            printf("%d\t",a);
            printf("%d\t",b);
            printf("%d\t",c);
         }  
         if (b>c)
         {
            printf("%d\t",c);
            printf("%d\t",a);
            printf("%d\t",b);
         }    
        }
       
    }

 if (a>b)
    {
        if (b<c)
        {
         printf("%d\t",b);

         if (a<c)
         {
            printf("%d\t",a);
            printf("%d\t",c);
         }  
         if (a>c)
         {
            printf("%d\t",c);
            printf("%d\t",a);
         }  
        }

        if (b>c)
        {
         if (a<c)
         {
            printf("%d\t",a);
            printf("%d\t",b);
            printf("%d\t",c);
         }  
         if (a>c)
         {
            printf("%d\t",c);
            printf("%d\t",b);
            printf("%d\t",a);
         }    
        }
       
    }
}