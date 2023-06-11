#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	double one = 1;
	double two = 4;
	double sum = 0;

	for (int i = 0; i < n; i++) {
		double itog = 1 / (two * one);
		sum += itog;
		one++;
		two++;
	}

	cout << fixed;
	cout.precision(3);
	cout << sum;
}
