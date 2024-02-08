#include <iostream>
#include <cstdlib>

using namespace::std;

union Employeedetails{
	float salary;
};

struct Employee{
	string name;
	int id;
	string department;
	Employeedetails sal;
};

void display(Employee temp, int size)
{
		cout << "Details of Employee " << endl;
		cout << "Name: " << temp.name << endl;
		cout << "id: " << temp.id << endl;
		cout << "Department: " << temp.department << endl;
}

void search_id(Employee *temp, int size, int iid)
{
	for(int i = 0 ; i < size ; i++)
	{
		if(iid == temp[i].id)
		{
			cout << "Id found: " << temp[i].id << endl;
			display(temp[i], size);
			break;
		}
	}
}

void totalsal(Employee *temp, int size)
{
	float total;
	for(int i = 0 ; i < size ; i++)
	{
		total += temp[i].sal.salary;
 	}
 	cout <<"The total salary is: ";
 	cout << total;
}

void add(Employee *temp, int &size) {
	Employee *tempo = new Employee[size+1];
	for(int i = 0 ; i < size ; i++) {
		tempo[i] = temp[i];
	}
	temp = tempo;
	cout << "Data for Employee " << endl;
		cout << "Enter name: ";
		cin >> temp[size].name;
	    cout << "Enter id: ";
	    cin >> temp[size].id;
	    cout << "Enter department: ";
	    cin >> temp[size].department;
	    cout << "Enter salary: ";
	    cin >> temp[size].sal.salary;
	    system("CLS");
	size++;
}

int main()
{
	int size;
	Employee* all = new Employee[size];
	int quit = 0;
	while(quit != 1)
	{
		int sel;
		cout << "Enter 1 to add new Employee record: " << endl;
		cout << "Enter 2 to display information according to id: " << endl;
		cout << "Enter 3 to display total salary of employees: " << endl;
		cin >> sel;
		switch(sel)
		{
			case(1):
				{
					system("CLS");
					add(all, size);
					break;
				}
			case(2):
				{
					system("CLS");
					int id;
					cin >> id;
					system("CLS");
					cout << "Enter the id you want to search for: ";
					search_id(all, size + 1 , id);
					break;
				}
			case(3):
				{
					system("CLS");
					void (*ptr)(Employee *, int) = &totalsal;
					totalsal(all, size + 1);
					break;
				}
		 } 
		 cout << endl << "Enter 1 to quit or enter any other key to continue: ";
		 cin >> quit;
		 system("CLS");
	}
	
	
	return 0;
}
