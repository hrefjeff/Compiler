#include <cstdlib>
#include <iostream>
#include <string>
#include <math.h>

#include "hash.h"

using namespace std;

//===================================================================
//===========================HashEntry===============================
//===================================================================
HashEntry::HashEntry(int key, int value)
{
    this->key = key;
    this->value = value;
}

int HashEntry::getKey()
{
    return key;
}

int HashEntry::getValue()
{
    return value;
}

//===================================================================
//===========================HashTable===============================
//===================================================================
HashTable::HashTable()
{
    table = new HashEntry*[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
          table[i] = NULL;
}

HashTable::~HashTable() {
    for (int i = 0; i < TABLE_SIZE; i++)
          if (table[i] != NULL)
                delete table[i];
    delete[] table;
}

void HashTable::printTable()
{
	for (int i = 0; i < TABLE_SIZE; i++)
          cout << "Entry " << i << " address is " << table[i] << endl;
}

int HashTable::search(int key) 
{
    int hash = (key % TABLE_SIZE);
    
    while (table[hash] != NULL && table[hash]->getKey() != key)
        hash = (hash + 1) % TABLE_SIZE;
    
    if (table[hash] == NULL)
        return -1;
    else
		return table[hash]->getValue();
}

// insertion using linear probing
void HashTable::insert(int key, int value)
{
    int hash = (key % TABLE_SIZE);

    // linear probing
    while (table[hash] != NULL && table[hash]->getKey() != key)
    // {
    // 	if (table[hash]->getKey() == key)
    // 	{
    // 		cout << "Key " << table[hash]->getKey() << " already exists." << endl;
    // 		return;
    // 	}
    	hash = (hash + 1) % TABLE_SIZE;
//    }

    if (table[hash] == NULL)
    {
    	table[hash] = new HashEntry(key,value);
    	cout << "Insert success" << endl;

    } else {
    	cout << "Hash table is full." << endl;
    }

    return;
}