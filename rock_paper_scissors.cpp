#include <iostream>

using std::cout;
using std::endl;

int main() {
    
    cout << "\n Welcom to the Rock/Paper/Scissor where you play against\n"
         << " the computer. On each move the computer will choose R, P, or S, then\n"
         << " the user will be prompted for their choice, and then the score will\n"
         << " be updated. P beats R, R beats S, and S beats P. The score starts\n"
         << " at 0. Add one if the person wins, subtract one if the computer wins.\n"
         << " The game ends if the score reaches -5 or +5\n"
         << " User input of 'X' or 'x' cause the game to exit.\n";
    cout << endl << " Here wo go!" << endl;
    

    
    return 0;
}