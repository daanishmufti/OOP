#include <iostream>
#include <cstdlib>

using namespace::std;

struct books{
	int accession;
	string author;
	string title;
	bool issue;
};

void display(books *&temp, int size, int access) {
	for(int i = 0 ; i < size ; i++) {
		if(access == temp[i].accession) {
			cout << "Info for book number " << i+1 << endl;
			cout << "Name of Author: " << temp[i].author << endl;
			if(temp[i].issue == true) {
				cout << "Issued" << endl;
			} else {
				cout << "Not issued" << endl;
			}
			cout << "Tittle: " << temp[i].title << endl;
		}
	}
	cout << endl;
}

void add(books *&temp, int &size) {
	books *tempo = new books[size+1];
	for(int i = 0 ; i < size ; i++) {
		tempo[i] = temp[i];
	}
	cout << "Enter access num: ";
	cin >> tempo[size].accession;
	cout << "Enter author name: ";
	cin >> tempo[size].author;
	cout << "Enter book tittle: ";
	cin >> tempo[size].title;
	tempo[size].issue = false;
	temp = tempo;
	size++;
}

int authdisp(books *temp, string aut, int size)
{
	int counter;
	for(int i = 0  ; i < size ; i++)
	{
		if(aut == temp[i].author)
		{
			counter++;
		}
	}
	return counter;
}

int tittledisp(books *temp , string titl, int size)
{
	int counter;
	for(int i = 0 ; i < size ; i++)
	{
		if(titl == temp[i].title)
		{
			counter++;
		}
	}
	return counter;
}

int totaldisp(books *temp , int size, int &total)
{
	int counter = 0;
	for(int i = 0 ; i < size ; i++)
	{
		if(temp[i].issue == false)
		{
		++total;
	 	++counter;
	   }
	}
	return counter;
}

void issue(books *&temp , int size, int access, int &total)
{
	for (int i = 0 ; i < size ; i++)
	{
		if(access == temp[i].accession)
		{
			temp[i].issue = true;
			total--;
		}
	}
}

int main() {
	int size = 0;
	int total = 0;
	int q = 0;
	books *all = new books[size];
	while(q != 1) {
		cout << "Enter 1 to display book info: " << endl;
		cout << "Enter 2 to add new book: " << endl;
		cout << "Enter 3 to display book of particular author: " << endl;
		cout << "Enter 4 to display number of books of particular tittle: " << endl;
		cout << "Enter 5 to display total number of books in library: " << endl;
		cout << "Enter 6 to issue books: " << endl;
		int sel;
		cin >> sel;
		system("CLS");
		cout << endl;
		switch(sel) {
			case(1): {
				cout << "Enter access number: ";
				int access;
				cin >> access;
				display(all, size, access);
				break;
			}
			case(2): {
				add(all, size);
				break;
			}
			case(3): {
				cout << "Enter name of author: ";
				string auth;
				cin >> auth;
				cout << authdisp(all, auth, size) << endl;
				break;
			}
			case(4):{
				string tittl;
				cout << "Enter Tittle: ";
				cin >> tittl;
				cout << tittledisp(all, tittl, size) << endl;
				break;
			}
			case(5):{
				cout << totaldisp(all, size , total) << endl;
				break;
			}
			case(6):{
				cout << "Enter access number of the book to issue: ";
				int access;
				cin >> access;
				issue(all, size, access, total);
				break;
			}
	    }
	cout << "Enter 1 to quit or enter any other number to contine: ";
	cin >> q;
	system("CLS");
}
	
	return 0;
}
