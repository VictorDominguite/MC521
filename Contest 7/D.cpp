#include <iostream>
#include <bits/stdc++.h>

using namespace std;

long long int second_last(long long int n) {
    return ((n % 100) - (n % 10))/10;
}

int main() {
    long long int t, n;
    cin >> t;

    while(t--) {
        cin >> n;

        long long int n1, n2, count1, count2;
        n1 = n2 = n;
        count1 = count2 = 0;

        // número mínimo de remoções para o número terminar em 25 ou 75
        while (n1 % 10 != 5 && n1 > 0) {
            n1 /= 10;
            count1++;
        }
        if (n1 == 5) {
            n1 = 0;
            count1++;
        } 
        if (n1 != 0) {
            while (second_last(n1) != 2 && second_last(n1) != 7 && n1 != 5 && n1 > 0) {
                n1 /= 100;
                n1 *= 10;
                n1 += 5;
                count1++;
            }
            if (n1 == 5) {
                count1++;
            } 
        }

        // número mínimo de remoções para o número terminar em 50 ou 00
        while (n2 % 10 != 0 && n2 > 0) {
            n2 /= 10;
            count2++;
        }
        if (n2 != 0) {
            while (second_last(n2) != 0 && second_last(n2) != 5 && n2 > 0) {
                n2 /= 100;
                n2 *= 10;
                count2++;
            }
        }
        cout << min(count1, count2) << endl;
    }
}