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

    cout << "Hundreds: " << hundreds << endl;
    cout << "Fifties: " << fifties << endl;
    cout << "Tens: " << tens << endl;
    cout << "Fives: " << fives << endl;
    cout << "Ones: " << money << endl;

    return 0;
}