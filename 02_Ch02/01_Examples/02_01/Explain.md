# Chapter 02 

## 2.2 A Simple C Program: Printing a Line of Text
   ```
// fig 02_01.c
// A first Program in C

#include <stdio.h>

//function main begins program execution
   int main (void)
   {
    printf ("Welcome TO C!\n");
   }// end function main
   ```
### Comments
    
   1. " // text     "  one line of comment
   1. " /* text  */ "  multi-line comments ------> Not recomended to avoid programming errors that occur with  /**/, such as accidentally omitting closing

### #include Preprocessor Directive
   **C Preprocessor Directive** The Preprocessor handless line Beginning with # befor compilation.

   Line 3 tells the preprocessor to include the contents of **Standerd input/output header(<stdio.h>)** 

### Blank Lines and White Space
   we use Blank Lines, Space Characters and Tab Characters to make Programs Easier to Read *Generally ignored by the compiler*


### The **main** Function
