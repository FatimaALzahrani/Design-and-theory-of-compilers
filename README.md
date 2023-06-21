# Design and theory of compilers
My Labs in Design and theory of compilers course

## Table Of content
   * [Table Of Labs](#Table_Of_Labs)
   * [Symbol Table "Lab1"](#Symbol_Table)
   * [Lexical Analyzer Using Lex Tool "Lab2"](#Lexical_Analyzer_Using_Lex_Tool)
   * [Enerate YACC Specification For A Few Syntactic Categories "Lab3"](#Enerate_YACC_Specification_For_A_Few_Syntactic_Categories)
   * [Type Checking "Lab5"](#Type_Checking)
   * [Control Flow Analyisis and Data Flow "Lab6"](#Control_Flow_Analyisis_and_Data_Flow)
 
<hr>

## Table_Of_Labs
|Lab Number | Title | Link of Code|
|:------:|:------:|:------:|
| 1 | [Symbol Table](#Symbol_Table) |[Lab1](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/blob/main/Lab1.cpp)|
|2| [Lexical Analyzer Using Lex Tool](#Lexical_Analyzer_Using_Lex_Tool) |[Lab2](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/blob/main/Lab2.c)|
|3| [Enerate YACC Specification For A Few Syntactic Categories](#Enerate_YACC_Specification_For_A_Few_Syntactic_Categories)|[Lab3](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/blob/main/Lab3.cpp)|
|4|  | [Lab4](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/blob/main/Lab4.cpp)|
|5|[Type Checking](#Type_Checking) |[Lab5](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/blob/main/Lab5.cpp)|
|6|[Control Flow Analyisis and Data Flow](#Control_Flow_Analyisis_and_Data_Flow)|[Lab6](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/blob/main/Lab6.cpp)|

<hr>

## Symbol_Table
A Symbol table is a data structure used by a language translator such as a compiler or interpreter, where each identifier in a program’s source code is associated with information relating to its declaration or appearance in the source Possible entries in a symbol table: 
· Name : a string 
· Attribute: 
  1. Reserved word 
  2. Variable name 
  3. Type Name 
  4. Procedure name 
  5. Constant name 
· Data type 
· Scope information: where it can be used. 
· Storage allocation 
#<img width="960" alt="2023-06-21" src="https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/assets/107775566/f9b4a7ad-ad62-4f9d-91b6-22bf17e7c2d2">

***ALGORITHM :*** 
1. Start the Program. 
2. Get the input from the user with the terminating symbol ‘$’.
3. Allocate memory for the variable by dynamic memory allocation function. 
4. If the next character of the symbol is an operator then only the memory is allocated. 
5. While reading , the input symbol is inserted into symbol table along with its memory 
address. 
6. The steps are repeated till”$”is reached. 
7. To reach a variable, enter the variable to the searched and symbol table has been checked 
for corresponding variable, the variable along its address is displayed as result. 
8. Stop the program.

***OutPut :*** 
![‏‏لقطة الشاشة (8)](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/assets/107775566/94441dbf-7702-4af6-b061-428a7a0d960c)

<hr>

# Lexical_Analyzer_Using_Lex_Tool
***THEORY:***
A language for specifying lexical analyzer.
There is a wide range of tools for construction of lexical analyzer. 
The majority of these tools are based on regular expressions.
The one of the traditional tools of that kind is lex.

***LEX:***
The lex is used in the manner depicted. A specification of the lexical analyzer is preferred by creating a program lex.1 in the lex language.
Then lex.1 is run through the lex compiler lex.yy.c.
The program lex.yy.c consists of a tabular representation of a transition diagram constructed from the regular expression of lex.1 together with a standard routine that uses table of recognize leximes.
the lexical analyzer that transform as input stream into sequence of tokens

***ALGORITHM:***
1. Start the program
2. Lex program consists of three parts.
3. Declaration %%
4. Translation rules %%
5. Auxiliary procedure.
6. The declaration section includes declaration of variables, main test, constants and regular
7. Definitions.
8. Translation rule of lex program are statements of the form
9. P1{action}
10. P2{action} 
11. .....
12. .....
13. Pn{action}
14. Write program in the vi editor and save it with .1 extension.
15. Compile the lex program with lex compiler to produce output file as lex.yy.c.
16. Eg. $ lex filename.1
17. $gcc lex.yy.c-11
18. Compile that file with C compiler and verify the output.

***OutPut :*** 
![‏‏لقطة الشاشة (9)](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/assets/107775566/e78aa61f-5635-436a-b5cd-7064ae985fc1)

<hr>

## Enerate_YACC_Specification_For_A_Few_Syntactic_Categories
YACC (yet another compiler) is a program designed to produce designed to compile a LALR (1) grammar and to produce the source code of the synthetically analyses of the language produced by the grammar.

***ALGORITHM :***
1. Start the program.
2. Write the code for parser. l in the declaration port.
3. parser.
4. Also write the code for different arithmetical operations.
5. Write additional code to print the result of computation.
6. Execute and verify it.
7. Stop the program.
   
***OutPut :*** 
![‏‏لقطة الشاشة (10)](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/assets/107775566/836495de-6472-4632-aa9e-6727d742d6db)

<hr>

## Type_Checking
A C Programm to implement type checking

***OutPut :*** 
![‏‏لقطة الشاشة (11)](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/assets/107775566/a29b1485-513f-48c3-9d53-8e02dffecf77)

<hr>

## Control_Flow_Analyisis_and_Data_Flow
A C Programm to implement Control Flow Analyisis and Data Flow 

***OutPut :*** 
![‏‏لقطة الشاشة (12)](https://github.com/FatimaALzahrani/Design-and-theory-of-compilers/assets/107775566/bf7d9180-1334-466f-b7ca-28deb91db7a1)
