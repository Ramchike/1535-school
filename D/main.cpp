#include <iostream>
#include "vector"

using namespace std;

int main() {
    int n;
    cin >> n;

    int pow = 1;
    int maxpow = 1;
    int low = 0;
    for (int i = 0; i < n; i++) {
        int enter;
        cin >> enter;
        if (enter > low && low != 0) {
            pow++;
        }
        else if (enter != 0 && enter <= low) {
            if (maxpow < pow) {
                maxpow = pow;
            }
            pow = 1;
        }
        low = enter;
    }

    cout << maxpow;
    //vector<int> arr;
    return 0;
}
