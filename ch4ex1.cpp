/*
* Beginning C++ Through Game Programming
* Chapter 4 Exercise 1
* Favorite games list
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
  vector<string> favoriteGames;
  vector<string>::iterator stringIterator;
  vector<string>::iterator findIterator;
  vector<string>::iterator checkDuplicates;


  cout << "Welcome to your favorite games list\n";
  cout << "Select what you want to do\n";
  cout << " 1 - Add game to list\n";
  cout << " 2 - Remove game from list\n";
  cout << " 3 - List all games\n";
  cout << " 4 - Quit\n";

  int choice = 0;

  while( choice !=4){

      cout << "Enter your selection: ";
      cin >> choice;

      string favGame;
      string rmvGame;

      switch (choice) {
        case 1:
          cout << "Enter the name of the game you want to add: ";
          cin >> favGame;
          transform(favGame.begin(), favGame.end(), favGame.begin(), ::toupper);
          checkDuplicates = find(favoriteGames.begin(), favoriteGames.end(), favGame);

          if (checkDuplicates == favoriteGames.end()){
            favoriteGames.push_back(favGame);
          }else{
            cout << "That game is already on your list." << endl;
          }
          break;

        case 2:
          if (favoriteGames.empty()){
            cout << "You don't have any games on your list yet." << endl;
            break;
          }
          cout << "Enter the name of the game you want to remove: ";
          cin >> rmvGame;
          transform(rmvGame.begin(), rmvGame.end(), rmvGame.begin(), ::toupper);

          findIterator = find(favoriteGames.begin(), favoriteGames.end(), rmvGame);

          if(findIterator != favoriteGames.end()){
            favoriteGames.erase(findIterator);
            cout << rmvGame << " has been deleted from your list." << endl;
          } else{
            cout << "That game isn't on your list." << endl;
          }
          break;

        case 3:
          if(favoriteGames.empty()){
            cout << "You don't have any games on your list." << endl;
          }else{
            cout << "Here are your favorite games:" <<endl;
            for (stringIterator = favoriteGames.begin(); stringIterator != favoriteGames.end(); ++stringIterator ){
              cout << "- " << *stringIterator << endl;
            }
          }
          break;

        case 4:
          cout << "See you later!" << endl;
          break;

        default:
          cout << "Invalid input." << endl;
      }

  }

  return 0;

}
