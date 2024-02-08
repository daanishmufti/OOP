#include <iostream>
#include <cstdlib>

using namespace::std;

struct place {
    int fries = 0;
    int pizza = 0;
    int burger = 0;
    int pasta = 0;
    int coke = 0;
    int water = 0;
    bool status;
    double total;
    int order;
};

void bill(place* temp, int ordernum) 
{
    if(temp[ordernum].fries > 0)
	{
		cout << "< Fries > " << endl;
		cout << "Amount: " << temp[ordernum].fries << endl << endl;
	}
	if(temp[ordernum].burger > 0)
	{
		cout << "< Burger > " << endl;
		cout << "Amount: " << temp[ordernum].burger << endl << endl;
	}
	if(temp[ordernum].pizza > 0)
	{
		cout << "< Pizza > " << endl;
		cout << "Amount: " << temp[ordernum].pizza << endl << endl;
	}
	if(temp[ordernum].pasta > 0)
	{
		cout << "< Pasta > " << endl;
		cout << "Amount: " << temp[ordernum].pasta << endl << endl;
	}
	if(temp[ordernum].coke > 0)
	{
		cout << "< Coke > " << endl;
		cout << "Amount: " << temp[ordernum].coke << endl << endl;
	}
	if(temp[ordernum].water > 0)
	{
		cout << "< water > " << endl;
		cout << "Amount: " << temp[ordernum].water << endl << endl;
	}
	cout << "The total bill is: " << temp[ordernum].total << endl;
	
	
}

void pending(place *temp,int size)
{
	for (int i= 0 ; i < size ; i++)
	{
			if(temp[i].status == true)
			{
				cout << "Order " << i+1 << " Completed" << endl;
			}
			else
			{
				cout << "Order " << i+1 << " Pending" << endl;
		}
	}
}

void complete(place *temp,int ordernum,int size)
{
	for(int i = 0 ; i < size ; i++)
	{
		if(ordernum == temp[i].order)
		{
			temp[i].status = true;
		}
	}
}

void showordernum(place *temp, int ordernum)
{
	cout << "----------Order-Number-"<< ordernum + 1 << "----------" << endl;

	if(temp[ordernum].fries > 0)
	{
		cout << "< Fries > " << endl;
		cout << "Amount: " << temp[ordernum].fries << endl << endl;
	}
	if(temp[ordernum].burger > 0)
	{
		cout << "< Burger > " << endl;
		cout << "Amount: " << temp[ordernum].burger << endl << endl;
	}
	if(temp[ordernum].pizza > 0)
	{
		cout << "< Pizza > " << endl;
		cout << "Amount: " << temp[ordernum].pizza << endl << endl;
	}
	if(temp[ordernum].pasta > 0)
	{
		cout << "< Pasta > " << endl;
		cout << "Amount: " << temp[ordernum].pasta << endl << endl;
	}
	if(temp[ordernum].coke > 0)
	{
		cout << "< Coke > " << endl;
		cout << "Amount: " << temp[ordernum].coke << endl << endl;
	}
	if(temp[ordernum].water > 0)
	{
		cout << "< water > " << endl;
		cout << "Amount: " << temp[ordernum].water << endl << endl;
	}

    if(temp[ordernum].status == true)
    {
    	cout << "Status: <Completed>" << endl << endl;
	}
    else
    {
    	cout << "status: <Pending>" << endl << endl;
	}
}

void addorder(place *&temp, int &size, int &od) {
	place *tempo = new place[size+1];
	for(int i = 0 ; i < size ; i++) {
		tempo[i] = temp[i];
    }
	temp = tempo;
    od++;
    temp[size].order = od;
    temp[size].status = false;
    int input, q;
    while(q != 1)
    {
	cout << "Enter the type of order (1-6): ";
    cin >> input;
    switch (input) {
        case 1: {
            cout << "Enter the amount of fries you want: ";
            cin >> temp[size].fries;
            temp[size].total += 20 * temp[size].fries;
            break;
        }
        case 2: {
            cout << "Enter the amount of burgers you want: ";
            cin >> temp[size].burger;
            temp[size].total += 50 * temp[size].burger;
            break;
        }
        case 3: {
            cout << "Enter the amount of pizza you want: ";
            cin >> temp[size].pizza;
            temp[size].total += 80 * temp[size].pizza;
            break;
        }
        case 4: {
            cout << "Enter the amount of pasta you want: ";
            cin >> temp[size].pasta;
            temp[size].total += 60 * temp[size].pasta;
            break;
        }
        case 5: {
            cout << "Enter the amount of coke you want: ";
            cin >> temp[size].coke;
            temp[size].total += 15 * temp[size].coke;
            break;
        }
        case 6: {
            cout << "Enter the amount of water you want: ";
            cin >> temp[size].water;
            temp[size].total += 5 * temp[size].water;
            break;
        }
    }
    cout << endl << "Enter 1 to stop ordering or any other number to continue: ";
    cin >> q;
 }
	size++;
}

void menudisp() {
    cout << "Enter 1 for fries <20$> per: " << endl;
    cout << "Enter 2 for burger <50$> per: " << endl;
    cout << "Enter 3 for pizza: <80$> per" << endl;
    cout << "Enter 4 for pasta: <60$> per" << endl;
    cout << "Enter 5 for coke: <15$> per" << endl;
    cout << "Enter 6 for water: <5$> per" << endl;
}

int main()
{
	int size = 0;
	int od = 0;
	int q;
	place *temp = new place[size];
	while(q != 1)
	{
		int in;
        cout << "Enter 1 for add new order: " << endl;
        cout << "Enter 2 to print bill: " << endl;
        cout << "Enter 3 to complete order: " << endl;
        cout << "Enter 4 to check for pending orders: " << endl;
        cout << "Enter 5 to display the order by number: " << endl;
        cin >> in;
        system("CLS");
        switch (in) {
            case 1: {
            	menudisp();
            	addorder(temp, size, od);
                break;
            }
            case 2: {
            	int num;
            	cout << "Enter the order num to print bill: ";
            	cin >> num;
            	void (*ptr)(place *, int) = &bill;
            	bill(temp, num - 1);
                break;
            }
            case 3: {
            	cout << "Enter order number to mark complete: ";
            	int num;
            	cin >> num;
            	void (*ptr)(place *, int, int) = &complete;
            	complete(temp, num, size);
                break;
            }
            case 4: {
            	void (*ptr)(place *, int) = &pending;
            	pending(temp, size);
                break;
            }
            case 5: {
            	int num;
            	cout << "Enter the order num to show the order: ";
            	cin >> num;
            	void (*ptr)(place *, int) = &showordernum;
            	showordernum(temp, num - 1);
                break;
				break;
			}
            
        }
        cout << "Enter 1 to quit or any other number to continue: ";
        cin >> q;
        system("CLS");
    }
	return 0;
}
