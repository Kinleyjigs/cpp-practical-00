#include <iostream>
using namespace std;

int main() {
    int studentNumber = 2230313;
    

    cout << "Student Number : 0" << studentNumber << endl;
    
    // calculating the digit sum.
    int temp = studentNumber, digitSum = 0;
    while (temp > 0) {
        digitSum += temp % 10;
        temp /= 10;
    }
    cout << "Digit Sum : " << digitSum << endl;
    
    // Checking odd or even
    cout << "Odd / Even : " << (digitSum % 2 == 0 ? "Even" : "Odd") << endl;
    
    // Remainder when divided by 7
    cout << "Remainder (% 7) : " << studentNumber % 7 << endl;
    
    // Multiply by 3
    cout << "Multiplied by 3 : " << studentNumber * 3 << endl;

    return 0;
}
