#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

    map<char, vector<char>> g;
    g['G'].push_back('h');
    cout << g['G'][0] << endl;
}