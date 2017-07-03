/*
* Beginning C++ Through Game Programming
* Chapter 2 Exercise 1
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int userNumber;
    cout << "Welcome to Guess my Number" << endl;
    cout << "Please enter a number between 1 and 100: ";
    cin >> userNumber;

    srand(static_cast<unsigned int>(time(0))); //seed random number

    int compGuess;
    int tries = 0;

    int upperBound = 100;
    int lowerBound = 1;

    int wrapNum;

    do{

      wrapNum = upperBound - lowerBound;
      if (wrapNum == 1) { //preventing infinite loop when guess is 100
        wrapNum = 2;
      }
      compGuess =  lowerBound + rand()%(wrapNum);
      cout << "Computer's guess: " << compGuess << endl;
      ++tries;
      if(compGuess > userNumber){
        cout << "Too high!" << endl;
        upperBound = compGuess;
      } else if(compGuess < userNumber){
        cout << "Too low!" << endl;
        lowerBound = compGuess;
      }
    }while(userNumber != compGuess);

    cout << "You guessed it! It only took you " << tries << " tries. " << endl;

    return 0;
}
