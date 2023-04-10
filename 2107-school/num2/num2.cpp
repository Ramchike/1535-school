// num2.cpp: определяет точку входа для приложения.
//

#include "num2.h"

using namespace std;

int main()
{
	string s;
	getline(cin, s);

	swap(s[0], s[1]);
	swap(s[2], s[3]);

	if (s[0] == '0')
		s.erase(0, 1);

	cout << s;
	return 0;
}
