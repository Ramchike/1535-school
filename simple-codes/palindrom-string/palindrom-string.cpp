// palindrom-string.cpp: определяет точку входа для приложения.
//

#include "palindrom-string.h"

using namespace std;

int main()
{
	string s, s_reverse;
	getline(cin, s);
	
	for (int i = s.length() - 1; i > -1; --i) {
		s_reverse.push_back(s[i]);
	}

	cout << ((s_reverse == s) ? "yes" : "no");
	return 0;
}
