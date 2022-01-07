#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using std::cout;
using std::endl;
using std::cin;

void computerAction() {
    cout << " Select how computer chooses its move:\n"
         << " 1. Always choose Rock\n"
         << " 2. Always choose Paper\n"
         << " 3. Always choose Scissors\n"
         << " 4. Random guess\n"
         << " 5. Random guess with graphical score\n";
}

int main() {
    
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

    cout << " Enter your choice: "; cin >> userMove;

    
    return 0;
}