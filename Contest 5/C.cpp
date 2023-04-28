#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, ss;
    int q;
    
    cin >> s;
    cin >> q;
    
    for (int i = 0; i < q; i++) {
        int j = 0, first = -1, last = -1;
        ss.clear();
        cin >> ss;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == ss[j]) {
                if (first == -1) {
                    first = j;
                } 
                j++;
                if (j == (int)ss.size()) {
                    last = i;
                    break;
                }
            }
        }
        if (last != -1) {
            cout << "Matched " << first << ' ' << last << endl;
        }
        else {
            cout << "Not matched" << endl;
        }
    }
}