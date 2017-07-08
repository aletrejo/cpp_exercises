/*
* Beginning C++ Through Game Programming
* Chapter 5 Exercise 2
* Hangman with Functions
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
#include <cctype>

using namespace std;

char askGuess();
bool checkGuess(char guess, string THE_WORD);

int main()
{
    // set-up
    const int MAX_WRONG = 8;  // maximum number of incorrect guesses allowed

    vector<string> words;  // collection of possible words to guess
    words.push_back("GUESS");
    words.push_back("HANGMAN");
    words.push_back("DIFFICULT");

    srand(static_cast<unsigned int>(time(0)));
    random_shuffle(words.begin(), words.end());
    const string THE_WORD = words[0];            // word to guess
    int wrong = 0;                               // number of incorrect guesses
    string soFar(THE_WORD.size(), '-');          // word guessed so far
    string used = "";                            // letters already guessed

    cout << "Welcome to Hangman.  Good luck!\n";

    // main loop
    while ((wrong < MAX_WRONG) && (soFar != THE_WORD))
    {
        cout << "\n\nYou have " << (MAX_WRONG - wrong);
		cout << " incorrect guesses left.\n";
        cout << "\nYou've used the following letters:\n" << used << endl;
        cout << "\nSo far, the word is:\n" << soFar << endl;

        char guess;
        guess = askGuess();

        while (used.find(guess) != string::npos)
        {
            cout << "\nYou've already guessed " << guess << endl;
            cout << "Enter your guess: ";
            cin >> guess;
            guess = toupper(guess);
        }

        used += guess;

        bool correctGuess = checkGuess(guess, THE_WORD);

        if(correctGuess == true){
          for (unsigned int i = 0; i < THE_WORD.length(); ++i)
          {
              if (THE_WORD[i] == guess)
              {
                  soFar[i] = guess;
                }
              }
          }else{
            ++wrong;
          }
    }

    // shut down
    if (wrong == MAX_WRONG)
        cout << "\nYou've been hanged!";
    else
        cout << "\nYou guessed it!";

    cout << "\nThe word was " << THE_WORD << endl;

    return 0;
}

char askGuess(){
  cout << "\n\nEnter your guess: ";
  char guess;
  cin >> guess;
  guess = toupper(guess); //make uppercase since secret word in uppercase
  return guess;
}

bool checkGuess(char guess, string THE_WORD){
  if (THE_WORD.find(guess) != string::npos)
  {
      cout << "That's right! " << guess << " is in the word.\n";
      return true;
  }
  else
  {
      cout << "Sorry, " << guess << " isn't in the word.\n";
      return false;
  }
}
