#include <iostream>
#include <cstdlib>

using namespace::std;

struct Employee
{
	string name;
	float salary;
	int hours;
};

void store(Employee *temp, int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		cout << "For Employee " << i+1 << endl;
		cout << "Enter Name: ";
		cin >> temp[i].name;
		cout << "Enter salary: ";
		cin >> temp[i].salary;
		cout << "Enter hours: ";
		cin >> temp[i].hours;
		system("CLS");
	}
}

void increase(Employee *temp, int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		if(temp[i].hours < 8)
		{
			temp[i].salary += 50;
		}
		else if(temp[i].hours >= 8 && temp[i].hours < 10)
		{
			temp[i].salary += 100;
		}
		else if(temp[i].hours >= 12)
		{
			temp[i].salary += 150;
		}
		else
		{
			cout << "Invalid !";
		}
	}
}

void display(Employee *temp, int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		cout << "For Employee " << i+1 << endl;
		cout << "Name: " << temp[i].name << endl;
		cout << "salary: " << temp[i].salary << endl << endl;
	}
}

int main()
{
	int size;
	cout << "Enter number of Employees: ";
	cin >> size;
	system("CLS");
	Employee *all = new Employee[size];
	store(all,size);
	increase(all, size);
	display(all, size);
	
	
	return 0;
}
