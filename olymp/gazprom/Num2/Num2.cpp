// Num2.cpp: определяет точку входа для приложения.
//

#include "Num2.h"

using namespace std;

int main()
{
	double a, b; // первый, второй участок
	cin >> a >> b;
	double g = pow(a, b);

	cout << endl << int(g) % 10;

	return 0;
}
