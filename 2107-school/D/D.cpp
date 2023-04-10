// D.cpp: определяет точку входа для приложения.
//

#include "D.h"

using namespace std;

int main()
{

	int n;
	cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int l_max = 1, max = 1;

	for (int i = 0; i < n - 1; i++) { // проход по массиву

		if (arr[i + 1] > arr[i]) { // проверка на возрастание
			l_max++;
		}
		else if (l_max > max) {
			max = l_max;
			l_max = 1;
		}
		else l_max = 1;	
	}
	cout << max << endl;
	return 0;
}
