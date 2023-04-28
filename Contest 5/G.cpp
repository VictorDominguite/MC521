#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n, k, res;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        res = n;
        if (k < n) {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0 && (n/i <= k)) {
                    res = min(res, i);
                }
                if (n % i == 0 && (i <= k)) {
                    res = min(res, n/i);
                }
            }
        }
        else res = 1;
        cout << res << endl;
    }
}