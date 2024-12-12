#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int option;
    double temperature, converted;

    cout << "Choose an option:\n";
    cout << "1 - Convert Celsius to Fahrenheit\n";
    cout << "2 - Convert Fahrenheit to Celsius\n";
    cin >> option;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if (option == 1) {
        if (temperature < -273.15) {
            cout << "Too cold for calculation!" << endl;
        } else {
            converted = (temperature * 9 / 5) + 32;
            cout << "Temperature in Fahrenheit: " << fixed << setprecision(2) << converted << endl;
        }
    } else if (option == 2) {
        if (temperature < -459.67) {
            cout << "Too cold for calculation!" << endl;
        } else {
            converted = (temperature - 32) * 5 / 9;
            cout << "Temperature in Celsius: " << fixed << setprecision(2) << converted << endl;
        }
    } else {
        cout << "Invalid option!" << endl;
    }

    return 0;
}

