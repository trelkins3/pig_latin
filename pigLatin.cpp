#include <iostream>
#include "pigLatin.h"

using namespace std;

// Function name is sort of confusing, it gets user input but it's a 'setter' function
void pigLatin::takeUserInput()
{
    cout << "Welcome to the pig latin translator! Input string to be translated:" << endl;
    getline(cin, userInput);
    userInput += '\n'; // cheeky way to force input to adhere to what the program wants
}

// TODO: make this pretty/elegant
bool pigLatin::isVowel(char letter)
{
    letter = tolower(letter);

    // classic
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void pigLatin::translate()
{
    // Another idea - this could be done using string size_type without iterators
    for (auto idx = userInput.begin(); idx != userInput.end(); ++idx)
    {
        // if we have a vowel, write it to the pig latin output
        if (isVowel(*idx))
        {
            plOutput += *idx;

            // if said vowel is a one vowel word, ex. "a", "i", handle it
            if ((*(idx + 1) == ' ') && (buffer.size() == 0))
            {
                plOutput += "way ";
                idx++;
            }
            // otherwise we've reached the first set of vowels in the word
            else
            {
                idx++;
                while (*idx != '\n' && *idx != ' ')
                {
                    plOutput += *idx;
                    idx++;
                }
                plOutput += buffer;
                plOutput += "ay ";
                buffer.clear();
            }
        }
        // build the consonant buffer
        else
        {
            buffer += *idx;
        }
    }
}

string pigLatin::getTranslation()
{
    return plOutput;
}