#include <iostream>
#include <cmath>

using namespace std;

int min_quests(int n, int a, int b) {
  if (a > b) 
    return 1;
  return ceil((double) n/a);
}

int main() {
  int t, n, a, b;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n >> a >> b;
    cout << min_quests(n, a, b) << endl;
  }
  return 0;
}