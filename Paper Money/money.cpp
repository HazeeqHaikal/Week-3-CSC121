#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

const char separator = ' ';
const int nameWidth = 13;
const int numWidth = 8;

int main() {
    int money, hundreds, fifties, tens, fives, ones, fiftyCents, tenCents, fiveCents, oneCent;
    float cents;

    cout << "Enter the amount of money: ";
    cin >> cents;

    money = cents;

    hundreds = money / 100;
    money %= 100;
    fifties = money / 50;
    money %= 50;
    tens = money / 10;
    money %= 10;
    fives = money / 5;
    money %= 5;
    ones = money / 1;
    money %= 1;
    cents = modf(cents, &cents) * 100;
    fiftyCents = cents / 50;
    cents = fmod(cents, 50);
    tenCents = cents / 10;
    cents = fmod(cents, 10);
    fiveCents = cents / 5;
    cents = fmod(cents, 5);
    oneCent = cents / 1;

    cout << endl
         << left << setw(nameWidth) << setfill(separator) << "Money";
    cout << left << setw(nameWidth) << setfill(separator) << "Count" << endl;
    cout << setw(numWidth) << left << "Hundreds" << setw(numWidth) << right << hundreds << endl;
    cout << setw(numWidth) << left << "Fifties" << setw(numWidth) << right << fifties << endl;
    cout << setw(numWidth) << left << "Tens" << setw(numWidth) << right << tens << endl;
    cout << setw(numWidth) << left << "Fives" << setw(numWidth) << right << fives << endl;
    cout << setw(numWidth) << left << "Ones" << setw(numWidth) << right << money << endl;
    cout << setw(numWidth) << left << "Fifty Cents" << setw(numWidth - 3) << right << fiftyCents << endl;
    cout << setw(numWidth) << left << "Ten Cents" << setw(numWidth - 1) << right << tenCents << endl;
    cout << setw(numWidth) << left << "Five Cents" << setw(numWidth - 2) << right << fiveCents << endl;
    cout << setw(numWidth) << left << "One Cent" << setw(numWidth) << right << oneCent << endl;

    // cout << "RM100.00: " << hundreds << endl;
    // cout << "RM50.00: " << fifties << endl;
    // cout << "RM10.00: " << tens << endl;
    // cout << "RM5.00: " << fives << endl;
    // cout << "RM1.00: " << money << endl;

    return 0;
}