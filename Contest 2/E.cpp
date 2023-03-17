#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_ananagram(string w, vector<string> dict) {
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    for (string word : dict) {
        if (w.compare(word) == 0)
            continue;
        if (word.size() != w.size())
            continue;
        bool ok = false;
        for (char i : w) {
            if (count(w.begin(), w.end(), i) != count(word.begin(), word.end(), i)) {
                ok = true;
                break;
            }
        }
        if (!ok) 
            return false;
    }
    return true;
}

vector<string> get_lower_dict(vector<string> dict) {
    vector<string> lower_dict;
    string lower_w;
    for (string w : dict) {
        lower_w = w;
        transform(lower_w.begin(), lower_w.end(), lower_w.begin(), ::tolower);
        lower_dict.push_back(lower_w);
    }
    return lower_dict;
}

bool comp_str(string w1, string w2) {
    return w1 < w2;
}

int main() {
    vector<string> dictionary, ananagrams;
    string word;
    cin >> word;
    while (word.compare("#") != 0) {
        dictionary.push_back(word);
        cin >> word;
    }
    vector<string> lower_dict = get_lower_dict(dictionary);
    for (string w : dictionary) {
        if (is_ananagram(w, lower_dict)) 
            ananagrams.push_back(w);
    }
    sort(ananagrams.begin(), ananagrams.end(), comp_str);
    for (string w : ananagrams) 
        cout << w << endl;
    
}