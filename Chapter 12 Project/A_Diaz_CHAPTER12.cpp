/* COMMENTS
___________
ADRIAN DIAZ
CIS - 17A
MARCH 25, 2023
CHAPTER 12 PROJECT: THIS PROGRAM READS INTEGERS VIA TEST FILE, STORES BYSTES AND REDISPLAYS CHARACTERS VIA RETRIEVAL. */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	// DECLARE VARIABLES + READ INPUT FILE
	int x;
	int i = 0;
	string character;
	ifstream posfile("pos.txt");
	ifstream charsfile("chars.txt");
	
	// LOGIC AND CONDITIONS
	while (posfile >> x)
	{
		if (x >= 0)
		{
			while (charsfile >> character)
			{
				if (!(x >= i || x < 0))
				{
					cout << character << "\n";
				}
			}
		}
	}

	// CLOSING INPUT FILES
	posfile.close();
	charsfile.close();
	system("pause");
	return 0;
}