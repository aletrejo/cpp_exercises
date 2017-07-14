/*
* Beginning C++ Through Game Programming
* Chapter 7 Exercise 1
* Write a program with a pointer to a pointer to a string object.
* Use the pointer to the pointer to call the size() member function of the string object.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
  string theTruth = "'Ale is awesome!'";
  string* pStr = &theTruth; //pointer to string

  string* p2pStr = pStr; //pointer to pointer to string

  cout << "The size of the string: " << theTruth << " is " << p2pStr->size() << endl;


}
