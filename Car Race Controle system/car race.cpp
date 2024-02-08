#include <iostream>
#include <conio.h> // using this library to get utilise getch feature to take user input without use of enter key
#include <stdlib.h> // using this library to get system("CLS") feature to clear screen

using namespace::std;

struct car // first structure with the car's position and points as integers
{
	int position;
	int points;
};

struct track //second structure withh call to the first to create two instances of the car structure
{
	int leng = 30; // fixed horizontal track
	car car1;
	car car2;
};

void display(track input) // a function to display the track along with the position of the cars
{
	cout << "+-----------TRACK--------------+" << endl;
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;
	cout << "|";
	for(int i = 0 ; i < input.leng ; i++) // using for loop for the track
	{
		if(i == input.car1.position)
		{
			cout << "1"; // if input position is met with coordinates of the track
		}
		else
		{
			cout << "-"; // else print track as it is ignoring position of car
		}
	}
	cout << "|" << endl;
	cout << "|                              |" << endl;
	cout << "|";
	for(int i = 0 ; i < input.leng ; i++)   
	{
		if(i == input.car2.position)
		{
			cout << "2"; // if input position is met with coordinates of the track
		}
		else
		{
			cout << "-"; // else print track as it is ignoring position of car
		}
	}
	cout << "|" << endl;
	cout << "|                              |" << endl;
	cout << "|                              |" << endl;
	cout << "+------------------------------+" << endl;
	cout << "Car 1 points: " << input.car1.points << endl;
	cout << "Car 2 points: " << input.car2.points << endl;
	
	
}

void menu() // function menu to display controles
{
	cout <<"-----------|RACE OFF|----------- \t (Made by Daanish Ahmad Mufti)" << endl << endl;
    cout << "Menu: " << endl << endl;
    cout << "Player 1:  press <a> for left, press <d> for right" << endl;
    cout << "Player 2: press <j> for left, press <l> for right" << endl << endl;
    cout << "Press <q> whenever it is feasible to quit" << endl << endl;
}

int main()
{
	track daanish; // structure instance called daanish
	daanish.car1.points = 0; // initialising the structure instance values to 0
	daanish.car2.points = 0;
	daanish.car1.position = 0;
	daanish.car2.position = 0;
	int count1, count2;
	menu(); // call function menu to display controls
	char input;
	display(daanish);
	while(input != 'q') // utilise loop and prompt in end to user to enter input to quit or continue
	{
			if(daanish.car1.points < 0 || daanish.car2.points < 0)
		{
			cout << endl;
			cout << "Negative points does not exit !";
			break;
		}
		input = getch(); // utilising getch funtion to get input without pressing enter for each input
		if(input == 'd') // d key pressed 
		{
			if(daanish.car1.position >= 29) // if car goes out of bounds meaning above 30 horizontal spaces , rest to 0
			{
				daanish.car1.position = 0;
				++daanish.car1.points; 
			}
			else
			{
				++daanish.car1.position; // increment the postion
			}
		}
		else if(input == 'a') // a key pressed 
		{
			if(daanish.car1.position <= 0) // if car goes out of bounds meaning below 30 horizontal spaces , rest to 30
			{
				daanish.car1.position = 29;
				--daanish.car1.points; 
			}
			else
			{
				--daanish.car1.position; // decrement the postion
			}
		}
		else if(input == 'l') // l key pressed 
		{
			if(daanish.car2.position >=29) // if car goes out of bounds meaning above 30 horizontal spaces , rest to 0
			{
				daanish.car2.position = 0;
				++daanish.car2.points;
			}
			else
			{
				++daanish.car2.position; // increment the postion
			}
		}
		else if(input == 'j') // j key pressed 
		{
			if(daanish.car2.position <= 0) // if car goes out of bounds meaning below 30 horizontal spaces , rest to 30
			{
				daanish.car2.position = 29;
				--daanish.car2.points; 
			}
			else
			{
				--daanish.car2.position; // decrement the postion
			}
		}
		else
		{
			cout << "Wrong Input ! Please Enter again." << endl << endl;
		}
		system("CLS"); // clear screen 
		menu(); // call function menu to display controls
		display(daanish); // show track by passing instance of structure with modified variable 
	}
	
	return 0;
}
