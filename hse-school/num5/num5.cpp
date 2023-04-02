// num5.cpp: определяет точку входа для приложения.
//

#include "num5.h"

using namespace std;

int main()
{
	int arr[6][6];
	int i_b, j_b;
	int i_l, j_l;
	int max_b = INT_MIN, max_l = INT_MIN;
	// b - нижний треуг, l - верхний.

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cin >> arr[i][j];
			if (i - j >= 0) { // проверка на нижний (главный) треугольник массива.
				if (arr[i][j] > max_b) {
					i_b = i;
					j_b = j;
					max_b = arr[i][j];
				}
			}
			else if (arr[i][j] > max_l) {
				i_l = i;
				j_l = j;
				max_l = arr[i][j];
			}
		}
	}


	
	swap(arr[i_b][j_b], arr[i_l][j_l]);

	cout << endl;

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
