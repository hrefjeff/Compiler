#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;

enum STATES {q0, q1, q2, qerr};
enum ALPHABET {letter, digit, underscore, delimiter};

int stateDiagram[4][4]
	{
		/*--------letter,digit,underscore,delimiter ----------*/
		/*--q0--*/{q1   ,qerr ,qerr      ,q0},
		/*--q1--*/{q1   ,q1   ,q1        ,q2},
		/*--q2--*/{q0   ,q0   ,q0        ,q0},
		/*--qerr*/{qerr ,qerr ,qerr      ,qerr}
	};

void checkString(string);
bool isDigit(char);
bool isLetter(char);

int main()
{

	string inputtest;

	ifstream FileInput;
	FileInput.open("input.txt");
	FileInput >> inputtest;

	do{

		checkString(inputtest);

		FileInput >> inputtest;

	} while(!FileInput.eof());
	
	return 0;
}

// DFA Recognizer for valid string in language
void checkString(string someString)
{
	int typeOfCharacter;
	int current_state = q0;

    for (unsigned int i=0; i<someString.length(); i++)
    {
		if(isDigit(someString[i]))
			typeOfCharacter = digit;

		if(isLetter(someString[i]));
			typeOfCharacter = letter;

		if (someString[i] == '_')
			typeOfCharacter = underscore;

		if (someString[i] == ';')
			typeOfCharacter = delimiter;
        
        cout << "(q[" << current_state << "], " << (char)someString[i] << ") -> ";
        current_state = stateDiagram[current_state][typeOfCharacter];
        cout << "q" << current_state << endl;
    }

    if (current_state == q2)
    	cout << "accept" << endl;
    else
    	cout << "reject" << endl;

}

bool isDigit(char someChar)
{
	for (int i=0; i<10; i++)
		if (someChar == ('0' + i))
			return true;

	return false;
}

bool isLetter(char someChar)
{
	for (int i='A'; i<='Z'; i++)
			if (someChar == i)
				return true;

	return false;
}

bool isToken()
{
	return false;
}