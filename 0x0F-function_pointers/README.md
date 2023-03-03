
<h1><b><center> 0x10. C - Function pointers</center></b></h1>

PENDIENTE ACTUALIZAR

Resources

<a href="https://en.wikipedia.org/wiki/Struct_(C_programming_language)" >struct (C programming language)</a> 
<br><a href="https://github.com/hs-hq/Betty/wiki/Documentation:-Data-structures">Documentation: Data structures</a>
<br><a href="https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html">Typedef</a>
<br><a href="http://www.catb.org/esr/structure-packing/">The Lost Art of Structure Packing (advanced)</a>


<b>Learning Objectives</b>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>

What are structures, when, why and how to use them
<br>How to use typedef


<b>Requirements</b>

<br>General

<br>Allowed editors: vi, vim, emacs
<br>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>All your files should end with a new line
<br>A README.md file, at the root of the folder of the project is mandatory
<br>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>You are not allowed to use global variables
<br>No more than 5 functions per file
<br>The only C standard library functions allowed are printf, malloc, free and exit.
<br>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<br>Don’t forget to push your header file.
<br>All your header files should be include guarded.



<b>Tasks</b>

<br>0. Poppy

<br>Define a new type struct dog with the following elements:
<br>name, type = char *
<br>age, type = float
<br>owner, type = char *


<br>1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type struct dog
<br>Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

<br>2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints a struct dog
<br>Prototype: void print_dog(struct dog *d);
<br>Format: see example bellow
<br>You are allowed to use the standard library
<br>If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
<br>If d is NULL print nothing.

<br>3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read

Define a new type dog_t as a new name for the type struct dog.

<br>4. A door is what a dog is perpetually on the wrong side of

Write a function that creates a new dog.

<br>Prototype: dog_t *new_dog(char *name, float age, char *owner);
<br>You have to store a copy of name and owner
<br>Return NULL if the function fails
