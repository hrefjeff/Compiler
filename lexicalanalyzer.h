#include <iostream>
#include <cctype>
#include <fstream>
#include <string>
#include "hash.h"

using namespace std;

int stateDiagram[4][4]
{
	/*--------letter,digit,underscore,delimiter ----------*/
	/*--q0--*/{q1   ,qerr ,qerr      ,q0},
	/*--q1--*/{q1   ,q1   ,q1        ,q2},
	/*--q2--*/{q0   ,q0   ,q0        ,q0},
	/*--qerr*/{qerr ,qerr ,qerr      ,qerr}
};

class LexicalAnalyzer
{

	private:

		string TOKENS_IN_LANGUAGE[26] = {

			'PROGRAM',
			'VAR',
			'BEGIN',
			'END',
			'END.',
			'INTEGER',
			'FOR',
			'READ',
			'WRITE',
			'TO',
			'DO',
			';',
			':',
			',',
			':=',
			'+',
			'-',
			'*',
			'DIV',
			'(',
			')',
			'id',
			'int'			

		};

	public:

		void checkString(string);
		bool isDigit(char);
		bool isLetter(char);
		bool isToken();

}