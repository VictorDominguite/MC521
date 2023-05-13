#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        vector<int> orig(n), altered(n);
        for (int i = 0; i < n; i++) {
            cin >> orig[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> altered[i];
        }

        int i, j, moves = 0;
        i = j = n-1;
        while(i >= 0) {
            if (orig[i] != altered[j]) {
                moves++;
                i--;
            }
            else {
                i--;
                j--;
            }
        }
        cout << moves << endl;
    }
}