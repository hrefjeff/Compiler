#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

const int TABLE_SIZE = 5;
//const int KNUTHCONST = (sqrt(5) - 1) / 2;

enum Tokens { begin, tok_begin, tok_if, tok_then, tok_else, end };

using namespace std;

#ifndef HASH_H
#define HASH_H

class HashEntry {

	friend class HashTable;

	private:
	
		int key;
		int value;
	
	public:
		
		HashEntry(int, int);

		int getKey();
		int getValue();

};


class HashTable {

	private:
	
	      HashEntry **table;

	public:

		HashTable();
		~HashTable();

		void printTable();
		int search(int);
		void insert(int, int);

};

#endif