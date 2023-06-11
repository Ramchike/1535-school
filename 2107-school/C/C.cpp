// C.cpp: определяет точку входа для приложения.
//

using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    for (int mask = 1; mask < (1 << n); mask++) {
        bitset<20> bits(mask);
        if (bits.count() >= 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
  