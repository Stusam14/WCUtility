/*
 *include to avoid redeclaration of the header file
 *ifndef for defining the header id it has not been defined
 * define is for defining the header
 * */

#ifndef _MY_WCHEADER
#define _MY_WCHEADER
#include <string>
#include <iostream>

namespace SNGSIY006{
	extern int countWords;
	extern int countLines;
	extern int countLetters;
	extern int countLetters_2;
	void wcutils(std::string s);
	void countLinesWordsLetter();
	bool isWordValid(std::string tempWord);
	void countValidLetters(std::string word);
	void letterFrequencyTable(int * letterptr, int letterNumber);
	void printLetterFrequency(char * Lfrequency);
	struct CharInfo{
		char letter;
		long count;
	};
}

#endif
