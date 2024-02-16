# Chapter 02

## 2.7 Secure C Programming

   **SEI CERT C Coding Standard** guidelines will be followed to help  avoid programming practices that open systems to attacks.

### Avoid Single-Argument printfs

   There are a couple of preventative measures you can take to prevent  such an attack. 
   
   1. If you need to display a string that terminates with a newline, rather than printf, use the puts function, which displays its string argument followed by a newline. 
   For example:
   **printf("Welcome to C!\n");**
   should be written as 
   **puts("Welcome to C!");**

   2. To display a string without a terminating newline character, use printf with two arguments—a "%s" format control string and the string to display. The %s conversion specification is a placeholder for a string. For example, in Fig. 2.2, line 7
   **printf("Welcome ");**
   should be written as
   **printf("%s", "Welcome ");** 
   As with puts, if printf’s second argument contains a conversion specification, it will be displayed as its individual characters. As written, this chapter’s printfs