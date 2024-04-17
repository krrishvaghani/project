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
        int num = rand() % 3 + 1;   //random function choose one number in range of (0,1,2)
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

};
    int main()
    {
            rps p;
    bool play = true;
    while (play) {
        for (int i = 0; i < 3; i++) {
            char playerChoice = p.getuserchoice();
            cout << "Your Choice : ";
            p.showChoice(playerChoice);
                char computerChoice = p.getcomputerchoice();
            cout << "Computer's Choice : ";
            p.showChoice(computerChoice);
        }              
        return 0;
    }
