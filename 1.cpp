#include <iostream>
#include <string>

using namespace std;

int main() {
    string Name;
    int Student_NO;
    string course;

    cout << "Name:";
    cin >> Name;

    cout << "Student NO:";
    cin >> Student_NO;

    cout << "Course: ";
    cin >> course;

    cout << "\n=============================" << endl;
    cout << "Student Profile" << endl;
    cout << "=============================" << endl;
    cout << "Name : " << Name << endl;
    cout << "Student No : " << Student_NO << endl;
    cout << "Course : " << course << endl;
    cout << "================================" << endl;

    return 0;
}