#include <iostream>

using namespace std;

bool check_angle(int A) {
    int angle = 0;
    for (int i = 0; i < 60; i++) {
        if (angle == A) {
            return true;
        }
        angle += 6;
        if (i+1 % 12 == 0) {
            angle -= 6;
        }
    }
    if (angle == A) {
        return true;
    }
    return false;
}

int main() {
    int A;
    while (cin >> A) {
        if (check_angle(A)) 
            cout  << "Y" << endl;
        else
            cout << "N" << endl;
    }
}