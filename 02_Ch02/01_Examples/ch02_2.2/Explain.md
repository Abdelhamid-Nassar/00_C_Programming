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
   **C Preprocessor Directive** The Preprocessor handless line Begins with # before compilation.

   Line 3 tells the preprocessor to include the contents of **Standard input/output header(<stdio.h>)**. 

### Blank Lines and White Space
   we use Blank Lines, Space Characters, and Tab Characters to make Programs Easier to Read *Generally ignored by the compiler*.

### The **main** Function
`int main(void){` 
   + The line above is a part of every C program.
   + the Parentheses after _main_ inedicate that _main_ is a program building block called a _**Function**_.
   
   > [!TIP]
   > As a good practice, precode every function by comment (as in line 5) stating the function's purpose.
   
   + _int_ to the left of _main_ indicates the _main_ "returns" an integer value.
   + the _void_ in parentheses here means that _main_ does not receive any information.
   + A left brace "{" begins each function's __Body__.
   + A right brace "}" ends each function's __Body__.
   >[!Note]
   > + When a program reaches _main's_closing right brace, the program terminates.
   > + The brace and the portion of the program between them form a _Block_.

### An Output Statment
   `printf("Welcome To C ! \n");`

   + It is mainly used to display on the screen the **String** of a character enclosed in quotation marks.
      - A **string** is sometimes called:
         - character string
         - message
         - literal 
   +
### Escape Sequences
   + In a string, the backslash (\) is an escape character. It indicates that printf should do something out of the ordinary. 
   + In a string, the compiler combines a backslash with the next character to form an escape sequence.

   
       |Escape Sequences|Description|
       |:--------------:|:-----------------------------------------------------------------------------------------------------:|
       |\n| Moves the cursor to the beginning of the next line.|
       |\t| Moves the cursor to the next horizontal tab stop. |
       |\a| Produces a sound or visible alert without changing the current cursor position.|
       |"&#92;""&#92;"| Because the backslash has a special meaning in a string, \\ is required to insert a backslash character in a string. |
       |\"| Because strings are enclosed in double quotes, \" is required to insert a double-quote character in a string.|


### The Linker and Executables


### Indentation Conventions
>[!TIP]
>Professional style guides often recommend using spaces rather than tabs
### Using Multiple printfs
```
1 // fig02_02.c
2 // Printing on one line with two printf statements.
3 #include <stdio.h>
4
5 // function main begins program execution
6 int main(void) {
7 printf("Welcome ");
8 printf("to C!\n");
9 } // end function main
```
### Displaying Multiple Lines with a Singel printf
```
1 // fig02_03.c
2 // Printing multiple lines with a single printf.
3 #include <stdio.h>
4
5 // function main begins program execution
6 int main(void) {
7 printf("Welcome\nto\nC!\n");
8 } // end function main
```