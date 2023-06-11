#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	vector<int> arr(20);
	int sum = 0;
	int kord_start, kord_end;
	bool valid = false;
	bool k = false;
	int count = 0;

	for (int i = 0; i < 20; i++) {
		cin >> arr[i];
		if (abs(arr[i]) >= 1 && abs(arr[i]) % 2 == 0 && (abs(arr[i]) / 2) % 2 != 0) {
			count++;
		}
	}

	if (count >= 2) {
		for (int i = 0; i < 20; i++) {
			if (abs(arr[i]) >= 1 && abs(arr[i]) % 2 == 0 && valid == false && (abs(arr[i]) / 2) % 2 != 0) {
				kord_start = i;
				valid = true;
			}
			else if (abs(arr[i]) >= 1 && abs(arr[i]) % 2 == 0 && valid && (abs(arr[i]) / 2) % 2 != 0) {
				kord_end = i;
				break;
			}
		}

		for (int i = kord_start + 1; i < kord_end; i++) {
			sum += arr[i];
		}

		for (int i = 0; i < 20; i++) {
			if (i >= 1 && i % 2 != 0) {
				cout << sum << " ";
			}
			else
				cout << arr[i] << " ";
		}

	}
	else
		cout << "0";

	return 0;
}
