#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	string sorted;
	getline(cin, s);

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '(') {
			while (s[i + 1] != ')') {
				sorted.push_back(s[i + 1]);
				i++;
			}
			sorted.push_back(' ');
		}
	}
	sorted.erase(sorted.length());
	cout << sorted;

	return 0;
}
