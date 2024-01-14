/********************************************************************************************/
/* 2.29 (Sort in Ascending Order) Write a program that inputs three different numbers       */
/* from the user. Display the numbers in increasing order. Recall that an if statement’s    */
/* body can contain more than one statement. Prove that your script works by running        */
/* it on all six possible orderings of the numbers. Does your script work with duplicate    */
/* numbers? [This is challenging. In later chapters you’ll do this more conveniently and    */
/* with many more numbers.]                                                                 */
/*                                                                                          */
/* Auther:   Abdelhamid Nassar                                                              */
/* Date:     1/14/2024  Sunday                                                              */
/********************************************************************************************/
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