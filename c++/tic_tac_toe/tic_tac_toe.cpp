#include <iostream>
#include <string>
#include <vector>

class Board {
private:
    int win_a;
    int win_b;

public: 
    std::string mx_board[3][3];
    std::vector<std::string> myVector = {};
    int moveX;
    int moveY;
    int row;
    int column;
    int counter;
    bool trueFalse;

    int setWinA(int a) {
        win_a = a;
    }

    int setWinB(int b) {
        win_b = b;
    }

    int getWinA() {
        return win_a;
    }

    int getWinB() {
        return win_b;
    }

    Board() {
        for(char i = 0; i < 3; i++) {
            for(char j = 0; j < 3; j++ ) {
                mx_board[i][j] = "  ";
                std::cout << mx_board[i][j];
                if(j < 2) {
                    std::cout << " |";
                }
            }
            if(i < 2) {
                std::cout << "\n" << "---+---+---" << std::endl;
            }
        }

        counter = 0;
        trueFalse = true;
        while(trueFalse) {
            std::cout << "\nEnter the row: ";
            std::cin >> row;
            std::cout << "Enter the column: ";
            std::cin >> column;
            row--;
            column--;

            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < 3; j++) {
                    if(counter%2 == 0 && mx_board[row][column] == "  ") {
                        mx_board[row][column] = " X";
                    } else if(counter%2 == 1 && mx_board[row][column] == "  ") {
                        mx_board[row][column] = " O";
                    }
                    std::cout << mx_board[i][j];
                    if(j < 2) {
                        std::cout << " |";
                    }
                }
                if(i < 2) {
                    std::cout << "\n---+---+---" << std::endl;
                }
            }

            for(int i = 0; i < 3; i++) {
                if(mx_board[i][0] == mx_board[i][1] && mx_board[i][1] == mx_board[i][2] && mx_board[i][2] != "  ") {
                    std::cout << "\nThe winner is:" << mx_board[i][2];
                    myVector.push_back(mx_board[i][2]);
                    trueFalse = false;
                } else if(mx_board[0][i] == mx_board[1][i] && mx_board[1][i] == mx_board[2][i] && mx_board[2][i] != "  ") {
                    std::cout << "\nThe winner is:" << mx_board[2][i];
                    myVector.push_back(mx_board[2][i]);
                    trueFalse = false;
                } else if(mx_board[0][0] == mx_board[1][1] && mx_board[1][1] == mx_board[2][2] && mx_board[2][2] != "  " || mx_board[0][2] == mx_board[1][1] && mx_board[1][1] == mx_board[2][0] && mx_board[2][0] != "  ") {
                    std::cout << "\nThe winner is:" << mx_board[1][1];
                    myVector.push_back(mx_board[1][1]);
                    trueFalse = false;
                    break;
                }
            }
            counter += 1;
        } 
        std::cout << std::endl;
        for(int i = 0; i < myVector.size(); i++) {
            std::cout << "\nWinner " << i+1 << ": " << myVector[i];
        }

        // int x;
        // std::cout << std::endl;
        // std::cout << "\nDo you want to play again? Enter a number, please: \n1. Yes\n2. No" << std::endl;
        // std::cin >> x;
        // if(x == 1) {
        //     trueFalse = true;
        // } else {
        //     trueFalse = false;
        // }

    }
};

int main() {
    Board b;
}