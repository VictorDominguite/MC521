#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        string first, second;
        cin >> first;
        cin >> second;

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (first[i] == '1' && second[i] == '1') {
                possible = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (possible) {
            cout <<  "YES" << endl;
        }
    }
}