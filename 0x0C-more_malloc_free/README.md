
<h1><b><center> 0x0E. C - More malloc, free</b></h1>

Resources

<a href="https://stackoverflow.com/questions/605845/do-i-cast-the-result-of-malloc"> Do i cast the result of malloc?</a> 

<b>man or help</b>

* exit (3)
* calloc
* realloc


<b>Learning Objectives</b>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>
 
How to use the exit function
<br>What are the functions calloc and realloc from the standard library and how to use them


<b>Requirements</b>

<br>General

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file


Tasks

<br>0. Trust no one

<br>Write a function that allocates memory using malloc.
<br>Prototype: void *malloc_checked(unsigned int b);
<br>Returns a pointer to the allocated memory.
<br>if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98

<br>1. string_nconcat

<br>Write a function that concatenates two strings.
<br>Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
<br>The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
<br>If the function fails, it should return NULL
<br>If n is greater or equal to the length of s2 then use the entire string s2
<br>if NULL is passed, treat it as an empty string

<br>2. _calloc

<br>Write a function that allocates memory for an array, using malloc.

<br>Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
<br>The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
<br>The memory is set to zero
<br>If nmemb or size is 0, then _calloc returns NULL
<br>If malloc fails, then _calloc returns NULL
<br>FYI: The standard library provides a different function: calloc. Run man calloc to learn more.

<br>3. array_range

<br>Write a function that creates an array of integers.

<br>Prototype: int *array_range(int min, int max);
<br>The array created should contain all the values from min (included) to max (included), ordered from min to max
<br>Return: the pointer to the newly created array
<br>If min > max, return NULL
<br>If malloc fails, return NULL


