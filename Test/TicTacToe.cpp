#include <iostream>
#include <vector>
using namespace std;
void printBoard(const vector<vector<char>>& board) {
    cout << "-------------\n";
    for (int i = 0; i < 3; i++) {
        cout << "| ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " | ";
        }
        cout << "\n-------------\n";
    }
}
bool checkWin(const vector<vector<char>>& board, char player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        // Check rows
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
        // Check columns
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player) {
            return true;
        }
    }
    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    return false;
}
bool isBoardFull(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

int main(){
    vector<vector<char>> board(3,vector<char>(3,' '));
     int row, col;
    char currentPlayer = 'X';
    bool gameWon = false;

    printBoard(board);
     while (!gameWon && !isBoardFull(board)) {
        cout << "Player " << currentPlayer << ", enter your move (row and column): ";
        cin >> row >> col;

        // Check if the input is valid
        if (row < 0 || row >= 3 || col < 0 || col >= 3 || board[row][col] != ' ') {
            cout << "Invalid move, try again.\n";
            continue;
        }

        // Make the move
        board[row][col] = currentPlayer;
        
        // Print the updated board
        printBoard(board);

        // Check if the current player won
        if (checkWin(board, currentPlayer)) {
            gameWon = true;
            cout << "Player " << currentPlayer << " wins!\n";
        }

        // Change player turn
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    // If the board is full and no one won, it's a draw
    if (!gameWon) {
        cout << "It's a draw!\n";
    }

    return 0;
}