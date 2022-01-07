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

char compMove() {

    srand(time(NULL));
    int rd = rand() % 3 + 1;
    
    if (rd == 1) {
        return 'R';
    } else if (rd == 2) {
        return 'P';
    } else if (rd == 3) {
        return 'S';
    }
}

int main() {
    
    int choice, count = 0;
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

    cout << " Enter your choice: "; cin >> choice;

    
    return 0;
}