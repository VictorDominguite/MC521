#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if ((n/2 + ((n/2)*2 - 1)) % 2 == 1) {
            cout << "YES" << endl;
            int num = 2;
            for (int i = 0; i < n/2; i++) {
                cout << num << ' ';
                num += 2;
            }
            num = 1;
            for (int i = 0; i < n/2-1; i++) {
                cout << num << ' ';
                num += 2;
            }
            cout << n/2 + ((n/2)*2 - 1) << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
}