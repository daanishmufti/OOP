# Advanced tic tac toe game

This is a advannced command-line based Tic-Tac-Toe game implemented in C++. The game supports two players, where player 1 is represented by 'X' and player 2 is represented by 'O'. The game ends when either player wins by getting three of their symbols in a row, column, or diagonal, or when all the cells are filled, resulting in a draw.

## Gameplay

The game starts by displaying an empty user definned grid. Players take turns inputting the row and column number where they want to place their symbol. The game checks if the input is valid (within the grid and not already occupied), and if so, places the symbol on the grid. The game then checks if the last move resulted in a win for either player. If a win is detected, the game ends and the winner is announced. If no win is detected and all cells are filled, the game ends in a draw.

## Code Structure

The game is implemented in a single C++ file (`main.cpp`). The game logic is encapsulated in a `Game` class, which has the following methods:

- `display()`: Displays the current state of the game grid.
- `AI()`: Implements the AI logic for player 2.
- `rowcheck(bool &win1r, bool &win2r)`: Checks if player 1 or player 2 has won by getting three symbols in a row.
- `cloumncheck(bool &win1c, bool &win2c)`: Checks if player 1 or player 2 has won by getting three symbols in a column.
- `diagonalcheck(bool &win1d, bool &win2d)`: Checks if player 1 or player 2 has won by getting three symbols in a diagonal.
- `draw()`: Checks if the game is a draw (all cells are filled and no win is detected).

The `main()` function contains the game loop, which alternates between player 1 and player 2. It also handles user input and game flow.

## Compilation and Execution

To compile and run the game, you can use the following command in a terminal:

```bash
g++ main.cpp -o tictactoe && ./tictactoe