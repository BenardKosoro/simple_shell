# A README.md for 0x16. C - Simple Shell

This project is our version of the Shell, developed for educational purposes, following the guidelines of the ALX Cohort 12
		

## Description

simple_shell is a UNIX command line interpreter that allows us to enter a simple command line (input) in a terminal and obtain the corresponding output. It should be noted that the standard location of the available commands or executable files or commands is: /bin/
After compiling the shell with the flags of gcc: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh and then, execute, you can enter a simple commands and see the output. However, at the end of this text, you can see the detailed steps for the installation of this shell.
		
		
## Tasks
		
### Task 0: README, man, AUTHORS
Write a README, man and authors of project. The latter in Docker format
		
### Task 1: Betty would be proud
Write a beautiful code that passes the Betty checks
		
### Task 3: Simple shell 0.1
Write a UNIX command line interpreter.
#### Example:
```
simple-shell$ /bin/ls
```		
### Task 5: Simple shell 0.2
Simple shell 0.1 + Handle command lines with arguments.
#### Example:
```
simple-shell$ /bin/ls -la
```		
### Task 7: Simple shell 0.3
Simple shell 0.2 + Handle the path.
#### Example:
```
simple-shell$ ls -l /tmp
```		
### Task 8: Simple shell 0.4
Simple shell 0.3 + Implement the exit built-in, without argum
```
### Task 9: setenv, usetenv
Simple shell 1.0 + Implement the setenv and unsetenv built-in commands
```
### Task 10: cd
Simple shell 1.0 + Implement the built-in command cd:
```
### Task 11: ;
Simple shell 1.0 + Handle the commands separator ;
```
### Task 12. && and ||
Simple shell 1.0 + Handle the && and || shell logical operators
```
### Task 13. alias
Simple shell 1.0 + Implement the alias built-in command
```
### Task 14. Variables
Simple shell 1.0 + Handle variables replacement
```
### Task 15. Comments
Simple shell 1.0 + Handle comments (#)
```
## Installation
To use this shell, you must follow these steps:
1. Clone this repository.
2. Compile all the .c files, using the gcc command and the respective flags, that is: gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
3. Subsequently, run the executable file, writing in the command line: ./hsh
4. After the above, you can see the command line, in which you can enter commands and observe the obtained output.
				
*Developed by Benard Osoro*
