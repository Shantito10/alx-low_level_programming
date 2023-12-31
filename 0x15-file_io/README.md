0x15. C - File I/O

#Resources
Read or watch:
* File descriptors
* C Programming in Linux Tutorial #024 - open() read() write() Functions
man or help:
* open
* close
* read
* write
* dprintf

##Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* Look for the right source of information online
* How to create, open, close, read and write files
* What are file descriptors
* What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
* How to use the I/O system calls open, close, read and write
* What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
* What are file permissions, and how to set them when creating a file with the open system call
* What is a system call
* What is the difference between a function and a system call

###Requirements
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc
* A README.md file
* Your code should use the Betty style
* The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* Allowed syscalls: read, write, open, close
* You are allowed to use _putchar
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
ip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

####Tasks
* 0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.
* 1. Under the snow
Create a function that creates a file.
* 2. Speak gently, she can hear
Write a function that appends text at the end of a file.
* 3. cp
Write a program that copies the content of a file to another file.
* 4. elf
Write a program that displays the information contained in the ELF header at the start of an ELF file.
