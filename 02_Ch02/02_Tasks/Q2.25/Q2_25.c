/*********************************************************************************************/
/* 2.25 (Integer Value of a Character) Here’s a peek ahead. In this chapter, you learned     */
/* about integers and the type int. C can also represent uppercase letters, lowercase letters*/
/* letters and a considerable variety of special symbols. C uses small integers internally to*/
/* represent each different character. The set of characters a computer uses together with   */
/* the corresponding integer representations for those characters is called that computer’s  */
/* character set. You can display the integer equivalent of uppercase A, for example,        */
/* by executing the statement                                                                */
/* printf("%d", 'A');                                                                        */
/* Write a C program that displays the integer equivalents of some uppercase letters,        */
/* lowercase letters, digits and special symbols. At a minimum, determine the integer        */
/* equivalents of the following: A B C a b c 0 1 2 $ * + / and the space character.          */
/*                                                                                           */
/* Auther:   Abdelhamid Nassar                                                               */
/* Date:     1/14/2024  Sunday                                                               */
/*********************************************************************************************/

#include <stdio.h>

int main(void)
{

  printf("%d\n", 'A');
  printf("%d\n", 'B');
  printf("%d\n", 'C');
  printf("%d\n", 'a');
  printf("%d\n", 'b');
  printf("%d\n", 'c');
  printf("%d\n", '0');
  printf("%d\n", '1');
  printf("%d\n", '2');
  printf("%d\n", '$');
  printf("%d\n", '*');
  printf("%d\n", '+');
  printf("%d\n", '/');
  printf("%d\n", '\0');
  printf("%d\n", ' ');

}
