#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> x(4);
    for (int i = 0; i < 4; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    // a+b == x[0]
    // a+c == x[1]
    // b+c == x[2]
    // a+b+c == x[3]

    int c = x[3] - x[0], 
        b = x[2] - c, 
        a = x[1] - c;
    cout << a << ' ' << b << ' ' << c << endl;
}