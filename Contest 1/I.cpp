#include <iostream>
using namespace std;

int count_brackets_to_move(int len, string str) {
  int to_close = 0;
  for (int i = 0; i < len; i++) {
    if (str[i] == '(')
      to_close += 1;
    // se houver brackets abertos para fechar, eles serao fechados
    else if (str[i] == ')' && to_close > 0) 
      to_close -= 1;
  }
  //o numero que sobrar de brackets abertos eh o minimo que deve ser movido no string
  return to_close;
}

int main() {
  int t, len;
  string str;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> len;
    cin >> str;
    cout << count_brackets_to_move(len, str) << endl;
  }
  return 0;
}