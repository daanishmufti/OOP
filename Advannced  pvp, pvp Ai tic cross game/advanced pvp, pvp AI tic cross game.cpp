#include<iostream>
#include<cstdlib> // used: Random fucntion srand, for clearing screen using system("CLS")
#include<ctime> // used: Random funtion random(time(NULL))
#include<conio.h> // used for getting input without requiring user hit enter getch()

using namespace::std;

class strategicfive
{
	private:
		int dimension; // constant integer that has variable dimension
	    char **array; // utilising double pointer so I can create 2d array as I cannot create it normally, have to utilise dynamic memory alloc
	public:
		strategicfive(int dim) : dimension(dim) // constructor with variable dimension equal variable
		{
			dimension = dim;
			array = new char*[dimension]; // Use dynamic memory alloc to assign array 
			for(int i = 0 ; i < dimension ; i++)
			{
				array[i] = new char[dimension]; // Use dynamic memory alloc to create and array of an array, in simple words a 2d array
				for(int j = 0 ; j < dimension ; j++)
				{
					array[i][j] = '-'; // initialise array with -
				}
			}
		}
		
		void display() // This function will display the changes done to the array and display the whole game board
		{
			cout << "      ";
			for(int i = 0 ; i < dimension ; i++)
			{
				cout << i << "     " ;
			}
			cout << endl << endl;
			for(int i = 0 ; i < dimension ; i++)
			{
				cout << " " << i << "  ";
				for(int j = 0 ; j < dimension ; j++)
				{
					if(array[i][j] == '-')
					{
						cout << "| - | ";
					}
					else if(array[i][j] == '0')
					{
						cout << "\033[" << 31 << "m" << "| 0 | " << "\033[0m";
					}
					else if(array[i][j] == 'X')
					{
						cout << "\033[" << 32 << "m" << "| X | " << "\033[0m";
					}
					else
					{
						cout << "| E |";
					}
				}
				cout << endl << endl << endl;
			}
		}
		
	   void inputp1() // This function receives input from palyer 1 for the row number and column number as well as incorporate a check to see if the row and column number is out of bounds or occupied
       {
       	int r1, c1;
       	bool check;
       	while(check != true)
       	{
       	display();
       	cout << "\033[" << 32 << "m" << "Player 1 turn "<< "\033[0m" << endl << endl;
		cout <<"Enter row number: ";
       	cin >> r1;
       	cout << "Enter column number: ";
       	cin >> c1;
       	bool inlcheck = false;
       	do
       	{
       	if((r1 > dimension - 1 || r1 < 0) || (c1 > dimension - 1 || c1 < 0)) // Check if input of player 1 is out of bounds in terms of the row and column
       	{
       		inlcheck = false;
       		cout << "Wrong row and colum numbers. Please Enter again "  << endl << endl;
       		cout <<"Enter row number: ";
       	    cin >> r1;
       	    cout << "Enter column number: ";
       	    cin >> c1;
		   }
		   else
		   {
		   	inlcheck = true;
		   }
      	}while(inlcheck == false);
		if((array[r1][c1] != 'X') && (array[r1][c1] != '0'))
		{
			array[r1][c1] = 'X';
			check = true;
		}
		else
		{
			system("CLS");
			cout << "The Space is Occupied, please select another row and coulumn !" << endl;
			check = false;
		}
	   }
     }
     
      void inputp2()// This function receives input from palyer 1 for the row number and column number as well as incorporate a check to see if the row and column number is out of bounds or occupied
       {
       	int r2, c2;
       	bool check;
       	while(check != true)
       	{
       	display();
       	cout << "\033[" << 31 << "m" << "Player 2 turn "<< "\033[0m" << endl << endl;
		cout <<"Enter row number: ";
       	cin >> r2;
       	cout << "Enter column number: ";
       	cin >> c2;
       	bool inlcheck = false;
       	do
       	{
       	if((r2 > dimension - 1 || r2 < 0) || (c2 > dimension - 1 || c2 < 0)) // Check if input of player 1 is out of bounds in terms of the row and column
       	{
       		inlcheck = false;
       		cout << "Wrong row and colum numbers. Please Enter again "  << endl << endl;
       		cout <<"Enter row number: ";
       	    cin >> r2;
       	    cout << "Enter column number: ";
       	    cin >> c2;
		   }
		   else
		   {
		   	inlcheck = true;
		   }
      	}while(inlcheck == false);
		if((array[r2][c2] != 'X') && (array[r2][c2] != '0'))
		{
			array[r2][c2] = '0';
			check = true;
		}
		else
		{
			system("CLS");
			cout << "The Space is Occupied, please select another row and coulumn !" << endl;
			check = false;
		}
	   }
     }
     
