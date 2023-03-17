#include <iostream>

using namespace std;

int count_right_measures(string jingle) {
    int right_measures = 0;
    double duration = 0;
    for (int i = 1; i < jingle.size(); i++) {
        if (jingle[i] == '/') {
            if (duration == 1.0) 
                right_measures += 1;
            duration = 0;
        }
        else if (jingle[i] == 'W') 
            duration += 1;
        else if (jingle[i] == 'H') 
            duration += 0.5;
        else if (jingle[i] == 'Q') 
            duration += 0.25;
        else if (jingle[i] == 'E') 
            duration += 0.125;
        else if (jingle[i] == 'S') 
            duration += 0.0625;
        else if (jingle[i] == 'T') 
            duration += 0.03125;
        else if (jingle[i] == 'X') 
            duration += 0.015625;
    }
    return right_measures;
}

int main() {
    string jingle;
    getline(cin, jingle);
    while (jingle.compare("*") != 0) {
        cout << count_right_measures(jingle) << endl;
        getline(cin, jingle);
    }
}