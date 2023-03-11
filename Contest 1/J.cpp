#include <iostream>
#include <vector>
using namespace std;

bool check_rows(vector<vector<int>> a, int n, int m) {
  int k;
  for (int i = 0; i < n; i++) {
    k = 0;
    for (int j = 1; j < m; j++) {
      if (a[i][j] != 0) {
        // a diferenca entre os valores de uma mesma linha deve ser maior ou
        // igual a sua distancia
        if (a[i][j] - a[i][k] < j - k)
          return false;
        k = j;
      }
    }
  }
  return true;
}

bool check_columns(vector<vector<int>> a, int n, int m) {
  int k;
  for (int j = 0; j < m; j++) {
    k = 0;
    for (int i = 1; i < n; i++) {
      if (a[i][j] != 0) {
        // a diferenca entre os valores de uma mesma coluna deve ser maior ou
        // igual a sua distancia
        if (a[i][j] - a[k][j] < i - k)
          return false;
        k = i;
      }
    }
  }
  return true;
}

int matrix_sum(vector<vector<int>> a, int n, int m) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      sum += a[i][j];
    }
  }
  return sum;
}

int solve_increasing_matrix(vector<vector<int>> a, int n, int m) {
  for (int i = n-2; i > 0; i--) {
    for (int j = m -2; j > 0; j--) {
      if (a[i][j] == 0) {
        a[i][j] = min(a[i+1][j], a[i][j+1]) - 1;
      }
    }
  }
  if (!check_rows(a, n, m) || !check_columns(a, n, m))
    return -1;
  return matrix_sum(a, n, m);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  cout << solve_increasing_matrix(a, n, m) << endl;

  return 0;
}