     void AI() //////////////////////////////////////////////////////////////AI
       {
       	int r2, c2;
       	bool check;
       	int dim = dimension - 1;
       	while(check != true)
       	{
       	display();
		r2 = rand() % dim;
       	c2 = rand() % dim;
       	bool inlcheck = false;
       	do
       	{
       	if((r2 > dimension - 1 || r2 < 0) || (c2 > dimension - 1 || c2 < 0)) // Check if input of AI is out of bounds in terms of the row and column
       	{
       		r2 = rand() % dim;
       		c2 = rand() % dim;
       		inlcheck = false;
		   }
		   else
		   {
		   	inlcheck = true;
		   }
      	}while(inlcheck == false);
		if((array[r2][c2] != 'X') && (array[r2][c2] != '0'))
		{
			array[r2][c2] = '0';
			check = true;
		}
		else
		{
			system("CLS");
			check = false;
		}
	   }
     } //////////////////////////////////////////////////////////////////////////////////////AI
     
     void rowcheck(bool &p1w, bool &p2w) // by implementing 2 for loop we iterate through the rows and columns and have conditional statements that help count the number of players symbol on the board in row order, if there is any space or other character between 5 player symbols the check fails, if no interuptions between the 5 symbols the check passes 
     {
     	int r1, r2;
     	for(int i = 0 ; i < dimension ; i++)
     	{
     		int r1 = 0, r2 = 0;
     		for(int j = 0 ; j < dimension ; j++)
     		{
     			if(array[i][j] == 'X')
     			{
     				++r1;
     				if(r1 == 5)
					 {
					 	p1w = true;
						 return;
						 }
				 }
				 else
				 {
				 	r1 = 0;
				 }
				 if(array[i][j] == '0')
				 {
				 	++r2;
					 if(r2 == 5)
					 {
					 p2w = true;
					 return;
					 }
				 }
				 else
				 {
				 	r2 = 0;
				 }
			 }
		 }
	 }
	 
	 void cloumncheck(bool &p1w, bool &p2w) // by implementing 2 for loop we iterate through the rows and columns and have conditional statements that help count the number of players symbol on the board in column order, if there is any space or other character between 5 player symbols the check fails, if no interuptions between the 5 symbols the check passes
	 {
	 	int c1, c2;
	 	for(int i = 0 ; i < dimension ; i++)
	 	{
	 		int c1 = 0, c2 = 0;
	 		for(int j = 0 ; j < dimension ; j++)
	 		{
	 			if(array[j][i] == 'X')
	 			{
	 				++c1;
	 				if(c1 == 5)
	 				{
	 					p1w = true;
	 					return;
					 }
					 c2 = 0;
				 }
				else if(array[j][i] == '0')
				{
					++c2;
					if(c2 == 5)
					{
						p2w = true;
						return;
					}
					c1 = 0;
				}
				else
				{
					c1 = 0;
					c2 = 0;
				}
			 }
		 }
	 }
	 
