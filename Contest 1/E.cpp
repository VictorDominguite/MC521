#include <iostream>
#include <vector>

using namespace std;

int steps_to_one(int n, int steps, bool multiplied) {
  if (n == 1)
    return steps;
  if (n % 6 == 0) {
    n = n / 6;
    steps += 1;
    return steps_to_one(n, steps, false);
  } else {
    if (multiplied)
      return -1;
    n = n * 2;
    steps += 1;
    return steps_to_one(n, steps, true);
  }
}

void get_numbers_to_one(int t, vector<int> n) {
  for (int i = 0; i < t; i++) {
    cout << steps_to_one(n[i], 0, false) << endl;
  }
}

int main() {
  int t;
  cin >> t;
  vector<int> n(t);
  for (int i = 0; i < t; i++)
    cin >> n[i];
  get_numbers_to_one(t, n);

  return 0;
}