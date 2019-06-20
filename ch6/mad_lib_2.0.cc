#include <iostream>
#include <string>

using namespace std;

void askText(string &text, const string &prompt);
void askNumber(int &num, const string &prompt);
void tellStory(string name, string noun, int number, string bodyPart, string verb);

int main()
{
    cout << "Welcome to Mad Lib.\n\n";
    cout << "Answer the following questions to help create a new story.\n";

    string name, noun, bodyPart, verb;
    int num;

    askText(name, "Please enter a name: ");
    askText(noun, "Please enter a plural noun: ");
    askNumber(num, "Please enter a number: ");
    askText(bodyPart, "Please enter a body part: ");
    askText(verb, "Please enter a verb: ");

    tellStory(name, noun, num, bodyPart, verb);

    return 0;
}

void askText(string &text, const string &prompt)
{
    cout << prompt;
    cin >> text;
}

void askNumber(int &num, const string &prompt)
{
    cout << prompt;
    cin >> num;
}

void tellStory(string name, string noun, int number, string bodyPart, string verb)
{
    cout << "\nHere’s your story:\n";
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
    cout << name << "’s ";
    cout << bodyPart << ".\n";
    cout << "After all this time, the quest was finally over. ";
    cout << "And then, the ";
    cout << noun << "\n";
    cout << "promptly devoured ";
    cout << name << ". ";
    cout << "The moral of the story? Be careful what you ";
    cout << verb;
    cout << " for.";
}