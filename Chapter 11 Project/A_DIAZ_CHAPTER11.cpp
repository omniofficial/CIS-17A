/* COMMENTS
___________
ADRIAN DIAZ
CIS - 17A
MARCH 15, 2023
CHAPTER 11 PROJECT: THIS PROJECT READS CONTENTS OF A FILE AND COUNTS NUMBER OF TIMES EACH WORD APPEARS IN A FILE. */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	// READ INPUT FILE
	string fileword;
	string filewordArray[50];
	int counter[50];
	int index = 0;
	bool repeats = true;
	ifstream inputfile;
	inputfile.open("words.txt");

	// LOGIC + COUNTER
	while (inputfile.good())
	{
		getline(inputfile, filewordArray[index]);
		index++;
	}
	inputfile.close();

	for (int i = 0; i < 50; i++)
	{
		if (filewordArray[i] == fileword)
		{
			counter[i] = counter[i] + 1;
			repeats = true;
			break;
		}
		if (!repeats)
		{
			filewordArray[i] = fileword;
			counter[i] = 1;
		}
	}

	// DISPLAY CONTENTS
	for (int i = 0; i < 50; i++)
	{
		cout << filewordArray[i];
		cout << " ";
		cout << counter[i] << "\n";
	}

	system("pause");
	return 0;

}