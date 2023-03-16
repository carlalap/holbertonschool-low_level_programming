
<h1><b>0x13. C - Singly linked lists</b></h1>


<b>Resources</b>

Read or watch:

<a href="https://www.youtube.com/watch?v=udapt4FGY20&feature=youtu.be&t=2m10s">Linked Lists </a>

man or help:

stdarg

<b>Learning Objectives</b>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>

<br>When and why using linked lists vs arrays
<br>How to build and use linked lists

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
<br>You are allowed to use _putchar
<br>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
<br>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<br>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
<br>Don’t forget to push your header file
<br>All your header files should be include guarded


<b>Tasks</b>

0. Print list 

Write a function that prints all the elements of a list_t list. Prototype: size_t print_list(const list_t *h); Return: the number of nodes Format: see example If str is NULL, print [0] (nil) You are allowed to use printf

1. List length 

Write a function that returns the number of elements in a linked list_t list. Prototype: size_t list_len(const list_t *h);

2. Add node 

Write a function that adds a new node at the beginning of a list_t list. Prototype: list_t *add_node(list_t **head, const char *str); Return: the address of the new element, or NULL if it failed str needs to be duplicated You are allowed to use strdup

3. Add node at the end 

Write a function that adds a new node at the end of a list_t list. Prototype: list_t *add_node_end(list_t **head, const char *str); Return: the address of the new element, or NULL if it failed str needs to be duplicated You are allowed to use strdup

4. Free list

Write a function that free a list_t list. Prototype: void free_list(list_t *head);
