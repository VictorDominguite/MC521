#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        vector<int> a(n);
        int negatives = 0, min;
        long long int sum = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                negatives++;
            }
        }

        for (int i = 0; i < n; i++) {
            sum += abs(a[i]);
        }
        
        if (negatives % 2 != 0) {
            min = abs(a[0]);
            for (int i = 1; i < n; i++) {
                if (abs(a[i]) < min) {
                    min = abs(a[i]);
                }
            }
            sum -= 2*min;
        }
        cout << sum << endl;
    }
}