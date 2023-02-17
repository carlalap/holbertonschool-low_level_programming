
<h1><b><center>0x09. C - Static libraries </center></b></h1>

Resources

<a href="https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html" > Arguments to main</a> 
<br><a href="http://crasseux.com/books/ctutorial/argc-and-argv.html"> argc and argv </a>
<br><a href="https://www.youtube.com/watch?v=aP1ijjeZc24"> What does int argc, char* argv[] mean?</a>


<b>Learning Objectives</b>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>
How to use arguments passed to your program
<br>What are two prototypes of main that you know of, and in which case do you use one or the other
<br>How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters


<b>Requirements</b>

<br>General

<br>Allowed editors: vi, vim, emacs
<br>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>All your files should end with a new line
<br>A README.md file, at the root of the folder of the project is mandatory
<br>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>You are not allowed to use global variables
<br>No more than 5 functions per file
<br>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
<br>Don’t forget to push your header file
<br>You are allowed to use the standard library>

Tasks
<br>0. It ain't what they call you, it's what you answer to
<br>Write a program that prints its name, followed by a new line.

<br>If you rename the program, it will print the new name, without having to compile it again
<br>You should not remove the path before the name of the program


<br>1. Silence is argument carried out by other means
<br>Write a program that prints the number of arguments passed into it.
<br>Your program should print a number, followed by a new line

<br>2. The best argument against democracy is a five-minute conversation with the average voter
<br>Write a program that prints all arguments it receives.
<br>All arguments should be printed, including the first one
<br>Only print one argument per line, ending with a new line

<br>3. Neither irony nor sarcasm is argument
<br>Write a program that multiplies two numbers.

<br>Your program should print the result of the multiplication, followed by a new line
<br>You can assume that the two numbers and result of the multiplication can be stored in an integer
<br>If the program does not receive two arguments, your program should print Error, followed by a new line, and return 1

<br>4. To infinity and beyond
<br>Write a program that adds positive numbers.

<br>Print the result, followed by a new line
<br>If no number is passed to the program, print 0, followed by a new line
<br>If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
<br>You can assume that numbers and the addition of all the numbers can be stored in an int

