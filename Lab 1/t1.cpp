#include <iostream>
#include <cstdlib>

using namespace::std;

struct data{
	int roll_num;
	string name;
	int age;
	int address;
};

void display(data* temp, int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		if(temp[i].age == 14)
		{
			cout << temp[i].name << ", ";
		}
	}
}

void even(data* temp, int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		if((temp[i].roll_num % 2) == 0 )
		{
			cout << temp[i].name << ", ";
		}
	}
}

void search_roll(data* temp, int rolln, int size)
{
	bool found;
	string tempd;
	for(int i = 0 ; i < size ; i++)
	{
		if(rolln == temp[i].roll_num)
		{
			found = true;
			tempd = temp[i].name;
			break;
		}
	}
	if(found == true)
	{
	   cout << "Roll number found: " << endl;	
	   cout << tempd;
	}
	else
	{
		cout << "Roll number not found !";
	}
	
}

int main()
{
	int size;
	cout << "Enter number of students: ";
	cin >> size;
	data* student = new data [size];
	int quit = 0;
	for(int i = 0 ; i < size ; i++)
	{
		cout << "Entery <" <<i + 1 <<">" << endl << endl;
		cout << "Enter roll number: ";
		cin >> student[i].roll_num;
		cout << "Enter name: ";
		cin >> student[i].name;
		cout << "Enter age: ";
		cin >> student[i].age;
		cout << "Enter address: ";
		cin >> student[i].address; 
		system("CLS");
	}
	while(quit != 1)
	{
	cout << "Enter 1 to print all names of students with age 14" << endl;
	cout << "Enter 2 to print all names of students with even roll numebr" << endl;
	cout << "Enter 3 to search for student by passing roll number" << endl;
	int sel;
	cin >> sel;
	switch(sel)
	{
		case(1):
		{
			system("CLS");
		   	display(student, size);
		   	break;
		}
		case(2):
		{
			system("CLS");
		    even(student, size);
		    break;
	    }
	   case(3):
	   {
	   	system("CLS");
	   	int sea;
	   	cout << "Enter the roll num: ";
	   	cin >> sea;
	   	search_roll(student, sea, size);
	   	break;
	   }
}
cout << endl;
cout << "Enter 1 to exit or any other to continue: ";
cin >> quit;
system("CLS");
}
	
	return 0;
}
