#include <iostream>
#include <vector>

using namespace std;

/* returns 0 for draw, 1 for first player and 2 for second player */
int winner(string move1, string move2) {
    if (move1.compare(move2) == 0)
        return 0;
    if (move1.compare("scissors") == 0) {
        if (move2.compare("paper") == 0)
            return 1;
        if (move2.compare("rock") == 0)
            return 2;
    }
    if (move1.compare("paper") == 0) {
        if (move2.compare("rock") == 0)
            return 1;
        if (move2.compare("scissors") == 0)
            return 2;
    }
    if (move1.compare("rock") == 0) {
        if (move2.compare("scissors") == 0)
            return 1;
        if (move2.compare("paper") == 0)
            return 2;
    }
    return -1;
}

int main() {
    cout.precision(3);
    int n, k, p1, p2, w;
    string move1, move2;
    cin >> n >> k;
    while (n != 0) {
        vector<double> wins(n, 0), losses(n, 0);
        double total;
        for (int i = 0; i < k*n*(n-1)/2; i++) {
            cin >> p1 >> move1 >> p2 >> move2;
            w = winner(move1, move2);
            if (w == 1) {
                wins[p1-1] += 1;
                losses[p2-1] += 1;
            }
            else if(w == 2) {
                wins[p2-1] += 1;
                losses[p1-1] += 1;
            }
        }
        for (int i = 0; i < n; i++) {
            total = wins[i]+losses[i];
            if (total > 0)
                cout << fixed << wins[i] / (wins[i]+losses[i]) << endl;
            else
                cout << 0.000 << endl;

        }

        cin >> n;
        if (n != 0) {
            cout << endl;
            cin >> k;
        }
    }
}