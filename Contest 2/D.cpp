#include <iostream>
#include <vector>

using namespace std;

vector<int> north(vector<int> state) {
    vector<int> new_state(6);
    new_state[0] = state[3];
    new_state[1] = state[2];    
    new_state[2] = state[0];
    new_state[3] = state[1];
    new_state[4] = state[4];
    new_state[5] = state[5];

    return new_state;
}

vector<int> south(vector<int> state) {
    vector<int> new_state(6);
    new_state[0] = state[2];
    new_state[1] = state[3];    
    new_state[2] = state[1];
    new_state[3] = state[0];
    new_state[4] = state[4];
    new_state[5] = state[5];

    return new_state;
}

vector<int> east(vector<int> state) {
    vector<int> new_state(6);
    new_state[0] = state[5];
    new_state[1] = state[4];    
    new_state[2] = state[2];
    new_state[3] = state[3];
    new_state[4] = state[0];
    new_state[5] = state[1];

    return new_state;
}

vector<int> west(vector<int> state) {
    vector<int> new_state(6);
    new_state[0] = state[4];
    new_state[1] = state[5];    
    new_state[2] = state[2];
    new_state[3] = state[3];
    new_state[4] = state[1];
    new_state[5] = state[0];

    return new_state;
}

int main() {
    int n;
    string dir;
    // o vetor segue a regra: TOP, BOTTOM, N, S, E, W
    cin >> n;
    while (n != 0) {
        vector<int> state = {1, 6, 2, 5, 4, 3};
        for (int i = 0; i < n; i++) {
            cin >> dir;
            if (dir.compare("north") == 0) 
                state = north(state);
            else if (dir.compare("south") == 0)
                state = south(state);
            else if (dir.compare("east") == 0)
                state = east(state); 
            else if (dir.compare("west") == 0)
                state = west(state);
        }
        cout << state[0] << endl;
        cin >> n;
    }
}
