#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

enum TOKENS {

	PROGRAM,
	VAR,
	BEGIN,
	END,
	INTEGER,
	FOR,
	READ,
	WRITE,
	TO,
	DO,
	DIV,
	id

};

int main()
{

	HashTable symbolTable;

	symbolTable.insert(PROGRAM, 1);
	symbolTable.insert(VAR, 2);
	symbolTable.insert(END, 2);
	
	// symbolTable.insert(begin, 3);
	// symbolTable.insert(begin, 4);
	// symbolTable.insert(begin, 5);
	// symbolTable.insert(begin, 6);

	cout << symbolTable.search(PROGRAM) << endl;
	cout << symbolTable.search(END) << endl;

	cout << "------------" << endl;

	symbolTable.printTable();

	// HashTable Room;
	// Room.printMap();

	// Room.put(bike,10);
	// cout << Room.get(bike) << endl;

	// Room.printMap();

	return 0;
}