# Chapter 02

## 2.4 Memory Concepts

 + Every variable has a **name**, a **type**, a **value** and a **memory location**.
 + When a value is placed in a memory location, it replaces the location’s previous value, which is lost. So this process is said to be **destructive**.
 + Reading a value from a memory location is **nondestructive**.

## 2.5 Arithmaetic in C

   Most C programs perform calculations using the following **arithmatic operators**
   |C Operation|Arithmatic Operation|Alegebraic Expression|C Expression|
   |:--------------:|:--------------:|:--------------:|:--------------:|
   |Addition| + |f+7|f+7|
   |Subtraction| - |P-c |P-c|
   |Multiplication| * |bm|b*m|
   |Division| / |x/y or <img src="https://latex.codecogs.com/svg.image?{\color{Red}\frac{x}{y}}"/> <img src="https://latex.codecogs.com/svg.image?\frac{x}{y}"/>|x/y|
   |Remainder| % |r mod s|r % s|
 
   > [!WARNING]
   > In algebra, to multiply a times b, we place these single-letter variable namesside-by-side, as in ab. In C, ab would be interpreted as a single, two-letter name (or identifier).
   > [!NOTE]
   >  Most programming languages denote multiplication by using the * operator, as in a * b.

### Integer Division and the Remainder Operator
   > [!CAUTION]
   > - An attempt to **_divide by zero_** usually is undefined on computer systems. Generally, it results in a fatal error that causes the program to terminate immediately without having successfully performed its job.
   > - Nonfatal errors allow programs to run to completion, often producing incorrect results.

### Parentheses for Grouping Subexpressions
   Parentheses are used in C expressions in the same manner as in algebraic expressions.
   For example, to multiply a times the quantity b + c, we write a * (b + c).

   **Parentheses** group terms in C expressions in much the same manner as in algebraic expressions.

### Rules of Operator Precedence
   C applies the operators in arithmetic expressions in a precise sequence determined by the following **rules of operator precedence**, which are generally the same as those in algebra:
   1. Expressions grouped in parentheses evaluate first. Parentheses are said to be at the “highest level of precedence.” In **_nested parentheses_**, such as **((a + b) + c)** the operators in the innermost pair of parentheses are applied first.
   
   2. *, / and % are applied next. If an expression contains several *, / and % operators, evaluation proceeds left-to-right. These three operators are said to be on the same level of precedence.
   
   3. + and - are evaluated next. If an expression contains + and - operators, evaluation proceeds left-to-right. These two operators have the same level of precedence, which is lower than that of *, / and %.
   
   4. The assignment operator (=) is evaluated last.

### Sample Algebraic and C Expressions

   **Example #1 :**
    
    Algebraic : 

    C :     m = (a + b + c + d + e) / 5 ;
   
   **Example #2 :**
    
    Algebraic :

    C: y = m * x + b;

   **Example #2 :**
    
    Algebraic :

    C: z = p * r % q + w / x - y;

### Parentheses “on the Same Level”


### Using Parentheses for Clarity
   As in algebra, it’s acceptable to use redundant parentheses to make an expression
   clearer. So, the preceding statement could be parenthesized as follows:
   **y = (a * x * x) + (b * x) + c;**

