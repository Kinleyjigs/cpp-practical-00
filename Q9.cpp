#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iomanip>

using namespace std;

int main() {

    vector<int> v2230313;
    int value;

    // Input 6 values
    cout << "Enter 6 values: ";

    for(int i = 0; i < 6; i++) {
        cin >> value;
        v2230313.push_back(value);
    }

    // Display original vector
    cout << "\nOriginal : ";
    for(int x : v2230313)
        cout << x << " ";
    cout << endl;

    // Sorting
    vector<int> sortedVec = v2230313;
    sort(sortedVec.begin(), sortedVec.end());

    cout << "\nSorted : ";
    for(int x : sortedVec)
        cout << x << " ";
    cout << endl;

    // Min and Max
    int minVal = *min_element(v2230313.begin(), v2230313.end());
    int maxVal = *max_element(v2230313.begin(), v2230313.end());

    // Sum
    int sum = accumulate(v2230313.begin(), v2230313.end(), 0);

    double average = sum / 6.0;

    cout << "\nMin : " << minVal << endl;
    cout << "Max : " << maxVal << endl;
    cout << "Sum : " << sum << endl;
    cout << "Average : " << fixed << setprecision(2) << average << endl;

    // Remove below average values
    v2230313.erase(
        remove_if(v2230313.begin(), v2230313.end(),
                [average](int x) { return x < average; }),
        v2230313.end()
    );

    // Final vector display
    cout << "\nAfter removing below average:" << endl;

    for(int x : v2230313)
        cout << x << " ";

    cout << endl;

    return 0;
}