# Tic Tac Toe Game

## 🎮 Overview
This is a simple **Tic Tac Toe** game implemented in C++. It allows two players to play the classic game in the terminal. The game board updates dynamically, and the program ensures valid moves while checking for winners or a draw.

## 🛠 Features
- **Two-player mode** (Player 1: `X`, Player 2: `O`)
- **Graphical board display** using ASCII characters
- **Input validation** to prevent invalid or duplicate moves
- **Automatic win detection** (rows, columns, and diagonals)
- **Draw detection** when the board is full

## 🚀 How to Run
1. **Compile the code** using a C++ compiler (e.g., g++):
   ```sh
   g++ tic_tac_toe.cpp -o tic_tac_toe
   ```
2. **Run the executable**:
   ```sh
   ./tic_tac_toe
   ```

## 🎲 How to Play
1. The game starts with an empty 3×3 board.
2. Players take turns selecting a position (1-9) corresponding to the board layout:
   ```
   1 | 2 | 3
   ---------
   4 | 5 | 6
   ---------
   7 | 8 | 9
   ```
3. The game announces the winner if a player aligns three symbols in a row, column, or diagonal.
4. If the board fills up with no winner, the game declares a **draw**.

## 🖥 Sample Output
```
Tic   tack   toe   game
	 Player 1 [X]
	 Player 2 [O]

	  *  |  *  |  *  
	  -----------------
	  *  |  *  |  *  
	  -----------------
	  *  |  *  |  *  

Player 1 [X] turn: 5

	  *  |  *  |  *  
	  -----------------
	  *  |  X  |  *  
	  -----------------
	  *  |  *  |  *  
```

🎯 **Enjoy playing Tic Tac Toe!**


