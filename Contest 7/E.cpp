#include <iostream>
#include <string>

using namespace std;

string fill_backwards(string puzzle, int pos) {
    string filled = puzzle;
    bool B = false;
    if (puzzle[pos] == 'R') B = true;
    pos--;
    while (pos >= 0 && filled[pos] == '?') {
        if (B) filled[pos] = 'B';
        else filled[pos] = 'R';
        B = !B;
        pos--;
    }
    return filled;
}

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        string puzzle;
        cin >> n;
        cin >> puzzle;
        int i = 0;
        while (i < n) {
            if (puzzle[i] == 'B' || puzzle[i] == 'R') {
                puzzle = fill_backwards(puzzle, i);
            }
            i++;
        }
        if (n == 1 && puzzle[0] == '?') puzzle[0] = 'B';
        else {
            bool B;
            int j;
            for (j = 0; j < n; j++) {
                if (puzzle[j] == '?') {
                    if (j == 0 || puzzle[j-1] == 'B') {
                        B = false;
                    }
                    else {
                        B = true;
                    }
                    break;
                }
            }
            for (int m = j; m < n; m++) {
                if (B) puzzle[m] = 'B';
                else puzzle[m] = 'R';
                B = !B;
            }
        }

        cout << puzzle << endl;
    }

    return 0;
}