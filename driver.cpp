#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

#include "hash.h"

using namespace std;

int main()
{

	HashTable myTable;

	myTable.insert(begin, 1);
	myTable.insert(end, 2);
	myTable.insert(end, 2);
	myTable.insert(end, 2);
	
	// myTable.insert(begin, 3);
	// myTable.insert(begin, 4);
	// myTable.insert(begin, 5);
	// myTable.insert(begin, 6);

	cout << myTable.search(begin) << endl;
	cout << myTable.search(tok_if) << endl;

	cout << "------------" << endl;

	myTable.printTable();

	// HashTable Room;
	// Room.printMap();

	// Room.put(bike,10);
	// cout << Room.get(bike) << endl;

	// Room.printMap();

	return 0;
}
