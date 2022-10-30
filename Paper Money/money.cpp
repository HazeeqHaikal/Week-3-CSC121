#include <iostream>
#include <string>

using namespace std;

int main() {
    int money, hundreds, fifties, tens, fives, ones;

    cout << "Enter the amount of money: ";
    cin >> money;

    hundreds = money / 100;
    money %= 100;
    fifties = money / 50;
    money %= 50;
    tens = money / 10;
    money %= 10;
    fives = money / 5;
    money %= 5;

    cout << "RM100.00: " << hundreds << endl;
    cout << "RM50.00: " << fifties << endl;
    cout << "RM10.00: " << tens << endl;
    cout << "RM5.00: " << fives << endl;
    cout << "RM1.00: " << money << endl;

    return 0;
}