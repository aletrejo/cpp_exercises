/*
* Beginning C++ Through Game Programming
* Chapter 6 Exercise 1
* Mad-Lib using references
*/

#include <iostream>
#include <string>

using namespace std;

string askText(string prompt);
int askNumber(string prompt);
void tellStory(const string& name, const string& noun, const int& number, const string& bodyPart, const string& verb);

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";

    string name = askText("Please enter a name: ");
    string& rName = name;
    string noun = askText("Please enter a plural noun: ");
    string& rNoun = noun;
    int number = askNumber("Please enter a number: ");
    int& rNumber = number;
    string bodyPart = askText("Please enter a body part: ");
    string& rBodyPart = bodyPart;
    string verb = askText("Please enter a verb: ");
    string& rVerb = verb;

    tellStory(name, noun, number, bodyPart, verb);

    return 0;
}

string askText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

int askNumber(string prompt)
{
    int num;
    cout << prompt;
    cin >> num;
    return num;
}

void tellStory(const string& name,  const string& noun, const int& number, const string& bodyPart, const string& verb)
{
    cout << "\nHere's your story:\n";
    cout << "The famous explorer ";
    cout << name;
    cout << " had nearly given up a life-long quest to find\n";
    cout << "The Lost City of ";
    cout << noun;
    cout << " when one day, the ";
    cout << noun;
    cout << " found the explorer.\n";
    cout << "Surrounded by ";
    cout << number;
    cout << " " << noun;
    cout << ", a tear came to ";
    cout << name << "'s ";
    cout << bodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << noun << "\n";
    cout << "promptly devoured ";
    cout << name << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << verb;
    cout << " for.\n";
}
