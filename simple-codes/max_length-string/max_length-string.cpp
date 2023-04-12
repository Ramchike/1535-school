// max_length-string.cpp: определяет точку входа для приложения.
//

#include "max_length-string.h"

using namespace std;

int main()
{
	string enter, max_s = "", s;
	getline(cin, enter);
	enter.push_back(' ');

	for (char c : enter) {
		if (isspace(c)) {
			max_s = (max_s.length() < s.length()) ? s : max_s;
			s.clear();
		}
		else {
			s.push_back(c);
		}

	}

	cout << max_s << endl << max_s.length();
	return 0;
}
