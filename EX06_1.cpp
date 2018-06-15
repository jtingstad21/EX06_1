// EX06_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


int main()
{
	srand(0);

	ofstream fout;
	fout.open("Exercise13_1.txt");

	if (fout.fail())
	{
		cout << "can't open file" << endl;
		return 0;
	}
	for (int i = 0; i < 100; i++)
	{
		int random = rand() % 200;
		fout << random << " ";
	}

    return 0;
}

