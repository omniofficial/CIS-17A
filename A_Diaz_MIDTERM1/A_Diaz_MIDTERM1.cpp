/* COMMENTS
___________
ADRIAN DIAZ
CIS - 17A
APRIL 3, 2023
MIDTERM PROJECT 1: EMPLOYEE RECORDS */

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

// ------------------------------------------ EMPLOYEE DECLARATION
struct Employee
{
	string firstName;
	string lastName;
	int phoneNumber;
	int address;
	string city;
	int stateZip;
	string position;
	string jobTitle;
	string paymentType;
};

// ------------------------------------------ FUNCTION PROTOTYPES
int employeeAmount();
int getEmployeeInfo(Employee x[], int employee_amount);
int inputEmployee(Employee x[], int employee_amount);
int displayEmployees(Employee x[], int employee_amount);
int editEmployees(Employee x[], int employee_amount);
int deleteEmployees(Employee x[], int employee_amount);
int displaySalary(Employee x[], int employee_amount);

int main()
{
	Employee info[100];
	int employee_amount;

	employee_amount = employeeAmount();
	getEmployeeInfo(info, employee_amount);
	int choice;
	
	do
	{
		cout << "------------------------";
		cout << "#1: Input New Employee \n";
		cout << "#2: Display Existing Employees \n";
		cout << "#3: Edit Existing Employees \n";
		cout << "#4: Delete Employee \n";
		cout << "#5: Display Payment Type / Salaries \n";
		cout << "#6: Quit \n";
		cout << "Choice: ";
		cin >> choice;
		cout << "\n";
		switch (choice)
		{
		default:
			"Invalid input. Pleasae try again. \n";
		case 1:
			employee_amount = inputEmployee(info, employee_amount);
			break;
		case 2:
			employee_amount = displayEmployees(info, employee_amount);
			break;
		case 3:
			employee_amount = editEmployees(info, employee_amount);
			break;
		case 4:
			employee_amount = deleteEmployees(info, employee_amount);
			break;
		case 5:
			displaySalary(info, employee_amount);
			break;
		}
	} while (choice != 6);
}

// ------------------------------------------ EMPLOYEE INFO FUNCTION
int employeeAmount()
{
	int employee_amount = 1;
	return employee_amount;
}
// ------------------------------------------ EMPLOYEE INFO FUNCTION
int getEmployeeInfo(Employee x[], int employee_amount)
{
	cout << "Hello! Please display the information of your " << employee_amount << " employees. \n";
	for (int i = 0; i < employee_amount; i++)
	{
		cout << "Employee First Name: ";
		cin >> (x[i].firstName);
		cout << "Employee Last Name: ";
		cin >> (x[i].lastName);
		cout << "Employee Phone Number: ";
		cin >> (x[i].phoneNumber);
		cout << "Employee Address: ";
		cin >> (x[i].address);
		cout << "Employee City: ";
		cin >> (x[i].city);
		cout << "Employee State Zip: ";
		cin >> (x[i].stateZip);
		cout << "Employee Position: ";
		cin >> (x[i].position);
		cout << "EmployeeJob Title: ";
		cin >> (x[i].jobTitle);
		cout << "Employee Payment Type: ";
		cin >> (x[i].paymentType);
		cout << "\n";
	}
	return employee_amount;
}


// ------------------------------------------ INPUT EMPLOYEE FUNCTION
int inputEmployee(Employee x[], int employee_amount)
{
	cout << "Hello! You currently have " << employee_amount << " employees in our database. You have chosen to add a new employee. \n";
	employee_amount = employee_amount + 1;
	int index = employee_amount - 1;

	cout << "Employee First Name: ";
	cin >> (x[index].firstName);
	cout << "Employee Last Name: ";
	cin >> (x[index].lastName);
	cout << "Employee Phone Number: ";
	cin >> (x[index].phoneNumber);
	cout << "Employee Address: ";
	cin >> (x[index].address);
	cout << "Employee City: ";
	cin >> (x[index].city);
	cout << "Employee State Zip: ";
	cin >> (x[index].stateZip);
	cout << "Employee Position: ";
	cin >> (x[index].position);
	cout << "Employee Job Title: ";
	cin >> (x[index].jobTitle);
	cout << "Employee Payment Type (please only type hourly or salary): ";
	cin >> (x[index].paymentType);
	return employee_amount;
}


// ------------------------------------------ DISPLAY EMPLOYEE FUNCTION
int displayEmployees(Employee x[], int employee_amount)
{
	cout << "Hello! You currently have " << employee_amount << " employees in our database. You have chosen to display all employees. \n";
	
	for (int i = 0; i < employee_amount; i++)
	{
		cout << "-----EMPLOYEE #" << i + 1 << "-----\n";
		cout << "Employee First Name: " << x[i].firstName << "\n";
		cout << "Employee Last Name: " << x[i].lastName << "\n";
		cout << "Employee Phone Number: " << x[i].phoneNumber << "\n";
		cout << "Employee Address: " << x[i].address << "\n";
		cout << "Employee City: " << x[i].city << "\n";
		cout << "Employee State Zip: " << x[i].stateZip << "\n";
		cout << "Employee Position: " << x[i].position << "\n";
		cout << "Employee Job Title: " << x[i].jobTitle << "\n";
		cout << "Employee Payment Type: " << x[i].paymentType << "\n";
	}

	return employee_amount;
}

