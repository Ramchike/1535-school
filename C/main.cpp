#include <iostream>
#include "vector"
#include "string"
#include "iomanip"

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr (n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    for (int i = 0; i < n; i++) {

        int n10 = stoi(arr[i], 0, 10);
        ostringstream stream;
        stream << hex << n10;
        string n16 = stream.str();

        if (n16[n16.length() - 1] == '4' && n16.length() >= 3 && arr[i].find('8') >= 0) {
            arr[i] = "777";
        }
    }

    for (string s: arr)
        cout << s << " ";


    return 0;
}