#ifndef PIGLATIN_H
#define PIGLATIN_H

#include <iostream>
#include <string>

using namespace std;

class pigLatin
{
private:
    string userInput;
    string buffer;
    string plOutput;
public:
    void takeUserInput();
    // TODO: void validateInput();
    void translate();
    bool isVowel(char letter);
    string getTranslation();
};

#endif