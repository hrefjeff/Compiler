#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"

using namespace std;

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
	'int',

};

int main()
{

	HashTable tokenTable;

	myTable.insert('PROGRAM', 1);
	myTable.insert('VAR', 2);
	myTable.insert('FOR', 2);
	myTable.insert('int', 2);
	
	// myTable.insert(begin, 3);
	// myTable.insert(begin, 4);
	// myTable.insert(begin, 5);
	// myTable.insert(begin, 6);

	cout << myTable.search('PROGRAM') << endl;
	cout << myTable.search('int') << endl;

	cout << "------------" << endl;

	myTable.printTable();

	// HashTable Room;
	// Room.printMap();

	// Room.put(bike,10);
	// cout << Room.get(bike) << endl;

	// Room.printMap();

	return 0;
}
