#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> arr;

    int a, b, c, n;
    cin >> a >> b >> c >> n;

    int combo = 0;

    for (int a1 = 0; a1 < 10; a1++) {
        for (int b1 = 0; b1 < 10; b1++) {
            for (int c1 = 0; c1 < 10; c1++) {
                    if (a * a1 + b * b1 + c * c1 == n) {
                        combo++;
                        arr.push_back(vector<int> {a1, b1, c1});
                }
            }
        }
    }

    cout << combo << endl;

    for (const auto& oops: arr) {
        for (int go: oops) {
            cout << go << " ";
        }
        cout << endl;
    }
    return 0;
}
