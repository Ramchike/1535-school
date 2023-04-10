// num1.cpp: определяет точку входа для приложения.
//

#include "num1.h"

using namespace std;

double func(double x, double y) {
	return pow(x, 3) - 2.5 * x * y + 1.78 * pow(x, 2) - 2.5 * y + 1;
}
int main()
{
	double x, y;
	cin >> x >> y;
	cout << func(x, y);
	return 0;
}
