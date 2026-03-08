#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

class Student {

private:
    string name;
    int studentNumber;
    vector<float> marks;

public:

    // Parameterized constructor
    Student(string n, int sn) {
        name = n;
        studentNumber = sn;
    }

    // Add mark
    void addMark(float m) {
        marks.push_back(m);
    }

    // Average mark
    float getAverage() {
        if(marks.empty()) return 0;

        float sum = accumulate(marks.begin(), marks.end(), 0.0);
        return sum / marks.size();
    }

    // Highest mark
    float getHighest() {
        return *max_element(marks.begin(), marks.end());
    }

    // Lowest mark
    float getLowest() {
        return *min_element(marks.begin(), marks.end());
    }

    // Classification
    string getClassification(float avg) {

        if(avg >= 75)
            return "Distinction";
        else if(avg >= 60)
            return "Merit";
        else if(avg >= 40)
            return "Pass";
        else
            return "Fail";
    }

    // Print academic report
    void printReport() {

        cout << "================================================" << endl;
        cout << "ACADEMIC REPORT" << endl;
        cout << "================================================" << endl;

        cout << "Student Name : " << name << endl;
        cout << "Student No : " << studentNumber << endl;

        cout << "Marks Entered : " << marks.size() << endl;

        cout << "Marks : ";

        for(float m : marks)
            cout << m << " ";

        cout << endl;

        float avg = getAverage();

        cout << fixed << setprecision(2);
        cout << "Average : " << avg << endl;
        cout << "Highest : " << getHighest() << endl;
        cout << "Lowest : " << getLowest() << endl;

        cout << "Classification: " << getClassification(avg) << endl;

        cout << "================================================" << endl;
    }
};

int main() {

    Student s("Yonten Kinley Tenzin", 2230313);

    // Add at least 5 marks
    s.addMark(88);
    s.addMark(76);
    s.addMark(91);
    s.addMark(65);
    s.addMark(83);

    s.printReport();

    return 0;
}