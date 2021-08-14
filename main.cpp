#include <iostream>
#include <string>

using namespace std;

// TODO: make this pretty/elegant
bool isVowel(char letter)
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

// TODO: command line flags
int main()
{
    string userInput;
    string buffer;
    string plOutput;

    cout << "Welcome to the pig latin translator! Input string to be translated:" << endl;
    getline(cin, userInput);
    userInput += '\n';  // cheeky way to force input to adhere to what the program wants

    // TODO: sanitize user input

    // Another idea - this could be done using string size_type without iterators
    for (auto idx = userInput.begin(); idx != userInput.end(); ++idx)
    {
        // if we have a vowel, write it to the pig latin output
        if (isVowel(*idx))
        {
            plOutput += *idx;
            cout << "plOutput: " << plOutput << endl;

            // if said vowel is a one vowel word, ex. "a", "i", handle it
            if ((*(idx + 1) == ' ') && (buffer.size() == 0))
            {
                plOutput += "way ";
                buffer.clear();
                idx++;
            }
            // otherwise we've reached the first set of vowels in the word
            else
            {
                idx++;
                while(*idx != '\n' && *idx != ' ')
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

    cout << "Translation: " << plOutput << endl;

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