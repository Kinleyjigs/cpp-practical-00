#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    string name = "Yonten Kinley Tenzin";
    string studentNo = "2230313";

    int yonten_marks[5] = {85, 72, 90, 65, 78};

    int highest = yonten_marks[0];
    int lowest = yonten_marks[0];
    int sum = 0;

    cout << "Student: " << name << " | No: " << studentNo << endl;
    cout << "------------------------------------------" << endl;
    cout << "Index Mark Bar" << endl;

    for(int i = 0; i < 5; i++) {

        cout << "[" << i << "]  " << yonten_marks[i] << "  ";

        for(int j = 0; j < yonten_marks[i] / 10; j++) {
            cout << "*";
        }

        cout << endl;

        if(yonten_marks[i] > highest) {
            highest = yonten_marks[i];
        }

        if(yonten_marks[i] < lowest) {
            lowest = yonten_marks[i];
        }

        sum += yonten_marks[i];
    }

    double average = sum / 5.0;

    int aboveAverage = 0;

    for(int i = 0; i < 5; i++) {
        if(yonten_marks[i] > average) {
            aboveAverage++;
        }
    }

    cout << "------------------------------------------" << endl;
    cout << "Highest : " << highest << endl;
    cout << "Lowest : " << lowest << endl;
    cout << "Average : " << fixed << setprecision(2) << average << endl;
    cout << "Above Average: " << aboveAverage << " mark(s)" << endl;

    return 0;
}