// ------------------------------------------ EDIT EMPLOYEE FUNCTION
int editEmployees(Employee x[], int employee_amount)
{
	int index;
	int choice;
	cout << "Hello! You currently have " << employee_amount << " employees in our database. You have chosen to edit an employee. \n";
	cout << "Which was the index of the employee you would like to edit?";
	cin >> index;

	cout << "Great! You have chosen to edit index #" << index << ".\n";
	cout << "Please choose which component you would like to edit: \n";
	
		do
		{
			cout << "#1: Edit Employee First Name \n";
			cout << "#2: Edit Employee Last Name \n";
			cout << "#3: Edit Employee Phone Number \n";
			cout << "#4: Edit Employee Address \n";
			cout << "#5: Edit Employee City \n";
			cout << "#6: Edit Employee State Zip \n";
			cout << "#7: Edit Employee Position \n";
			cout << "#8: Edit Employee Job Title \n";
			cout << "#9: Edit Employee Payment Type \n";
			cout << "#10: Quit \n";
			cout << "Choice: ";
			cin >> choice;
			switch (choice)
			{
			default:
				cout << "Invalid input. Pleasae try again. \n";
			case 1:
				cout << "You are editing the first name of employee #" << index + 1 << ". Please enter the new first name: ";
				cin >> (x[index].firstName);
				break;
			case 2:
				cout << "You are editing the last name of employee #" << index + 1 << ". Please enter the new last name: ";
				cin >> (x[index].lastName);
				
				break;
			case 3:
				cout << "You are editing the phone number of employee #" << index + 1 << ". Please enter the new phone number: ";
				cin >> (x[index].phoneNumber);
				break;
			case 4:
				cout << "You are editing the address of employee #" << index + 1 << ". Please enter the new address: ";
				cin >> (x[index].address);
				break;
			case 5:
				cout << "You are editing the city of employee #" << index + 1 << ". Please enter the new city: ";
				cin >> (x[index].city);
				break;
			case 6:
				cout << "You are editing the state zip of employee #" << index + 1 << ". Please enter the new state zip: ";
				cin >> (x[index].stateZip);
				break;
			case 7:
				cout << "You are editing the position of employee #" << index + 1 << ". Please enter the new position: ";
				cin >> (x[index].position);
				break;
			case 8:
				cout << "You are editing the job title of employee #" << index + 1 << ". Please enter the new job title: ";
				cin >> (x[index].jobTitle);
				break;
			case 9:
				cout << "You are editing the payment type of employee #" << index + 1 << ". Please enter the new payment type (please only type hourly or salary): ";
				cin >> (x[index].paymentType);
				break;
			}
		} while (choice != 10);
	return employee_amount;
}

// ------------------------------------------ DELETE EMPLOYEE FUNCTION
int deleteEmployees(Employee x[], int employee_amount)
{
	int index;
	cout << "Hello! You currently have " << employee_amount << " employees in our database. You have chosen to delete an employee. \n";
	cout << "Which was the index of the employee you would like to delete? ";
	cin >> index;

	cout << "\n";
	cout << "You have chosen to delete employee #" << index + 1 << " of index #" << index << ".\n";
	x[index].firstName = "TERMINATED";
	x[index].lastName = "TERMINATED";
	x[index].phoneNumber = 0;
	x[index].address = 0;
	x[index].city = "TERMINATED";
	x[index].stateZip = 0;
	x[index].position = "TERMINATED";
	x[index].jobTitle = "TERMINATED";
	x[index].paymentType = "TERMINATED";

	cout << "Employee data has been replaced with the characters 0 and TERMINATED.";
	cout << "\n";
	return employee_amount;
}

// ------------------------------------------ DISPLAY SALARY FUNCTION
int displaySalary(Employee x[], int employee_amount)
{
	int index;
	cout << "Hello! You currently have " << employee_amount << " employees in our database. You have chosen to display the salary of the employee. \n";
	cout << "Which was the index of the employee you would like to display the salary type of? ";
	cin >> index;

	int inputtedType;
	cout << "\n";
	cout << "You have chosen to display the salary of employee #" << index + 1 << " of index #" << index << ".\n";
	cout << "Just to confirm, was the payment type of this employee hourly or salary?\n";
	cout << "1. Hourly      2. Salary  ";
	cin >> inputtedType;

	if (inputtedType == 1)
	{
		int hours;
		int wage = 15;
		cout << "The payment type of this employee is hourly.\n";
		cout << "How many hours were worked? ";
		cin >> hours;

		if (hours > 80 || hours < 0)
		{
			cout << "We do not accept hours greater than 80 or less than 0. Please try again \n";
			cout << "How many hours were worked? ";
			cin >> hours;
		}

		cout << "\n";
		int salary = hours * wage;
		cout << "The salary of employee #" << index + 1 << " is " << salary;
	}
	else if (inputtedType == 2)
	{
		int hours;
		int wage = 15;
		int bonus;
		cout << "The payment type of this employee is salary.\n";
		cout << "How many hours were worked? ";
		cin >> hours;

		if (hours > 80 || hours < 0)
		{
			cout << "We do not accept hours greater than 80 or less than 0. Please try again \n";
			cout << "How many hours were worked? ";
			cin >> hours;
		}

		cout << "\n";
		cout << "How many bonuses were earned? ";
		cin >> bonus;

		cout << "\n";
		bonus = bonus * 100;
		int salary = (hours * wage) + bonus;
		cout << "The salary of employee #" << index + 1 << " is " << salary;
	}
	cout << "\n";
	return employee_amount;
}

// ------------------------------------------ IF NEEDED, COPY PASTE MIDTERM 2 TEXT HERE FOR SAVING AND LOADING DATA FROM FILES