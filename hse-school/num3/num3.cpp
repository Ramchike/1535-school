#include "iostream"
#include "string"

using namespace std;

string SearchSW(string sen, char symbol) {
	string copy = sen;
	string valid, trash;
	int min = INT_MAX;

	for (char c : copy) {
		if (isspace(c)) {
			if (trash[trash.length() - 1] == symbol) {
				if (trash.length() < min) {
					valid = trash;
					trash.clear();
					min = valid.length();
				}
				else
					trash.clear();
			}
		}
		else
			trash.push_back(c);
	}

	return valid;
}

int main()
{
	string sentense;
	getline(cin, sentense);

	sentense.erase(sentense.find(SearchSW(sentense, 'e')), SearchSW(sentense, 'e').length() + 1);

	cout << sentense;
	return 0;
}
