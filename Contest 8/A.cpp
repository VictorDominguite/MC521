#include <iostream>
#include <vector>
#define MAX_LINES 101
using namespace std;

int sum(vector<int> v, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += v[i];
    }
    return s;
}

int main() {
    int n, r, l;
    cin >> n;
    vector<vector<int>> stops(MAX_LINES, vector<int> (n, 0));
    
    for (int i = 0; i < n; i++) {
        cin >> r;
        for (int j = 0; j < r; j++) {
            cin >> l;
            stops[l][i] = 1;
        }
    }
    vector<int> possible_lines;
    for (int i = 0; i < MAX_LINES; i++) {
        if (sum(stops[i], n) == n) {
            possible_lines.push_back(i);
        }
    }
    for (int line : possible_lines) {
        cout << line << ' ';
    }
    
    return 0;
}