#include <iostream>
#include <string>
using namespace std;

// Function 1: Sum of digits
int digitSum(int n) {
    int sum = 0;

    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

// Function 2: Check prime
bool isPrime(int n) {

    if(n <= 1) return false;

    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

// Function 3: Count vowels
int countVowels(string s) {

    int count = 0;

    for(int i = 0; i < s.length(); i++) {

        char c = tolower(s[i]);

        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    return count;
}

// Function 4: Reverse string
string reverseString(string s) {

    string reversed = "";

    for(int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }

    return reversed;
}

int main() {

    string name = "Yonten Kinley Tenzin";
    int studentNo = 2230313;

    cout << "========================================" << endl;
    cout << "Function Results for " << name << endl;
    cout << "Student No: " << studentNo << endl;
    cout << "========================================" << endl;

    cout << "digitSum(" << studentNo << ") : " << digitSum(studentNo) << endl;

    if(isPrime(studentNo))
        cout << "isPrime(" << studentNo << ") : Yes" << endl;
    else
        cout << "isPrime(" << studentNo << ") : No" << endl;

    cout << "countVowels(" << name << ") : " << countVowels(name) << endl;

    cout << "reverseString(" << name << "): " << reverseString(name) << endl;

    return 0;
}