/*COMMENTS
___________
ADRIAN DIAZ
CIS-17A
MARCH 8, 2023
CHAPTER 10 PROJECT: THIS PROJECT LOCATES CONTENTS OF A STRING THROUGH AN ARRAY WHOSE DATA IS READ VIA INPUT FILE. */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	string data[50];
	string name;
	int index = 0;
	int index2 = 0;

	// READ INPUT FILE
	ifstream inputfile;
	inputfile.open("phonebook");

	while (inputfile.good())
	{
		getline(inputfile, data[index]);
		index++;
	}
	inputfile.close();

	// DISPLAY STRING
	cout << "Enter a name or partial name to search for: ";
	getline(cin, name);

	// SEARCH ARRAY FOR ALL ENTRIES, THEN DISPLAY RESULTS.
	cout << "\nHere are the results of the search: ";

	for (int j = 0; j < 50; j++)
	{
		if (name == data[j])
		{
			cout << data[j];
		}
		else if (name != data[j])
		{
			cout << "\nNo Entries were found for " << name;
		}
	}

	system("pause");
	return 0;

}