	 void diagonalcheck(bool &p1w, bool &p2w) 
	 {
	   for(int i = 0 ; i < dimension ; i++) // by implementing 3 for loop we iterate through the diagonals and have conditional statements that help count the number of players symbol on the board in diagonal order, if there is any space or other character between 5 player symbols the check fails, if no interuptions between the 5 symbols the check passes
	   {
	   	for(int j = 0 ; j < dimension ; j++)
	   	{
	   		int c1 = 0 , c2 = 0;
	   		for (int k = 0; i + k < dimension && j + k < dimension; k++)
	   		{
	   			if(array[i + k][j + k] == 'X')
	   			{
	   				++c1;
	   				if(c1 == 5)
	   				{
	   					p1w = true;
	   					return;
					   }
					   c2 = 0;
				   }
				   else if(array[i + k][j + k] == '0')
				   {
				   	++c2;
				   	if(c2 == 5)
				   	{
				   		p2w = true;
				   		return;
					   }
					   c1 = 0;
				   }
			   }
		   }
	   }
	   
	   for(int i = 0 ; i < dimension ; i++) // by implementing 3 for loop we iterate through the antidiagonals and have conditional statements that help count the number of players symbol on the board in antidiagonal order, if there is any space or other character between 5 player symbols the check fails, if no interuptions between the 5 symbols the check passes
	   {
	   	for(int j = dimension - 1 ; j >= 0 ; j--) 
	   	{
	   		int c1 = 0 , c2 = 0;
	   		for (int k = 0; i + k < dimension && j - k >= 0; k++)
	   		{
	   			if(array[i + k][j - k] == 'X')
	   			{
	   				++c1;
	   				if(c1 == 5)
	   				{
	   					p1w = true;
	   					return;
					   }
					   c2 = 0;
				   }
				   else if(array[i + k][j - k] == '0')
				   {
				   	++c2;
				   	if(c2 == 5)
				   	{
				   		p2w = true;
				   		return;
					   }
					   c1 = 0;
				   }
			   }
		   }
	   }
	 }
	  
	 bool draw() // checks if the board is filled return true else if board is not full return false
	 {
	 	for(int i = 0 ; i < dimension ; i++) 
	 	{
	 		for(int j = 0 ; j < dimension ; j++)
	 		{
	 			if(array[i][j] != 'X' && array[i][j] != '0')
	 			{
	 				return false;
				 }
			 }
		 }
		 return true;
	 }
	 
};

