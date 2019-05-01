#include <iostream>
using namespace std;

int main () {
    int duration, records, month;
    float downPay, amount, months[101], depreciation, carValue;
    cout.precision(17);

    while (cin >> duration >> downPay >> amount >> records) {
        if (duration < 0) break;
        while (records--) {
            cin >> month >> depreciation;
            for (int i = month; i < 101; i++) {
                months[i] = depreciation;
            }
        }
        int i = 0;
        carValue = amount + downPay;
        downPay = amount / duration;
        amount += downPay;
        for (i = 0; i < duration; i++) {
            amount -= downPay;
            double t = carValue*months[i];
            carValue -= t; 
            if (amount < carValue) break;
        }
        cout << i << (i == 1 ? " month" : " months") << endl;
    }

    return 0;
}
