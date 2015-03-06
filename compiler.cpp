#include <iostream>
#include <cctype>
#include <fstream>
#include <boost/algorithm/string.hpp>

#include "compiler.h"
#include "hash.h"

using namespace std;

void Compiler::specifyFile(string filename)
{

	inputFile.open(programName.c_str());
	if(!inputFile.fail())
		programName = filename;
	else
		cout << "This file doesn't exist!!" << endl;

}

void Compiler::preprocessProgram()
{
	int i = 0;
	string line;
	inputFile.open(programName.c_str());

	// read through file
	if (!inputFile.fail())
	{
		while (!inFile.eof())
		{
			inputFile >> line;
		}
	}

	inputFile.close();
}

void Compiler::scan()
{
	int i = 0;
	inputFile.open(programName.c_str());

	if (!inputFile.fail())
	{
		while (!inFile.eof())
		{
			if ()
			outputFile << inputFile;
		}
	}

	inputFile.close();
	outputFile.close();
}

void Compiler::printSymbolTable(){}
void Compiler::printErrorTable(){}