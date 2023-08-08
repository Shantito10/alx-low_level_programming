0x0B. C - malloc, free

#Resources
Read or watch:
0x0a - malloc & free - quick overview.pdf
Dynamic meory allocation in C - malloc calloc realloc free (stop at 6:50)
man or help:
malloc
free

##Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google
* What is the difference between automatic and dynamic allocation
* What is malloc and free and how to use them
* Why and when use malloc
* How to use valgrind to check for memory leak

###Requirements
* Allowed editors: vi, vim, emacs
* All files should be compiled on Ubuntu 20.04 LTS using gcc
* A README.md file
* Your code should use the Betty style
* The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
* You are allowed to use _putchar
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

####Tasks
* 0-create_array.c
A function that creates an array of chars, and initializes it with a specific char.
* 1-strdup.c
A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
* 2-str_concat.c
A function that concatenates two string.
* 3-alloc_grid.c
A function that returns a pointer to a 2 dimensional array of integers.
* 4-free_grid.c
A function that frees a 2 dimensional grid previously created by your alloc_grid function.
* 100-argstostr.c
A function that concatenates all the arguments of your program.
* 101-strtow.c
A function that splits a string into words.
