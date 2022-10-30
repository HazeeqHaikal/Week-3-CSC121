#include <iostream>
#include <string>

using namespace std;

int main() {

    int inputSec;
    float hour, min, secs;

    cout << "Enter the number of seconds: ";
    cin >> inputSec;

    hour = inputSec / 3600;
    min = (inputSec % 3600) / 60;
    secs = (inputSec % 3600) % 60;

    cout << "\nHours: " << hour << endl;
    cout << "Minutes: " << min << endl;
    cout << "Seconds: " << secs << endl;

    return 0;

}