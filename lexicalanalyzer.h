#include <iostream>
using namespace std;

enum STATES {q0, q1, q2, qerr};
enum ALPHABET {letter, digit, underscore, delimiter};

enum TOKENS {

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


};
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
	public:

		void checkString(string);
		bool isDigit(char);
		bool isLetter(char);
		bool isToken();

}