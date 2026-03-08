#include <iostream>
#include <string>
using namespace std;

int main() {

    string firstName = "Yonten";
    string fullName = "Yonten Kinley Tenzin";
    string studentNo = "2230313";

    int firstNameLength = firstName.length();
    int fullNameLength = fullName.length();

    // Name repeated
    cout << "Name repeated (" << firstNameLength << " times):" << endl;

    for(int i = 0; i < firstNameLength; i++) {
        cout << firstName << endl;
    }

    cout << endl;

    // Triangle pattern
    cout << "Triangle (height = " << fullNameLength << "):" << endl;

    for(int i = 1; i <= fullNameLength; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // Multiplication table
    int lastDigit = studentNo[studentNo.length() - 1] - '0';

    cout << "Times Table for " << lastDigit << " (last digit of " << studentNo << "):" << endl;

    for(int i = 1; i <= 10; i++) {
        cout << lastDigit << " x " << i << " = " << lastDigit * i << endl;
    }

    return 0;
}