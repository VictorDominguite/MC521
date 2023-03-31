#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t, n, k, sum;
    cin >> t;
    while (t--) {
        cin >> n;
        k = 2;
        sum = 3;
        while (round(remainder(n, sum)) != 0) {
            sum += pow(2, k);
            k++;
        }
        cout << n/sum << endl;
    }
    return 0;
}