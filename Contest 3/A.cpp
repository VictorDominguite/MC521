#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t, n, size_a, size_s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<int> a(n), a_count(n, 0);
        int removals = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            a_count[a[j]-1] += 1;
        }
        for (int i = 0; i < n; i++) {
            while(a_count[i] > 1) {
                a_count[a[removals]-1] -= 1;
                removals += 1;
            }
        }
        cout << removals << endl;
    }
}