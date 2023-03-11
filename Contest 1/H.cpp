#include <iostream>

using namespace std;

bool printing_validation(string word, int len) {
  for (int j = 0; j < len; j++) {
    // se nao estiver em uma letra que sera escrita apenas uma vez
    if (j % 3 != 0) {
      // verificando a letra que sera duplicada
      if ((j-1) % 3 == 0) {
        if (j+1 > len)
          return false;
        else if (word[j] != word[j+1])
          return false;
      }
    }
  }
  return true;
}

int main() {
  int t, len;
  string word;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> len;
    cin >> word;
    if (printing_validation(word, len))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}