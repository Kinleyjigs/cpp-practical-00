#include <iostream>
#include <string>
using namespace std;

int main() {

    string Fullname= "Yonten Kinley Tenzin";
    cout << "Fullname: "<< Fullname << endl;

    // number of characters in name 
    cout << "Total length: " << Fullname.length() << endl;

    // uppercase
    string upper = Fullname;
    transform(upper.begin(), upper.end(), upper.begin(), ::toupper);
    cout << "Uppercase: " << upper << endl;

    // lowercase 
    string lower = Fullname;
    transform(lower.begin(), lower.end(), lower.begin(), ::tolower);
    cout << "Lowercase: " << lower << endl;

    cout << "initials: ";
    cout << Fullname[0] << ".";
    
    for(int i = 0; i < Fullname.length(); i++)
    {
    if(Fullname[i] == ' ')
    {
        cout << Fullname[i+1] << ".";
    }
    }
    
    cout << endl;

    // length of first name
    int firstNameLen = Fullname.find(" ");
    cout << "first name length: " << firstNameLen << endl;

    
    return 0;
}
