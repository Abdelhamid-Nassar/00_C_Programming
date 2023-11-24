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
    
   1. " // text     "  one line of comment.
   1. " /* text  */ "  multi-line comments ------> Not recomended to avoid programming errors that occur with  /**/, such as accidentally omitting closing.

### #include Preprocessor Directive
   **C Preprocessor Directive** The Preprocessor handless line Beginning with # befor compilation.

   Line 3 tells the preprocessor to include the contents of **Standerd input/output header(<stdio.h>)**. 

### Blank Lines and White Space
   we use Blank Lines, Space Characters and Tab Characters to make Programs Easier to Read *Generally ignored by the compiler*.


### The **main** Function
`int main(void){` 
   + the line above is a part of every C program.
   + the Parentheses after _main_ inedicate that _main_ is a program building block called a _**Function**_.
   
   > [!TIP]
   > As a good practice, precode every function by comment (as in line 5) stating the function purpose.
   
   + _int_ to the left of _main_ indicates the _main_ "returns" an integer value.
   + the _void_ in parentheses here means that _main_ does not receive any information.
   + A left brace "{" begins each function's __Body__.
   + A right brace "}" ends each function's __Body__.
   >[!Note]
   > + When a program reaches _main's_closing right brace, the program terminates.
   > + The brace and the portion of the program between them form a _Block_.
   