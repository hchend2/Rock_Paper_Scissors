#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::cout;
using std::endl;
using std::cin;

void computerAction() {
    cout << " Select how computer chooses its move:\n"
         << " 1. Always choose Paper\n"
         << " 2. Random guess\n"
         << " 3. Random guess with graphical score\n";
}

char computerMove() {

    srand(time(NULL));
    int rd = rand() % 3;
    
    if (rd == 0) {
        return 'R';
    } else if (rd == 1) {
        return 'P';
    } else {
        return 'S';
    }
}

int compareMove(char userInput, char compMove) {

    if ((userInput == 'R' && compMove == 'S') ||
        (userInput == 'P' && compMove == 'R') ||
        (userInput == 'S' && compMove == 'P')) {
        return 1;
    } else if (
        (userInput == 'S' && compMove == 'R') ||
        (userInput == 'R' && compMove == 'P') ||
        (userInput == 'P' && compMove == 'S')) {
        return 2;
    } else {
        return 0;
    }
}

void checkResult(int &score, char userMove, char compMove) {
    if (compareMove(userMove, compMove) == 1) {
        score += 1;
        cout << "   User's point." << " Score: " << score << endl;
    } else if (compareMove(userMove, compMove) == 2) {
        score -= 1;
        cout << "   Computer's point." << " Score: " << score << endl;
    } else {
        cout << "   Tie." << " Score: " << score << endl;
    }
}
int main() {
    
    int option, count = 0, score = 0;
    char userMove;

    cout << "\n Welcom to the Rock/Paper/Scissor where you play against\n"
         << " the computer. On each move the computer will choose R, P, or S, then\n"
         << " the user will be prompted for their choice, and then the score will\n"
         << " be updated. P beats R, R beats S, and S beats P. The score starts\n"
         << " at 0. Add one if the person wins, subtract one if the computer wins.\n"
         << " The game ends if the score reaches -5 or +5\n"
         << " User input of 'X' or 'x' cause the game to exit.\n"
         << "\n Here wo go!\n\n";
    computerAction();

    cout << " Enter your choice: "; cin >> option;

    while (true) {
        if (option == 1) {
            char compMove = 'P';
            count++;
            cout << endl << count << ". Your move: "; cin >> userMove;
            if (userMove == 'X') {
                cout << " Exiting the game..." << endl;
                break;
            }
            cout << "   Computer choose: " << compMove << endl;
            checkResult(score, userMove, compMove);
            if (score == 5 || score == -5) {
                break;
            }
        } 
    }
    return 0;
}