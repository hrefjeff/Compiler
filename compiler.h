#include <iostream>
#include <cctype>
#include <fstream>

#include "hash.h"

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


class Compiler
{
	private:

		LexicalAnalyzer scanner;

		HashTable symbolTable;
		HashTable errorTable;
		char[32] lookaheadBuffer;
		char* startPtr;
		char* lookaheadPtr;


	public:

		string programName;

		ifstream inputFile;

		void specifyFile(string);
		void preprocessProgram();

		void scan();
		void parse();

		void printSymbolTable();
		void printErrorTable();
}