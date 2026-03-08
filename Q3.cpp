#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Declare a string with your full name
    string fullName = "Yonten Kinley Tenzin";
    
    // Display full name
    cout << "Full Name      : " << fullName << endl;
    
    // 2. Display total character count (including spaces)
    cout << "Total Length   : " << fullName.length() << endl;
    
    // 3. Convert to uppercase - simple loop
    string uppercase = "";
    for (int i = 0; i < fullName.length(); i++) {
        if (fullName[i] >= 'a' && fullName[i] <= 'z') {
            uppercase += fullName[i] - 32;  // Convert lowercase to uppercase
        } else {
            uppercase += fullName[i];  // Keep spaces and already uppercase letters
        }
    }
    cout << "Uppercase      : " << uppercase << endl;
    
    // 4. Convert to lowercase - simple loop
    string lowercase = "";
    for (int i = 0; i < fullName.length(); i++) {
        if (fullName[i] >= 'A' && fullName[i] <= 'Z') {
            lowercase += fullName[i] + 32;  // Convert uppercase to lowercase
        } else {
            lowercase += fullName[i];  // Keep spaces and already lowercase letters
        }
    }
    cout << "Lowercase      : " << lowercase << endl;
    
    // 5. Extract initials - first letter of each word
    string initials = "";
    initials += fullName[0];  // First letter of first word
    initials += '.';
    
    for (int i = 0; i < fullName.length(); i++) {
        if (fullName[i] == ' ') {  // Found a space
            initials += fullName[i + 1];  // Next character is first letter of next word
            initials += '.';
        }
    }
    cout << "Initials       : " << initials << endl;
    
    // 6. Find length of first name only
    int firstNameLength = 0;
    for (int i = 0; i < fullName.length(); i++) {
        if (fullName[i] == ' ') {  // Stop when we hit a space
            break;
        }
        firstNameLength++;
    }
    cout << "First Name Len : " << firstNameLength << endl;
    
    return 0;
}
