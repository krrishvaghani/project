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
};
    int main()
    {
        return 0;
    }
