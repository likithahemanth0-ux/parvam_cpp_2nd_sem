#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// ROCK
void showRock() {
    cout << "\n";
    cout << "    _______\n";
    cout << "---'   ____)\n";
    cout << "      (_____)\n";
    cout << "      (_____)\n";
    cout << "      (____)\n";
    cout << "---.__(___)\n";
}

// PAPER
void showPaper() {
    cout << "\n";
    cout << "     _______\n";
    cout << "---'    ____)____\n";
    cout << "           ______)\n";
    cout << "          _______)\n";
    cout << "         _______)\n";
    cout << "---.__________)\n";
}

// SCISSOR
void showScissor() {
    cout << "\n";
    cout << "    _______\n";
    cout << "---'   ____)____\n";
    cout << "          ______)\n";
    cout << "       __________)\n";
    cout << "      (____)\n";
    cout << "---.__(___)\n";
}

int main() {

    int user, computer;
    char playAgain;

    // Random Seed
    srand(time(0));

    do {

        // Random number between 1 to 3
        computer = rand() % 3 + 1;

        cout << "\n=================================\n";
        cout << "     ROCK PAPER SCISSOR GAME\n";
        cout << "=================================\n";

        cout << "\n1. Rock";
        cout << "\n2. Paper";
        cout << "\n3. Scissor";

        cout << "\n\nEnter Your Choice : ";
        cin >> user;

        // USER CHOICE
        cout << "\n========= YOU =========\n";

        switch(user) {

            case 1:
                cout << "You Chose ROCK\n";
                showRock();
                break;

            case 2:
                cout << "You Chose PAPER\n";
                showPaper();
                break;

            case 3:
                cout << "You Chose SCISSOR\n";
                showScissor();
                break;

            default:
                cout << "Invalid Choice!\n";
                continue;
        }

        // COMPUTER CHOICE
        cout << "\n====== COMPUTER ======\n";

        switch(computer) {

            case 1:
                cout << "Computer Chose ROCK\n";
                showRock();
                break;

            case 2:
                cout << "Computer Chose PAPER\n";
                showPaper();
                break;

            case 3:
                cout << "Computer Chose SCISSOR\n";
                showScissor();
                break;
        }

        // RESULT
        cout << "\n========== RESULT ==========\n";

        if(user == computer) {
            cout << "DRAW!\n";
        }
        else if(
            (user == 1 && computer == 3) ||
            (user == 2 && computer == 1) ||
            (user == 3 && computer == 2)
        ) {
            cout << "YOU WIN!\n";
        }
        else {
            cout << "COMPUTER WINS!\n";
        }

        cout << "============================\n";

        // ASK USER TO PLAY AGAIN
        cout << "\nDo You Want To Play Again? (y/n) : ";
        cin >> playAgain;

    } while(playAgain == 'y' || playAgain == 'Y');

    cout << "\nThanks For Playing 🎮\n";

    return 0;
}