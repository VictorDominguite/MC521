#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int now = 0;
        vector<int> s(n), f(n), d(n);
        for (int j = 0; j < n; j++) 
            cin >> s[j];
        for (int j = 0; j < n; j++) 
            cin >> f[j];
        for (int j = 0; j < n; j++) {
            if (s[j] < now) {
                d[j] = f[j] - now;
                now = f[j];
            }
            else {
                d[j] = f[j] - s[j];
                now = f[j];
            }
        }
        for (int duration : d) 
            cout << duration << ' ';
        cout << endl;
    }
}