#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    map<char, vector<char>> g;
    int awaken = 3;
    map<char, bool> woke_up;
    string first_awake, connection;
    cin >> first_awake;
    for (int i = 0; i < 3; i++)
        woke_up[first_awake[i]] = true;
    for (int i = 0; i < m; i++) {
        cin >> connection;
        g[connection[0]].push_back(connection[1]);
        g[connection[1]].push_back(connection[0]);
    }
    while (awaken < n) {
        for (auto i : g) {
            for (char c : i.second);
        }
    }

}