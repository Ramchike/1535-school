#include <iostream>
#include "vector"
#include "algorithm"

using namespace std;


vector<int> to_arr (int n) {
    vector<int> arr = {};

    while (true) {
        if (n / 10 == 0) {
            break;
        }
        else {
            arr.push_back(n % 10);
            n /= 10;
        }
    }

    return arr;
}

int main() {
    int n, sum = 0, b1, b2;
    cin >> n;
    cin >> b1;
    cin >> b2;

    vector<int> disk1 (n);
    vector<int> disk2 (n);
    disk1 = to_arr(b1);
    disk2 = to_arr(b2);

    for (int i = 0; i < n; i++) {
        if (disk1[i] != disk2[i]) {
            for (int k = 0; k < 9; k++) {
                if (disk1[i] == disk2[i] + k || disk1[i] == disk2[i] - k || disk1[i] == disk2[i] + 10 - k) {
                    sum += k;
                    break;
                }
            }
        }
    }
    cout << sum;

}

