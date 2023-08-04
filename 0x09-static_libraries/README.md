0x09. C - Static libraries

#Resources
Read or watch:
* What Is A “C” Library? What Is It Good For?
* Creating A Static “C” Library Using “ar” and “ranlib”
* Using A “C” Library In A Program
* What is difference between Dynamic and Static library(Static and Dynamic linking) (stop at 4:44)
man or help:
* ar
* ranlib
* nm

##Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:
* What is a static library, how does it work, how to create one, and how to use it
* Basic usage of ar, ranlib, nm

###Requirements
C
* Allowed editors: vi, vim, emacs
* All files should be compiled on Ubuntu 20.04 LTS using gcc
* A README.md file
* Your code should use the Betty style
* You are allowed to use _putchar
* The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
* Don’t forget to push your header file

####Bash
* Allowed editors: vi, vim, emacs
* All your scripts will be tested on Ubuntu 20.04 LTS
* All your files should end with a new line (why?)
* The first line of all your files should be exactly #!/bin/bash
* A README.md file
* All your files must be executable

#####Tasks
* 0-libmy.a, main.h
Create the static library libmy.a containing fuctions previously made
* 1-create_static_lib.sh
Create a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.
