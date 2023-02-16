
<h1><b><center>0x09. C - Static libraries </center></b></h1>

Resources

<a href="https://www.youtube.com/watch?v=Mv9NEXX1VHc" > What Is A “C” Library? What Is It Good For?</a> 
<br><a href="https://www.youtube.com/watch?v=eW5he5uFBNM"> What is difference between Dynamic and Static library</a>


<b>Learning Objectives</b>
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>
What is a static library, how does it work, how to create one, and how to use it
Basic usage of ar, ranlib, nm

<b>Requirements</b>
C
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
Don’t forget to push your header file

0. A library is not a luxury but one of the necessities of life

Create the static library libmy.a containing all the functions listed below:

int _putchar(char c);
<br>int _islower(int c);
<br>int _isalpha(int c);
<br>int _abs(int n);
<br>int _isupper(int c);
<br>int _isdigit(int c);
<br>int _strlen(char *s);
<br>void _puts(char *s);
<br>char *_strcpy(char *dest, char *src);
<br>int _atoi(char *s);
<br>char *_strcat(char *dest, char *src);
<br>char *_strncat(char *dest, char *src, int n);
<br>char *_strncpy(char *dest, char *src, int n);
<br>int _strcmp(char *s1, char *s2);
<br>char *_memset(char *s, char b, unsigned int n);
<br>char *_memcpy(char *dest, char *src, unsigned int n);
<br>char *_strchr(char *s, char c);
<br>unsigned int _strspn(char *s, char *accept);
<br>char *_strpbrk(char *s, char *accept);
<br>char *_strstr(char *haystack, char *needle);

If you haven’t coded all of the above functions create empty ones with the right prototype.
Don’t forget to push your main.h file to your repository. It should at least contain all the prototypes of the above functions.

Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x09-static_libraries
File: libmy.a, main.h

1. Without libraries what have we? We have no past and no future

Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: 0x09-static_libraries
File: create_static_lib.sh
