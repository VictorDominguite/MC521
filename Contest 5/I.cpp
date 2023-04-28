#include <iostream>
using namespace std;

int price_to_consumption(int price) {
    int consumption = 0;
    if (price > 200) {
        consumption +=  100;
    }
    else {
        return price/2;
    }

    if (price > 2*100 + 3*9900) {
        consumption += 9900/3;
    }
    else {
        return consumption + (price-200)/3;
    }

    if (price > 2*100 + 3*9900 + 5*(1000000 - consumption)) {
        consumption += (1000000 - consumption)/5;
    }
    else {
        return consumption + (price-(2*100 + 3*9900))/5;
    }

    return consumption + (price-(2*100 + 3*9900 + 5*(1000000 - 10000)))/7;
}

int main() {
    int a, b, summed_consumption;
    cin >> a >> b;
    cout << price_to_consumption(a) << endl;
    while (a != 0) {
        /*
        a = price(x + y)
        b = price(y) - price(x)
        c = x + y
        */
       summed_consumption = price_to_consumption(a);



        cin >> a >> b;
    }
}