#include <iostream>
#include <memory>
#include "pigLatin.h"

using namespace std;

int main(int argc, char *argv[])
{
    // Smart pointers are cool
    unique_ptr<pigLatin> translator(new pigLatin);

    translator->takeUserInput();
    translator->translate();

    cout << "Translation: " << translator->getTranslation() << endl;

    return 0;
}

/* How pig latin works (for the purposes of our program):
    1. If the first character of a word is a vowel AND there is only one character in the word,
        add "way" on the end of it 
    2. Else parse to the first vowel while putting each consonant element in a buffer, then when the
        first vowel is encountered append the buffer and add "ay" on the end of the word
*/