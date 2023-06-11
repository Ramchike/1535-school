#include <iostream>
#include <string>

using namespace std; 

int main() {
	string num; 
	cin >> num;

	int count = 0;

	for (int i : num) {
		if ( (i == 0) || (i >= 2 && i % 2 == 0) )
			count++;
	}

	cout << count;

	return 0;
}
