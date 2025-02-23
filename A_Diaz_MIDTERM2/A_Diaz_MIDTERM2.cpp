/* COMMENTS
___________
ADRIAN DIAZ
CIS - 17A
APRIL 3, 2023
MIDTERM PROJECT 2: THIS PROGRAM IS A CONTINUATION OF THE PREVIOS MIDTERM PROJECT. NOTE: IT WILL NOT RUN UNLESS COPY PASTED INTO THE PREVIOS PROGRAM. . */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// ------------------------------------------ FUNCTION PROTOTYPES
void saveData(Employee x[], int employee_amount);
void loadData(Employee x[], int employee_amount);

int main()
{
    saveData(info, employee_amount);
    loadData(info, employee_amount);
    return 0;
}

void saveData(Employee x[], int employee_amount)
{
    ofstream outputFile;
    outputFile.open("EmployeeData.txt");

    for (int i = 0; i < employee_amount; i++)
    {
        outputFile << x[i].firstName << "\n";
        outputFile << x[i].lastName << "\n";
        outputFile << x[i].phoneNumber << "\n";
        outputFile << x[i].address << "\n";
        outputFile << x[i].city << "\n";
        outputFile << x[i].stateZip << "\n";
        outputFile << x[i].position << "\n";
        outputFile << x[i].jobTitle << "\n";
        outputFile << x[i].paymentType << "\n";
    }
    outputFile.close();
}

void loadData(Employee x[], int employee_amount)
{
    ifstream inputFile;
    inputFile.open("EmployeeData.txt");

    for (int i = 0; i < employee_amount; i++)
    {
        getline(inputFile, x[i].firstName);
        inputFile >> x[i].lastName;
        inputFile >> x[i].phoneNumber;
        inputFile >> x[i].address << "\n";
        inputFile >> x[i].city << "\n";
        inputFile >> x[i].stateZip << "\n";
        inputFile >> x[i].position << "\n";
        inputFile >> x[i].jobTitle << "\n";
        inputFile >> x[i].paymentType << "\n";
        
        inputFile.get();
    }
    inputFile.close();
}