void menu(char &sel, int &mode) // Function for the menu interface
{
    cout << "\033[" << 34 << "m" << "\t\t\t  _             _   ____________     __          _   _                _          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  |\\           /|   |               |  \\         |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  | \\         / |   |               |   \\        |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  |  \\       /  |   |               |    \\       |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |   \\     /   |   |               |     \\      |   |                |          "<< "\033[0m" << endl; 
	cout << "\033[" << 31 << "m" <<"\t\t\t  |    \\   /    |   |___________    |      \\     |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |     \\ /     |   |               |       \\    |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |             |   |               |        \\   |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |               |         \\  |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |               |          \\ |    \\              /           "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |____________   |           \\|     \\____________/            "<< "\033[0m" << endl;
	cout << endl << endl << endl;
	cout << "\033[" << 34 << "m" << "Made By Daanish Ahmad Mufti "<< "\033[0m" << endl;
	cout << endl << "\t\t\t\t\t     Select out of two modes" << endl;
	cout << "\t\t\t Press" << "\033[" << 31 << "m" << " w "<< "\033[0m" << " to move up," ;
	cout << "\033[" << 31 << "m" << " s "<< "\033[0m" << " to move down and" << "\033[" << 31 << "m" << " Enter "<< "\033[0m" <<"key to select mode" << endl << endl;
	cout << "\t\t\t\t\t\t< Player vs Player >" << endl << endl;
	cout << "\t\t\t\t\t\t  < Player vs AI >" << endl;
	while ((sel != 13) || (mode != 1 && mode != 2))
	{
	sel = getch();
	if(sel == 'w')
	{
		system("CLS");
		 cout << "\033[" << 34 << "m" << "\t\t\t  _             _   ____________     __          _   _                _          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  |\\           /|   |               |  \\         |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  | \\         / |   |               |   \\        |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  |  \\       /  |   |               |    \\       |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |   \\     /   |   |               |     \\      |   |                |          "<< "\033[0m" << endl; 
	cout << "\033[" << 31 << "m" <<"\t\t\t  |    \\   /    |   |___________    |      \\     |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |     \\ /     |   |               |       \\    |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |             |   |               |        \\   |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |               |         \\  |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |               |          \\ |    \\              /           "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |____________   |           \\|     \\____________/            "<< "\033[0m" << endl;
	cout << endl << endl << endl;
	cout << "\033[" << 34 << "m" << "Made By Daanish Ahmad Mufti "<< "\033[0m" << endl;
	cout << endl << "\t\t\t\t\t     Select out of two modes" << endl;
	cout << "\t\t\t Press" << "\033[" << 31 << "m" << " w "<< "\033[0m" << " to move up," ;
	cout << "\033[" << 31 << "m" << " s "<< "\033[0m" << " to move down and" << "\033[" << 31 << "m" << " Enter "<< "\033[0m" <<"key to select mode" << endl << endl;
	cout << "\t\t\t\t\t       "<< "\033[" << 33 << "m" << "<  Player vs Player  >" << "\033[0m" << endl << endl;
	cout << "\t\t\t\t\t\t  < Player vs AI >" << endl;
		mode = 1;
	}
	else if(sel == 's')
	{
		system("CLS");
		 cout << "\033[" << 34 << "m" << "\t\t\t  _             _   ____________     __          _   _                _          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  |\\           /|   |               |  \\         |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  | \\         / |   |               |   \\        |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 34 << "m" <<"\t\t\t  |  \\       /  |   |               |    \\       |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |   \\     /   |   |               |     \\      |   |                |          "<< "\033[0m" << endl; 
	cout << "\033[" << 31 << "m" <<"\t\t\t  |    \\   /    |   |___________    |      \\     |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |     \\ /     |   |               |       \\    |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 31 << "m" <<"\t\t\t  |             |   |               |        \\   |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |               |         \\  |   |                |          "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |               |          \\ |    \\              /           "<< "\033[0m" << endl;
	cout << "\033[" << 33 << "m" <<"\t\t\t  |             |   |____________   |           \\|     \\____________/            "<< "\033[0m" << endl;
	cout << endl << endl << endl;
	cout << "\033[" << 34 << "m" << "Made By Daanish Ahmad Mufti "<< "\033[0m" << endl;
	cout << endl << "\t\t\t\t\t     Select out of two modes" << endl;
	cout << "\t\t\t Press" << "\033[" << 31 << "m" << " w "<< "\033[0m" << " to move up," ;
	cout << "\033[" << 31 << "m" << " s "<< "\033[0m" << " to move down and" << "\033[" << 31 << "m" << " Enter "<< "\033[0m" <<"key to select mode" << endl << endl;
	cout << "\t\t\t\t\t\t< Player vs Player >" << endl << endl;
	cout << "\t\t\t\t\t\t "<< "\033[" << 33 << "m" << "<  Player vs AI  >" << "\033[0m" << endl << endl;
		mode = 2;
	}
	else
	{
		cout << endl << "\033[" << 31 << "m" << "\t\t\t\t\t\t  Wrong selection !" << "\033[0m" << endl;
	}
}
}

int main()
{
	int mode;
	char sell;
	menu(sell, mode);
	if(mode == 1)
	{
	system("CLS");
	int size;
	bool win1r, win2r, win1c, win2c, win1d, win2d, setsize;
	cout << "Enter the Dimensions you want for the board: ";
	size = getch();
	size -= '0'; // convert character to an integer value
	cout << endl;
	while(setsize != true) 
	{
	if((size >= 10) || (size < 5)) // check that only lets user set the dimensions of the key board between 5 and 10
	{
		setsize = false;
		system("CLS");
		cout << "You cannot set the size greater than 10 or less than 5 " << endl << endl;
		cout << "Enter the Dimensions you want for the board: ";
	    size = getch();
      	size -= '0'; // convert character to an integer value
	    cout << endl;
	}
	else
	{
		setsize = true;
	}
    }
    system("CLS");
	strategicfive game(size); // create the instance of the class and passing size
	int q = 1;
    while(q == 1)
    {
    system("CLS");
	game.inputp1(); // call input funtion for user 1
	game.display(); // call display function
	game.rowcheck(win1r, win2r); // utilise the row check
	game.cloumncheck(win1c, win2c); // utilise the coulumn check
	game.diagonalcheck(win1d, win2d); // utilise the diagoanl check
	if(win1r == true || win1c == true || win1d == true) // condition if any of the checks are true for player 1
	{
		system("CLS");
		cout << "\t\t---------   |                 -          \\       /   ---------    -----------         |" << endl;
		cout << "\t\t|        |  |                /  \\         \\     /    |            |         |         |" << endl;
		cout << "\t\t|        |  |               /    \\         \\   /     |            |         |         |" << endl;
		cout << "\t\t|--------   |              /      \\         \\ /      |________    |_________|         |" <<endl;
		cout << "\t\t|           |             /________\\         |       |            |    \\              |" << endl;
		cout << "\t\t|           |            /          \\        |       |            |     \\             |" << endl;
		cout << "\t\t|           |________   /            \\       |       |________    |      \\            |" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 32 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	else if(win2r == true || win2c == true || win2d == true) // condition if any of the checks are true for palyer 2
	{
		system("CLS");
		cout << "\t\t---------   |                 -          \\       /   ---------    -----------         --------" << endl;
		cout << "\t\t|        |  |                /  \\         \\     /    |            |         |                |" << endl;
		cout << "\t\t|        |  |               /    \\         \\   /     |            |         |        ________|" << endl;
		cout << "\t\t|--------   |              /      \\         \\ /      |________    |_________|       |" <<endl;
		cout << "\t\t|           |             /________\\         |       |            |    \\            |" << endl;
		cout << "\t\t|           |            /          \\        |       |            |     \\           |" << endl;
		cout << "\t\t|           |________   /            \\       |       |________    |      \\          ----------" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 31 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	if(((game.draw() == true) && (win1r != true || win1c != true || win1d != true) && (win2r != true || win2c != true || win2d != true))) // condition if the checks of player 1 and player 2 are false and the draw function is true
	{
		system("CLS");
		cout << "\033[" << 35 << "m" << "It is a Draw Neither player WON <d> " << "\033[0m";
		break;
	}
	
	system("CLS");
	game.inputp2(); // call input funtion for user 2
	game.display(); // call display function
	game.rowcheck(win1r, win2r); // utilise the row check
	game.cloumncheck(win1c, win2c); // utilise the coulumn check
	game.diagonalcheck(win1d, win2d); // utilise the diagoanl check
	if(win1r == true || win1c == true || win1d == true) // condition if any of the checks are true for player 1
	{
		system("CLS");
		cout << "\t\t---------   |                 -          \\       /   ---------    -----------         |" << endl;
		cout << "\t\t|        |  |                /  \\         \\     /    |            |         |         |" << endl;
		cout << "\t\t|        |  |               /    \\         \\   /     |            |         |         |" << endl;
		cout << "\t\t|--------   |              /      \\         \\ /      |________    |_________|         |" <<endl;
		cout << "\t\t|           |             /________\\         |       |            |    \\              |" << endl;
		cout << "\t\t|           |            /          \\        |       |            |     \\             |" << endl;
		cout << "\t\t|           |________   /            \\       |       |________    |      \\            |" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 32 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	else if(win2r == true || win2c == true || win2d == true)
	{
		system("CLS");
		cout << "---------   |                 -          \\       /   ---------    -----------         --------" << endl;
		cout << "|        |  |                /  \\         \\     /    |            |         |                |" << endl;
		cout << "|        |  |               /    \\         \\   /     |            |         |        ________|" << endl;
		cout << "|--------   |              /      \\         \\ /      |________    |_________|       |" <<endl;
		cout << "|           |             /________\\         |       |            |    \\            |" << endl;
		cout << "|           |            /          \\        |       |            |     \\           |" << endl;
		cout << "|           |________   /            \\       |       |________    |      \\          ----------" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 31 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	if(((game.draw() == true) && (win1r != true || win1c != true || win1d != true) && (win2r != true || win2c != true || win2d != true)))
	{
		system("CLS");
		cout << "\033[" << 35 << "m" << "It is a Draw Neither player WON <d> " << "\033[0m";
		break;
	}
}
}
else if(mode == 2)
{
	system("CLS");
	int size;
	bool win1r, win2r, win1c, win2c, win1d, win2d, setsize;
	cout << "Enter the Dimensions you want for the board: ";
	size = getch();
	size -= '0'; // convert character to an integer value
	cout << endl;
	while(setsize != true) 
	{
	if((size >= 11) || (size < 5))
	{
		setsize = false;
		system("CLS");
		cout << "You cannot set the size greater than 10 or less than 5 " << endl << endl;
		cout << "Enter the Dimensions you want for the board: ";
	    size = getch();
      	size -= '0'; // convert character to an integer value
	    cout << endl;
	}
	else
	{
		setsize = true;
	}
    }
    system("CLS");
	strategicfive game(size);
	int q = 1;
    while(q == 1)
    {
    system("CLS");
	game.inputp1();
	game.display();
	game.rowcheck(win1r, win2r);
	game.cloumncheck(win1c, win2c);
	game.diagonalcheck(win1d, win2d);
	if(win1r == true || win1c == true || win1d == true) // condition if any of the checks are true for player 1
	{
		system("CLS");
		cout << "\t\t---------   |                 -          \\       /   ---------    -----------         |" << endl;
		cout << "\t\t|        |  |                /  \\         \\     /    |            |         |         |" << endl;
		cout << "\t\t|        |  |               /    \\         \\   /     |            |         |         |" << endl;
		cout << "\t\t|--------   |              /      \\         \\ /      |________    |_________|         |" <<endl;
		cout << "\t\t|           |             /________\\         |       |            |    \\              |" << endl;
		cout << "\t\t|           |            /          \\        |       |            |     \\             |" << endl;
		cout << "\t\t|           |________   /            \\       |       |________    |      \\            |" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 32 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	else if(win2r == true || win2c == true || win2d == true)
	{
		system("CLS");
		cout << "\t\t---------   |                 -          \\       /   ---------    -----------         --------" << endl;
		cout << "\t\t|        |  |                /  \\         \\     /    |            |         |                |" << endl;
		cout << "\t\t|        |  |               /    \\         \\   /     |            |         |        ________|" << endl;
		cout << "\t\t|--------   |              /      \\         \\ /      |________    |_________|       |" <<endl;
		cout << "\t\t|           |             /________\\         |       |            |    \\            |" << endl;
		cout << "\t\t|           |            /          \\        |       |            |     \\           |" << endl;
		cout << "\t\t|           |________   /            \\       |       |________    |      \\          ----------" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 31 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	if(((game.draw() == true) && (win1r != true || win1c != true || win1d != true) && (win2r != true || win2c != true || win2d != true))) // condition if the checks of player 1 and player 2 are false and the draw function is true
	{
		system("CLS");
		cout << "\033[" << 35 << "m" << "It is a Draw Neither player WON <d> " << "\033[0m";
		break;
	}
	
	system("CLS");
	game.AI();
	game.display();
	game.rowcheck(win1r, win2r);
	game.cloumncheck(win1c, win2c);
	game.diagonalcheck(win1d, win2d);
	if(win1r == true || win1c == true || win1d == true) // condition if any of the checks are true for player 1
	{
		system("CLS");
		cout << "\t\t---------   |                 -          \\       /   ---------    -----------         |" << endl;
		cout << "\t\t|        |  |                /  \\         \\     /    |            |         |         |" << endl;
		cout << "\t\t|        |  |               /    \\         \\   /     |            |         |         |" << endl;
		cout << "\t\t|--------   |              /      \\         \\ /      |________    |_________|         |" <<endl;
		cout << "\t\t|           |             /________\\         |       |            |    \\              |" << endl;
		cout << "\t\t|           |            /          \\        |       |            |     \\             |" << endl;
		cout << "\t\t|           |________   /            \\       |       |________    |      \\            |" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 32 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	else if(win2r == true || win2c == true || win2d == true) // condition if any of the checks are true for player 2
	{
		system("CLS");
		cout << "---------   |                 -          \\       /   ---------    -----------         --------" << endl;
		cout << "|        |  |                /  \\         \\     /    |            |         |                |" << endl;
		cout << "|        |  |               /    \\         \\   /     |            |         |        ________|" << endl;
		cout << "|--------   |              /      \\         \\ /      |________    |_________|       |" <<endl;
		cout << "|           |             /________\\         |       |            |    \\            |" << endl;
		cout << "|           |            /          \\        |       |            |     \\           |" << endl;
		cout << "|           |________   /            \\       |       |________    |      \\          ----------" << endl;
		cout << endl << endl << endl;
		cout << "\033[" << 31 << "m" << "\t\t\t\t\t\t\tWINNER" << "\033[0m" ;
		break;
	}
	if(((game.draw() == true) && (win1r != true || win1c != true || win1d != true) && (win2r != true || win2c != true || win2d != true))) // condition if the checks of player 1 and player 2 are false and the draw function is true
	{
		system("CLS");
		cout << "\033[" << 35 << "m" << "It is a Draw Neither player WON <d> " << "\033[0m";
		break;
	}
}
}
	return 0;
}
