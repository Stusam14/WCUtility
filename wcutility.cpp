#include <iostream>
#include <string>
#include "wcutility.h"
#include <vector>
#include <sstream>
#include <string>

#define DIGIT (decimal >= 48 && decimal <= 57)  
#define LETTER (decimal >= 97 && decimal <= 122) || (decimal >= 65 && decimal <=90)


namespace SNGSIY006{

    std::vector<std::string> lineVector;
    std::vector<std::string> wordVector;
        
    int countLines =0;
    int countWords = 0;
    int countLetters = 0;
    int countLetters_2 = 0;
    int letterFrequency[26]={};
    
    void letterFrequencyTable(int * letterptr, int letterNumber){
        letterptr[letterNumber-97]++;
    }
    // Function to input the full lines of strings into a vector.
    void wcutils(std::string s){
        lineVector.push_back(s);
    }
    
    //Function to count the number of valid Letters
    void countValidLetters(std::string word){
        for(std::string::iterator it = word.begin() ; it != word.end(); ++it){
            int decimal = (int)static_cast<unsigned char>(*it);

            if(DIGIT || LETTER){
                countLetters++;
            }
        }

    }
    //checks if the given word is valid and returns true or false
    bool isWordValid(std::string tempWord){
        countLetters_2=0;
        for(std::string::iterator it = tempWord.begin() ; it != tempWord.end(); ++it){
            //converts each character to lower.
            std::tolower(*it);
            int decimal = (int)static_cast<unsigned char>(*it);
            if(decimal > 97 && decimal <= 122){
                letterFrequencyTable(letterFrequency , decimal);
            }
            if(DIGIT || LETTER){
                countLetters_2++;
            }
        }
        if(countLetters_2 == 0){
            return false;
        }else{
            return true;
        }   
    }
    // Function tp count the number of words , lines and letters
    void countLinesWordsLetter(){

        std::string tempWord="";
        for(auto lines : lineVector){
            countLines++;
            std::istringstream iss(lines);
            while(iss >> tempWord){
                wordVector.push_back(tempWord);
                if(isWordValid(tempWord))countWords++;      
            }
            
        }
        for(auto word: wordVector){
            countValidLetters(word);
        }
        std::cout<< countLines << " " << countWords<<" "<< countLetters<<" ";
        std::cout<<"[";
        int arraysizecount =0;
        for(int index = 0; index < std::size(letterFrequency); index++){
            arraysizecount++;
            if(letterFrequency[index]==0){
                continue;
            }else{
                CharInfo tabEntry = { (char)(index + 97) ,letterFrequency[index] };
                tabEntry.letter = (char)(index + 97);
                tabEntry.count = letterFrequency[index];
                std::cout<<tabEntry.letter<<":"<<tabEntry.count;
                if(arraysizecount != std::size(letterFrequency)-1){
                    std::cout<<" ";
                }
                
               
            }
        }
        std::cout<<"]"<<"\n";
    }
    
     
  
}