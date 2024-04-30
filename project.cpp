/* Rock - Paper  - scissors Game
Group Leader = Vaghani Krish
        members : Sheladiya Mitang
*/
#include <iostream>
#include <ctime>

using namespace std;

class rps {
private:
    int playerScore;
    int computerScore;

public:
    rps() : playerScore(0), computerScore(0) {}

    char getuserchoice() {
        cout << "Welcome" << endl;
        cout << "Rock-Paper-Scissors Game!" << endl;

        char player;
        do {
            cout << "Choose one of the following" << endl;
            cout << "***********************************" << endl;
            cout << " 'r' for rock " << endl;
            cout << " 'p' for paper " << endl;
            cout << " 's' for scissors " << endl;
            cin >> player;
        } while (player != 'r' && player != 'p' && player != 's');
        return player;
    }
char getcomputerchoice() {
        srand(time(0));
        int num = rand() % 3 + 1;   
        switch (num) {
            case 1:
                return 'r';
            case 2:
                return 'p';
            case 3:
                return 's';
        }
        return 0;
    }

    void showChoice(char choice) {
        switch (choice) {
            case 'r':
                cout << "Rock\n";
                break;
            case 'p':
                cout << "Paper\n";
                break;
            case 's':
                cout << "Scissors\n";
                break;
        }
    }
void chooseWinner(char player, char computer) {
        switch (player) {
            case 'r':
                if (computer == 'r') {
                    cout << "It's a tie!\n";
                } else if (computer == 'p') {
                    cout << "You lose!\n";
                    computerScore++;
                } else {
                    cout << "You win!\n";
                    playerScore++;
                }
                break;
            case 'p':
                if (computer == 'r') {
                    cout << "You win!\n";
                    playerScore++;
                } else if (computer == 'p') {
                    cout << "It's a tie!\n";
                } else {
                    cout << "You lose!\n";
                    computerScore++;
                }
                break;
            case 's':
                if (computer == 'r') {
                    cout << "You lose!\n";
                    computerScore++;
                } else if (computer == 'p') {
                    cout << "You win!\n";
                    playerScore++;
                } else {
                    cout << "It's a tie!\n";
                }
                break;
        }
    }
    void showScore() {
        cout << "Player Score: " << playerScore << endl;
        cout << "Computer Score: " << computerScore << endl;
    }

    bool playAgain() {
        char choice;
        cout << "Do you want to play again? (Y/N): ";
        cin >> choice;
        return (choice == 'Y' || choice == 'y');
    }
};
    int main()
    {
            rps p;
    bool play = true;
    while (play)  {
        for (int i = 0; i < 3; i++) {
            char playerChoice = p.getuserchoice();
            cout << "Your Choice : ";
            p.showChoice(playerChoice);
                char computerChoice = p.getcomputerchoice();
            cout << "Computer's Choice : ";
            p.showChoice(computerChoice);
                
            p.chooseWinner(playerChoice, computerChoice);
            p.showScore();
        }   
        cout << "********************* Game Over ***********************" << endl;

        cout << "Thanks for playing!"<<endl;
        play = p.playAgain();
    }
        return 0;
    }
