#include <iostream>
#include <vector>

using namespace std;

void t(vector<int>&a) {
    a.push_back(1);
}

int main() {
    vector<int> a;
    // a.push_back(0);
    // for (int m : a) {
    //     cout << m << ' ';
    // }
    // cout << endl;
    // t(a);
    // for (int m : a) {
    //     cout << m << ' ';
    // }
    // cout << endl;
    cout << sizeof(unsigned) << endl;
    cout << sizeof(short) << endl;
}