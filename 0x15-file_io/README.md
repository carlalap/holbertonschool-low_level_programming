
<h1><b> 0x16. C - File I/O</b></h1>


<b>Resources</b>

Read or watch:

<a href="https://en.wikipedia.org/wiki/File_descriptor">File descriptors</a>
<a href="https://www.geeksforgeeks.org/c-file-io/">C – File I/O</a>

<b>man or help</b>

*open
*close
*read
*write
*dprintf


<b>Learning Objectives</b>

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

<b>General</b>

<br>*Look for the right source of information online
<br>*How to create, open, close, read and write files
<br>*What are file descriptors
<br>*What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
<br>*How to use the I/O system calls open, close, read and write
<br>*What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
<br>*What are file permissions, and how to set them when creating a file with the open system call
<br>*What is a system call
<br>*What is the difference between a function and a system call.

<b>Requirements</b>

<br>Allowed editors: vi, vim, emacs
<br>All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
<br>All your files should end with a new line
<br>A README.md file, at the root of the folder of the project is mandatory
<br>Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
<br>You are not allowed to use global variables
<br>No more than 5 functions per file
<br>The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
<br>Allowed syscalls: read, write, open, close
<br>You are allowed to use _putchar
<br>You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
<br>In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
<br>The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
<br>Don’t forget to push your header file
<br>All your header files should be include guarded
<br>Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

<b>Tasks</b>
                                                                 
<br>0. Tread lightly, she is near

<br>Write a function that reads a text file and prints it to the POSIX standard output.

<br>Prototype: ssize_t read_textfile(const char *filename, size_t letters);
<br>where letters is the number of letters it should read and print
<br>returns the actual number of letters it could read and print
<br>if the file can not be opened or read, return 0
<br>if filename is NULL return 0
<br>if write fails or does not write the expected amount of bytes, return 0

<br>1.Under the snow

<br>Create a function that creates a file.

<br>Prototype: int create_file(const char *filename, char *text_content);
<br>where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
<br>Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
<br>The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
<br>if the file already exists, truncate it
<br>if filename is NULL return -1
<br>if text_content is NULL create an empty file

<br>2. Speak gently, she can hear

<br>Write a function that appends text at the end of a file.

<br>Prototype: int append_text_to_file(const char *filename, char *text_content);
<br>where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
R<br>eturn: 1 on success and -1 on failure
<br>Do not create the file if it does not exist
<br>If filename is NULL return -1
<br>If text_content is NULL, do not add anything to the file. Return 1 if the file exists and -1 
<br>if the file does not exist or if you do not have the required permissions to write the file.


<br>3. cp

<br>Write a program that copies the content of a file to another file.

<br>Usage: cp file_from file_to
<br>if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
<br>if file_to already exists, truncate it
<br>if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
<br>where NAME_OF_THE_FILE is the first argument passed to your program
<br>if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
<br>  where NAME_OF_THE_FILE is the second argument passed to your program
<br>if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
where FD_VALUE is the value of the file descriptor
<br>Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
<br>You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
<br>You are allowed to use dprintf
