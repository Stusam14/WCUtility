# Emulating Unix wc

# A program which emulates the behavior of the unix utility wc and counting the frequency of the letters.

This program was is built as part of an Assingment for my C++ course, it mainly focues on the basics of programming in C++

# Getting Started

- Use the command : "make" to compile the file

- use the command : cat mytextfile.txt | ./myWC

# The Main behaviour of program files in the project:

# The wcutility.h file

wcutility.h file contains all the function prototypes implemented in the wcutility.cpp file , it contains extern count variable for beyond the file global excess for the wcutility.cpp , it has a single struct for use to store the frequency of letters.

# The wcutility.cpp file

This file has most of the code and implementation of the function prototypes and struct declaration from the wcutility.h file.
It initiates vector, count variables and Array to store the line , words and letters , It does the computation of the lines, words and letters using the function countlinewordsandletters , it first does a count on the lines ,then uses iswordvalid function to check if the given word has at least one letter or number , if not it considers it as non word .
Inside of iswordvalid , we have letter frequency table function , this function uses the letter check to add the frequency count functionality , it first converts the incoming letters to small ones , then checks if the letter lies within the ASCII value range for small letter , then it increases the frequency of the letters in a declared array and then the frequency is added to the struct object which is then printed.
The count valid letters function also checks if the letter is within the range and counts the number of letters.
The rest of the for loops available in the code and statement are for printing the output of the struct objects and counts after computation.

# wcutilitydriver

This file is responsinle for printing the functions and taking in input from the console.
