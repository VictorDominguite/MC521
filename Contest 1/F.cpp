#include <iostream>
#include <vector>

using namespace std;

int max_vector(vector<int> a, int n) {
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int count_unique_skills(vector<int> skills, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (skills[i] > 0)
            count += 1;
    }
    return count;
}

int assemble_teams(vector<int> skills, int n) {
    int most_common, unique, x;
    most_common = max_vector(skills, n);
    unique = count_unique_skills(skills, n); 
    x = min(most_common, unique);
    if (most_common == unique) 
        // nao pode usar a mesma pessoa nos dois times
        x -= 1;
    return x;
}

int main() {
  int t, n, skill;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    // skills[i] guarda quantas pessoas com skill i + 1 existem
    vector<int> skills(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> skill;
        skills[skill-1] += 1;
    }
    cout << assemble_teams(skills, n) << endl;
  }
  return 0;
}