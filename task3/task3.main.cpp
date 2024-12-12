#include <iostream>
#include <iomanip>
using namespace std;

int main() {
int number;
cout << "enter an int: ";
cin >> number;
cout << "Is the number even? " << ((number %2 == 0) ? "YES" : "NO") << endl;
cout << "Is the number divisible by 8? " << ((number % 8 == 0) ? "YES" : "NO") << endl;
cout << "Is the number divisible by 16? " << ((number % 16 == 0) ? "YES" : "NO") << endl;

cout << "Number in octal: " << oct << number << endl;
cout << "Number in hexadecimal: " << hex << uppercase << number << endl;

return 0;
}
