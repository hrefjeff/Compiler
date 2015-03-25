#include <iostream>
#include <cstring>
using namespace std;

enum Tokens { BEGIN, END, END., VAR  };

bool checkString(string);

int main()
{

	string test = "153893a";

	if (checkString(test))
		cout << "yup" << endl;


	return 0;
}

bool checkString(string someString)
{
	bool isNumber;

	for (int i=0; i<someString.length(); i++)
	{
		isNumber = false;
		for (int j=0; j<10; j++)
		{
			if (someString[i] == ('0' + j))
				isNumber = true;
		}

		if (!isNumber)
			return false;
	}
	return true;
}
