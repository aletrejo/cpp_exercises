#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  int player1Score, player2Score, player3Score = 0;

  cout << "Please enter player 1's score: ";
  cin >> player1Score;

  cout << "Please enter player 2's score: ";
  cin >> player2Score;

  cout << "Please enter player 3's score: ";
  cin >> player3Score;

  cout << "The player's average score is " << (player1Score + player2Score + player3Score)/ 3.0 << "." << endl;

  return 0;

}
