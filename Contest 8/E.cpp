#include <iostream>

using namespace std;

int main() {
    int n, v, cost = 0, tank = 0;
    cin >> n >> v;

    for (int i = 1; i < n; i++) {
        if (tank >= n - i) break;
        if (n - i >= v) {
            cost += i*(v - tank);
            tank = v;
        }
        else {
            cost += i*(n-i - tank);
            break;
        }
        tank--;
    }
    cout << cost << endl;
    return 0;
}