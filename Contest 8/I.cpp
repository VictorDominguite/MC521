#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;
    while (n != 0 || k != 0) {
        vector<long long int> n_ways(k+1);
        n_ways[0] = 0;
        if (k >= 1) n_ways[1] = 1;
        if (k >= 2) n_ways[2] = n+1;
        for (int i = 3; i <= k; i++) {
            n_ways[i] = (((n_ways[i-1] + n_ways[i-1]%2) * (n_ways[i-1]/2 + n_ways[i-1]%2))/2) % 1000000;
        }
        cout << n_ways[k] << endl;
        cin >> n >> k;
    }
    return 0;
}