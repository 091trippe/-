#include <iostream>
#include <iomanip>
using namespace std;


int main() {
 char symbol;
 cout << "Enter a character: ";
 cin >> symbol;

 cout << "Character: " << symbol << endl;
 cout << "ASCII code (decimal): " << static_cast<int>(symbol) << endl;
 cout << "ASCII code (hexadecimal): " << hex << uppercase << static_cast<int>(symbol) << endl;

 return 0;
}
