#include <iostream>
#include "vector"
#include "string"
#include "cstdlib"

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> arr (n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << arr[0];

    return 0;
}
