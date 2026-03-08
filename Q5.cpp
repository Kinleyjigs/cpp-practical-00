#include <iostream>
using namespace std;

int main() {

    // Hardcoded student info
    string name = "Yonten Kinley Tenzin";
    string studentNo = "2230313";

    int mark;

    cout << "Enter mark: ";
    cin >> mark;

    // Input validation
    if(mark < 0 || mark > 100) {
        cout << "Error: Mark must be between 0 and 100" << endl;
        return 0;
    }

    string grade;
    string resultMessage;

    // Grade classification
    if(mark >= 75) {
        grade = "Distinction";
        resultMessage = "Congratulations, " + name + "! You have passed.";
    }
    else if(mark >= 60) {
        grade = "Merit";
        resultMessage = "Congratulations, " + name + "! You have passed.";
    }
    else if(mark >= 40) {
        grade = "Pass";
        resultMessage = "Congratulations, " + name + "! You have passed.";
    }
    else {
        grade = "Fail";
        resultMessage = "Sorry, " + name + ". You have failed.";
    }

    // Output summary
    cout << "----------------------------------------" << endl;
    cout << "Student : " << name << " (" << studentNo << ")" << endl;
    cout << "Mark : " << mark << endl;
    cout << "Grade : " << grade << endl;
    cout << "Result : " << resultMessage << endl;

    return 0;
}