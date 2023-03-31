#include <cmath>
#include <iostream>

using namespace std;

int main() {
    long long int n;
    int t, a;
    double target, root;
    bool flag;
    cin >> t;
    while (t--) {
        cin >> n;
        a = cbrt(n);

        flag = false;
        while (a > 0) {
            target = n - pow(a, 3);
            root = cbrt(target);
            if (root == floor(root) && root > 0) {
                cout << "YES" << endl;
                flag = true;
                break;
            }
            a--;
        }
        if (!flag) cout << "NO" << endl;
    }
}