#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<string> get_words(int n) {
    vector<string> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
    return w;
}

int main() {
    int t, n, size_a, size_s;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        vector<vector<string>> w;
        vector<int> points(3, 0);
        for (int j = 0; j < 3; j++) 
            w.push_back(get_words(n));
        map<string, int> word_count;
        for (int person = 0; person < 3; person++) {
            for (int word = 0; word < n; word++)
                word_count[w[person][word]] += 1;
        }
        for (int person = 0; person < 3; person++) {
            for (int j = 0; j < n; j++) {
                if (word_count[w[person][j]] == 1)
                    points[person] += 3;
                else if (word_count[w[person][j]] == 2)
                    points[person] += 1;
            }
        }
        for (int point : points)
            cout << point << ' ';
        cout << endl;
    }
}