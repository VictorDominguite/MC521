#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, q, l, r;
    cin >> n;
    vector<int> s(n), summed(n+1,0);

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    for (int i = 1; i <= n; i++) {
        summed[i] = summed[i-1] + s[i-1];
    }

    // a funcao f eh equivalente a somar todos os nums e ver quantas vezes
    // o numero 10 "cabe" na soma (dividir a soma por 10)

    cin >> q;

    while (q--) {
        cin >> l >> r;
        cout << (int)((summed[r] - summed[l-1])/10) << endl;
    }

    return 0;
}