# EEE3095S/EEE3096S-Prac1
This is the repository for the first tutorial of EEE3095S/EEE3096S

The aim of the tut is to get comfortable with using gdb

### Requirments
* MinGW compiler

### How to run program

To run the code you will first need to compile it.
To compile the code use this command.

```gcc -g main.c```

To compile with debugging, run the command with the `-g` flag

```gcc -g main.c```

This will create a file called `a.out` which is the executable

Alternatively you can use the `-o` flag to create an executable with your own custom name like so

```gcc -g main.c -o yourNameHere```

To run the executable use 

```./yourNameHere```

if on Windows OS use 

```yourNameHere.exe```
