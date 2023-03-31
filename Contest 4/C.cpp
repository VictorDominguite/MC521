#include <iostream>
#include <vector>
#include <map>
using namespace std;


void solution(int k){
    map<int, int> m;
    vector<int> xs;
    int y = k+1;
    int x;
    int sum = 0;
    double k2 = k;
    while(true){
        if((k2*k2/(y-k2)) - (k*k/(y-k)) == 0){
            sum++;
            x = k + k*k/(y-k);
            m[x] = y;
            xs.push_back(x);
            if(y >= x){
                break;
            }
        }
        y++;
    }
    cout << sum << endl;
    for (int c : xs)
        cout << "1/" << k << " = 1/" << c << " + 1/" << m[c] << endl;
}

int main(){
    int k;
    while(cin >> k){

        solution(k);
    }
    return 0;
}