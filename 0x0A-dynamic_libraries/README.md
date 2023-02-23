
<h1><b><center>0x0A. C - Dynamic libraries </center></b></h1>

Resources

<a href="https://www.youtube.com/watch?v=eW5he5uFBNM">What is difference between Dynamic and Static library </a> 
<br><a href="https://students-support.hbtn.io/hc/en-us/articles/360023750254"> Technical Writing</a>



<b>Learning Objectives</b>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b> 
<br>What is a dynamic library, how does it work, how to create one, and how to use it
<br>What is the environment variable $LD_LIBRARY_PATH and how to use it
<br>What are the differences between static and shared libraries
<br>Basic usage nm, ldd, ldconfig



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


More Info
<br>Manual QA Review
<br>It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member


Tasks
<br>0. A library is not a luxury but one of the necessities of life
<br>Create the dynamic library libdynamic.so containing all the functions listed below:

<br>1. Without libraries what have we? We have no past and no future
<br>Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

<br>2. Either write something worth reading or do something worth writing
<br>Write a blog post describing the differences between static and dynamic libraries.

<br>Blog General Requirements:

<br>Title makes sense
<br>At least one picture at the top of the blog
<br>Blog is published on Medium or LinkedIn
<br>Blog is shared on LinkedIn
<br>Blog Content Requirements:

<br>Why and when libraries should be used
<br>How to create a static library (in Linux)
<br>How to use a static library to create a program (in Linux)
<br>How to create a dynamic library (in Linux)
<br>How to use a dynamic library to create a program (in Linux)
<br>What are the differences between static and shared libraries
<br>What is the environmental variable $LD_LIBRARY_PATH and how do you use it
<br>Mentions the following
<br>gcc and it’s options -L and -l
<br>nm
<br>ldd
<br>ldconfig
<br>ar
<br>ranlib
<br>When done, please add all urls below (blog post, LinkedIn post, etc.)

<br>Please, remember that these blogs must be written in English to further your technical ability in a variety of settings

