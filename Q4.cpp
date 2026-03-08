#include <iostream>
#include <ctime>
using namespace std;

int main() {

    string name;
    string studentNo;
    int age;

    // User input
    cout << "Enter your name : ";
    getline(cin, name);

    cout << "Enter student number : ";
    cin >> studentNo;

    cout << "Enter your age : ";
    cin >> age;

    // Get current year
    time_t t = time(NULL);
    tm* timePtr = localtime(&t);
    int currentYear = 1900 + timePtr->tm_year;

    // Calculations
    int birthYear = currentYear - age;
    int yearAt100 = birthYear + 100;

    // Output summary
    cout << "----------------------------------------" << endl;
    cout << "Summary" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Name : " << name << endl;
    cout << "Student No : " << studentNo << endl;
    cout << "Year of Birth : " << birthYear << endl;
    cout << "Year at Age 100: " << yearAt100 << endl;

    return 0;
}