#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int trade_cards(vector<int> x, vector<int> y) {
    int distinct_x = 0, distinct_y = 0;
    x.erase(unique(x.begin(), x.end() ), x.end());
    y.erase(unique(y.begin(), y.end() ), y.end());
    for (int i = 0; i < x.size(); i++) {
         if (!count(y.begin(), y.end(), x[i]))
            distinct_y += 1;
    }
    for (int i = 0; i < y.size(); i++) {
         if (!count(x.begin(), x.end(), y[i]))
            distinct_x += 1;
    }
    return min(distinct_x, distinct_y);
}

int main() {
    int a, b;
    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) 
            return 0;
        vector<int> x(a), y(b);
        for (int i = 0; i < a; i++) 
            cin >> x[i];
        for (int i = 0; i < b; i++) 
            cin >> y[i];
        cout << trade_cards(x, y) << endl;
    }
}