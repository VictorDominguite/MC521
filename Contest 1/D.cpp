#include <iostream>
#include <vector>

using namespace std;

bool waste_disposal(vector<int> c, vector<int> a) {
  // verifica se resíduos básicos cabem em seus respectivos tipos
  if (c[0] < a[0] || c[1] < a[1] || c[2] < a[2])
    return false;
  //atualiza a capacidade das lixeiras
  c[0] -= a[0];
  c[1] -= a[1];
  c[2] -= a[2];
  //verifica se os resíduos mistos cabem nas lixeiras de novas capacidades
  if (c[0] + c[2] < a[3])
    return false;
  a[3] -= c[0];
  if (a[3] > 0) 
    c[2] -= a[3];
  if (c[1] + c[2] < a[4])
    return false;
  return true;
}

void multiple_disposals(int t) {
  vector<int> c(3), a(5);
  for (int i = 0; i < t; i++) {
    cin >> c[0] >> c[1] >> c[2];
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    if (waste_disposal(c, a))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  multiple_disposals(t);
  return 0;
}