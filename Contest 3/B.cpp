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
        int k = 0, j = n-1, m;
        while (k < j) {
            m = k+1;
            while (a[m] + a[k] < l && m < n)
                m += 1;
            while (a[j] + a[k] > r && j > k)
                j -= 1;
            if (m != n && k != j) {
                ans += j - m + 1;
            }
            k += 1;
            j = n-1;
        }
        cout << ans << endl;
    }
}