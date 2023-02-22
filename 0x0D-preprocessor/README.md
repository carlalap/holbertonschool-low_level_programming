
<h1><b><center>0x0D. C - Preprocessor </center></b></h1>

Resources

<a href="https://www.youtube.com/watch?v=VDslRumKvRA" > Understanding C program Compilation Process</a> 
<br><a href="http://crasseux.com/books/ctutorial/argc-and-argv.html"> Object-like Macros</a>
<br><a href="https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments"> Macro Arguments</a>
<br><a href="https://www.youtube.com/watch?v=X6HiYbY3Uak"> Pre Processor Directives in C</a>
<br><a href="https://www.cprogramming.com/tutorial/cpreprocessor.html"> The C Preprocessor</a>
<br><a href="https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros"> Standard Predefined Macros</a>
<a href="https://en.wikipedia.org/wiki/Include_guard">include guard</a>
<a href="https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros">Common Predefined Macros</a>






<b>Learning Objectives</b>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>
What are macros and how to use them
<br>What are the most common predefined macros
<br>How to include guard your header files



<b>Requirements</b>

<br>General

<br>Allowed editors: vi, vim, emacs
<br>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>All your files should end with a new line
<br>A README.md file, at the root of the folder of the project is mandatory
<br>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>You are not allowed to use global variables
<br>No more than 5 functions per file
<br>The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
<br>You are allowed to use _putchar
<br>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
<br>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<br>Don’t forget to push your header file
<br>All your header files should be include guarded





Tasks

<br>0. Object-like Macro
<br>Create a header file that defines a macro named SIZE as an abbreviation for the token 1024.

<br>1. Pi
<br>Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359.

<br>2. File name
<br>Write a program that prints the name of the file it was compiled from, followed by a new line.
<br>You are allowed to use the standard library

<br>3. Function-like macro
<br>Write a function-like macro ABS(x) that computes the absolute value of a number x

<br>4. SUM
<br>Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y.
