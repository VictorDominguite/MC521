#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void print_result(vector<int> res, int t) { 
  for (int i = 0; i < t; i++)
    cout << res[i] << '\n';
}

void candy_divider(int t) {
  vector<int> n(t), res(t);
  for (int i = 0; i < t; i++) {
    cin >> n[i];
  }
  for (int i = 0; i < t; i++) {
    if (n[i] % 2 == 0) 
      res[i] = (n[i]/2) - 1;
    else
      res[i] = floor(n[i]/2);
  }
  print_result(res, t);
}

int main() {
  int t;
  cin >> t;
  candy_divider(t);
  return 0;  
}