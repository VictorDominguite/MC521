#include <iostream>
#include <string>
#include <vector>

using namespace std;

int mex(char bit1, char bit2) {
    if (bit1 == '1' && bit2 == '1') return 0;
    if (bit1 == '0' && bit2 == '0') return 1;
    return 2;
}

int main() {
    int t, n;

    cin >> t;
    
    while(t--) {
        vector<string> table(2);
        cin >> n;
        int last_group_start = 1, last_group_mex, mex_column, mex_section;
        vector<int> max_mex_sum(n+1);
        cin >> table[0];
        cin >> table[1];
        max_mex_sum[0] = 0;
        last_group_mex = mex(table[0][0], table[1][0]);
        max_mex_sum[1] = last_group_mex;
        for (int i = 2; i <= n; i++) {
            mex_column = mex(table[0][i-1], table[1][i-1]);

            if (last_group_mex == 1 && mex_column == 1) mex_section = 1;
            else if (last_group_mex == 0 && mex_column == 0) mex_section = 0;
            else mex_section = 2;

            if (max_mex_sum[i-1] + mex_column >= max_mex_sum[last_group_start-1] + mex_section) {
                max_mex_sum[i] = max_mex_sum[i-1] + mex_column;
                last_group_start = i;
                last_group_mex = mex_column;
            }
            else {
                max_mex_sum[i] = max_mex_sum[last_group_start-1] + mex_section;
                last_group_mex = mex_section;
            }
        }
        cout << max_mex_sum[n] << endl;
    }
    return 0;
}