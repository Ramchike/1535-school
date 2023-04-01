// num4.cpp: определяет точку входа для приложения.
//

#include "num4.h"

using namespace std;

int main()
{
	int max = INT_MIN;
	int c_max = 0, sum = 0;

	vector<int> arr (20);

	for (int i = 0; i < 20; i++) {
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
			c_max = i + 1;
		}
	}

	for (int i : arr) {
		if (i == max) {
			break;
		}
		else if (i > 0) {
			sum += i;
		}
	}


	for (int i = 0; i < 19; i++) {
			if (c_max == i){
				cout << sum << " ";
			}
		else
			cout << arr[i] << " ";
	}

	return 0;
}
