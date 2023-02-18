
<h1><b><Center>0x0C. C - malloc, free</Center></b></h1>

Resources

<a href="https://www.youtube.com/watch?v=xDVC3wKjS64" > Dynamic memory allocation in C - malloc calloc realloc free</a> 


<b>Learning Objectives</b>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>
What is the difference between automatic and dynamic allocation
<br>What is malloc and free and how to use them
<br>Why and when use malloc
<br>How to use valgrind to check for memory leak

<b>Tasks</b>

0. Float like a butterfly, sting like a bee

<br>Write a function that creates an array of chars, and initializes it with a specific char.
<br>Prototype: char *create_array(unsigned int size, char c);
<br>Returns NULL if size = 0
<br>Returns a pointer to the array, or NULL if it fails

1. The woman who has no imagination has no wings

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

<br>Prototype: char *_strdup(char *str);
<br>The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
<br>Returns NULL if str = NULL
<br>On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available
<br>FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

2. He who is not courageous enough to take risks will accomplish nothing in life

Write a function that concatenates two strings.

<br>Prototype: char *str_concat(char *s1, char *s2);
<br>The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
<br>if NULL is passed, treat it as an empty string
<br>The function should return NULL on failure

3. If you even dream of beating me you'd better wake up and apologize

Write a function that returns a pointer to a 2 dimensional array of integers.

<br>Prototype: int **alloc_grid(int width, int height);
<br>Each element of the grid should be initialized to 0
<br>The function should return NULL on failure
<br>If width or height is 0 or negative, return NULL

4. It's not bragging if you can back it up

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

<br>Prototype: void free_grid(int **grid, int height);
<br>Note that we will compile with your alloc_grid.c file. Make sure it compiles.
