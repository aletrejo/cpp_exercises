/*
* Beginning C++ Through Game Programming
* Chapter 2 Exercise 1
*/

#include <iostream>

using namespace std;

int main(){
    cout << "Difficulty Levels\n\n";
    cout << "1 ­ Easy\n";
    cout << "2 ­ Normal\n";
    cout << "3 ­ Hard\n\n";

    enum difficulty {EASY = 1, NORMAL, HARD};
    difficulty myDifficulty;

    int choice;

    cout << "Enter your desired difficulty level: ";
    cin >> choice;

    switch (choice) {
      case 1:
          myDifficulty = EASY;
          cout << "You picked EASY" << endl;
          break;

      case 2:
          myDifficulty = NORMAL;
          cout << "You picked NORMAL" << endl;
          break;

      case 3:
          myDifficulty = HARD;
          cout << "You picked HARD" << endl;
          break;

      default:
          cout << "You made an illegal choice" <<endl;
          break;

    }

    return 0;
}
