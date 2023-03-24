#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n, l, r, sum;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> l >> r;
        vector<int> a(n);
        int ans = 0;
        for (int j = 0; j < n; j++)
            cin >> a[j];
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++) {
            if (a[i] <= r) {
                for (int j = i+1; j < n; j++) {
                    sum = a[i] + a[j];
                    if (sum >= l && sum <= r)
                        ans += 1;
                    else if (sum > r)
                        break;
                }
            }
            else break;
        }
        cout << ans << endl;
    }
}