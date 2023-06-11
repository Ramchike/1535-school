#include <iostream>
#include <vector>

using namespace std;

int main()
{

	int n;
	cin >> n;
	vector <vector<int>> arr(n, vector<int>(n));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {

			if (i == j || i + j == n - 1) arr[i][j] = 1;
			else arr[i][j] = 0;
		}
	}

	for (auto i : arr) {
		for (auto pi : i) {
			cout << pi << " ";
		}
		cout << endl;
	}

}
