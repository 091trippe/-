#include <iostream>

using namespace std;

int main() {
    double score;

    cout << "Enter the test score (0.0 to 9.0): ";
    cin >> score;

    if (score >= 0.0 && score <= 4.4) {
        cout << "Grade: Unsatisfactory (2.0)" << endl;
    } else if (score >= 4.5 && score <= 5.2) {
        cout << "Grade: Satisfactory (3.0)" << endl;
    } else if (score >= 5.3 && score <= 6.2) {
        cout << "Grade: Above Satisfactory (3.5)" << endl;
    } else if (score >= 6.3 && score <= 7.2) {
        cout << "Grade: Good (4.0)" << endl;
    } else if (score >= 7.3 && score <= 8.2) {
        cout << "Grade: Very Good (4.5)" << endl;
    } else if (score >= 8.3 && score <= 9.0) {
        cout << "Grade: Excellent (5.0)" << endl;
    } else {
        cout << "Invalid score!" << endl;
    }

    return 0;
}

