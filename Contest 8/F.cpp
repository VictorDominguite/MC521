#include <iostream>
#include <string>

using namespace std;

int sum(string s, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') count++;
    }
    return count;
}

int main() {
    int t, n;
    string str;

    cin >> t;
    
    while(t--) {
        int n_op = 0;
        cin >> n;
        cin >> str;
        int total_1s = sum(str, n);
        int count = total_1s;
        if (count != (int)str.size()) {
            for (int i = n-1; i >= 0; i--) {
                if (!count) break;
                if (str[i] == '1') {
                    count--;
                }
                else {
                    if (i-1 >= 0 && str[i-1] == '0') continue;
                    if (count == total_1s) n_op++;
                    else n_op += 2; //inverte todos os 1s seguintes pra 0s e depois volta
                }
            }
        }

        cout << n_op << endl;

        str.clear();
    }

    return 0;
}