#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        string types;
        cin >> n;
        cin >> types;
        int t1 = 0, t0, winners = 0;
        for (int i = 0; i < n-1; i++) {
            if (types[i] == '1') {
                t1++;
            }
        }
        t0 = n-1 - t1;
        for (int x = 2; x <= n; x++) {
            if (t1 == t0) {
                cout << x << ' ' << endl;
            }
            else if (t1 > t0) {
                cout << x/2
            }
        }
        cout << endl;
    }

    return 0;
}