#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    int player1Total = 0, player2Total = 0;
    int maxLead = 0, winner = 0;

    for (int i = 0; i < N; ++i) {
        int Si, Ti;
        cin >> Si >> Ti;

        player1Total += Si;
        player2Total += Ti;

        int lead = abs(player1Total - player2Total);
        if (lead > maxLead) {
            maxLead = lead;
            if (player1Total > player2Total) {
                winner = 1;
            } else {
                winner = 2;
            }
        }
    }

    cout << winner << " " << maxLead << endl;

    return 0;
}
