#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int t, a, b, p, n;

    cin >> t;
    while(t--) {
        string stops;
        int ans = 1;
        char last = 'X';
        cin >> a >> b >> p;
        cin >> stops;
        n = stops.size();
        vector<int> costs(n);
        costs[n-1] = 0;
        for (int i = n-2; i >= 0; i--) {
            if (stops[i] == 'A') {
                if (last == 'B' || last == 'X') costs[i] = costs[i+1] + a;
                else costs[i] = costs[i+1];
                last = 'A';
            } 
            else {
                if (last == 'A' || last == 'X') costs[i] = costs[i+1] + b;
                else costs[i] = costs[i+1];
                last = 'B';
            }
            if (costs[i] > p) {
                ans = i + 2; // +2 por causa do ajuste de idx e da posicao anterior q eh <= p
                break;
            }
        }
        cout << ans << endl;
    }

    return 0;
}