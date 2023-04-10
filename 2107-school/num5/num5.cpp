// num5.cpp: определяет точку входа для приложения.
//

#include "num5.h"

using namespace std;

int pl_min(vector<int> arr) {
	int count = 0;
	for (int i = 0; i < arr.size() - 1; i++) {
		if (arr[i] > 0 && arr[i + 1] < 0 || arr[i] < 0 && arr[i + 1] > 0)
			count++;
	}
	return count;
}

int main()
{
	vector<int> arr = {10, -4, 12, 56, -4, -89};
	cout << pl_min(arr);
	return 0;
}
