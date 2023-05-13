#include <iostream>
#include <string>

using namespace std;

long long int fac(int n) {
    long long int res = 1;
    for (int i = 2; i <= n; i++) 
        res *= i;
    return res;
}

int main() {
    string str;
    long long int count = 1;
    int seq_n = 0, seq_u = 0;
    cin >> str;
    for (int i = 0; i < (int)str.size(); i++) {
        if (str[i] == 'm' || str[i] == 'w') {
            count = 0;
            break;
        }
        if (str[i] == 'n') {
            seq_u = 0;
            seq_n++;
            if (i+1 < (int)str.size() && str[i+1] == 'n') continue;
            if (seq_n >= 2) {
                int num_m = 0, max_m = seq_n/2, permutations = 0;
                while(num_m <= max_m) {
                    permutations += fac(seq_n-num_m)/(fac(num_m)*fac(seq_n-2*num_m));
                    num_m++;
                }  
                count *= permutations;
            }
        }
        else if (str[i] == 'u') {
            seq_n = 0;
            seq_u++;
            if (i+1 < (int)str.size() && str[i+1] == 'u') continue;
            if (seq_u >= 2) {
                int num_w = 0, max_w = seq_u/2, permutations = 0;
                while(num_w <= max_w) {
                    permutations += fac(seq_u-num_w)/(fac(num_w)*fac(seq_u-2*num_w));
                    num_w++;
                }
                count *= permutations;
            }
        }
        else {
            seq_n = 0;
            seq_u = 0;
        }

    }
    count = count % (1000000000 + 7);
    cout << count << endl;

    return 0;
}