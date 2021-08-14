#include <iostream>
#include "pigLatin.h"

using namespace std;

// TODO: command line flags
int main()
{
    pigLatin translator;

    translator.takeUserInput();
    translator.translate();

    cout << "Translation: " << translator.getTranslation() << endl;

    return 0;
}

/* How pig latin works (for the purposes of our program):
    1. If the first character of a word is a consonant, fetch all the letters to the first vowel
        then slap it on the end and add "ay"
    2. If the first character of a word is a vowel AND there is only one character in the word,
        add "way" on the end of it 
    3. If the first character of a word is a vowel AND there are more than one characters in the word,
        add "ay" on the end of the word
*/