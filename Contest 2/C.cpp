#include <iostream>
#include <string>
#include <string.h>

using namespace std;

string strip_str(string s) {
    string result = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ' && s[i] != '.' && s[i] != ',' && s[i] != '!' && s[i] != '?')
            result += tolower(s[i]);
    }
    return result;
}

bool check_palindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j])
            return false;
        else {
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string phrase;
    getline(cin, phrase);
    while (phrase.compare("DONE") != 0) {
        phrase = strip_str(phrase);
        if (check_palindrome(phrase))
            cout << "You won't be eaten!" << endl;
        else 
            cout << "Uh oh.." << endl;

        getline(cin, phrase);
    }
}