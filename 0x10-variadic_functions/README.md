
<h1><b><center>0x11. C - Variadic functions</center></b></h1>


<b>Resources</b>

Read or watch:

<a href="https://en.wikipedia.org/wiki/Stdarg.h" >/a>stdarg.h</a>
<br><a href="https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html" >Variadic Functions</a>
<br><a href="https://en.wikipedia.org/wiki/Stdarg.h">Const Keyword</a>


man or help:

stdarg

<b>Learning Objectives</b>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>

<br>What are variadic functions
<br>How to use va_start, va_arg and va_end macros
<br>Why and how to use the const type qualifier


<b>Requirements</b>

General

<br>Allowed editors: vi, vim, emacs
<br>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>All your files should end with a new line
<br>A README.md file, at the root of the folder of the project is mandatory
<br>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>You are not allowed to use global variables
<br>No more than 5 functions per file
<br>The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
<br>You are allowed to use the following macros: va_start, va_arg and va_end
<br>You are allowed to use _putchar
<br>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
<br>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<br>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called variadic_functions.h
<br>Don’t forget to push your header file
<br>All your header files should be include guarded


<b>Tasks</b>

0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.
<br>Prototype: int sum_them_all(const unsigned int n, ...);
<br>If n == 0, return 0

1. To be is to be the value of a variable

<br>Write a function that prints numbers, followed by a new line.

<br>Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
<br>where separator is the string to be printed between numbers
<br>and n is the number of integers passed to the function
<br>You are allowed to use printf
<br>If separator is NULL, don’t print it
<br>Print a new line at the end of your function


2. One woman's constant is another woman's variable

<br>Write a function that prints strings, followed by a new line.

<br>Prototype: void print_strings(const char *separator, const unsigned int n, ...);
<br>where separator is the string to be printed between the strings
<br>and n is the number of strings passed to the function
<br>You are allowed to use printf
<br>If separator is NULL, don’t print it
<br>If one of the string is NULL, print (nil) instead
<br>Print a new line at the end of your function

3. To be is a to be the value of a variable

<br>Write a function that prints anything.

<br>Prototype: void print_all(const char * const format, ...);
<br>where format is a list of types of arguments passed to the function
<br>*c: char
<br>*i: integer
<br>*f: float
<br>*s: char * (if the string is NULL, print (nil) instead
<br>any other char should be ignored
<br>see example
<br>You are not allowed to use for, goto, ternary operator, else, do ... while
<br>You can use a maximum of
<br>*2 while loops
<br>*2 if
<br>You can declare a maximum of 9 variables
<br>You are allowed to use printf
<br>Print a new line at the end of your function
