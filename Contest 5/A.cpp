#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        vector<int> a(n);
        bool error = false;
        int left_behind = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        if (n == 1) {
            cout << "YES" << endl;
            continue;
        }
        sort(a.begin(), a.end());
        for (int i = 1; i < n; i++) {
             if (a[i] - a[i-1] > 1) {
                cout << "NO" << endl;
                error = true;
                break;
            }
        }
        if (!error) cout << "YES" << endl;
    }
}