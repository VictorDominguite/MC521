#include <algorithm>
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
  int t, n, erro, up, low;
  char aux;
  vector<char> v;
  set<char> s;
  cin >> t;
  while (t > 0) {
    t--;
    cin >> n;
    erro = 0;
    for (int i = 0; i < n; i++) {
      cin >> aux;
      v.push_back(aux);
    }
    for (int i = 0; i < n && !erro; i++) {
      if (s.count(v[i]) == 0) {
        s.insert(v[i]);
        while (v[i] == v[i + 1]) {
          i++;
        }
      } else {
        erro = 1;
      }
    }
    if (erro) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
    v.clear();
    s.clear();
  }
}