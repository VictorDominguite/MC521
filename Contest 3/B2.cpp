#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int t, n, l, r, to_min, to_max;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n >> l >> r;
        map<int, int> a_count;
        vector<int> a(n);
        int ans = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            a_count[a[j]] += 1;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] <= r) {
                if (a[i] < l) to_min = l - a[i];
                else to_min = 0;
                to_max = r - a[i];
                for (int j = to_min; j <= to_max; j++) {
                    ans += a_count[j];
                    if(j == a[i])
                        ans += -1;
                }
            }
        }
        cout << ans/2 << endl;
    }
}