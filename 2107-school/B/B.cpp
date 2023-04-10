// B.cpp: определяет точку входа для приложения.
//

#include "B.h"

using namespace std;


bool luckyticket(int ticket) {
	int sum1_t1 = 0, sum2_t1 = 0;

	for (int i = 0; i < 6; i++) {
		if (i < 3)
			sum1_t1 += ticket % 10;
		else
			sum2_t1 += ticket % 10;

		ticket /= 10;
	}

	if (abs(sum1_t1 - sum2_t1) == 1)
		return false;
	else if (sum1_t1 - sum2_t1 == 0)
		return true;
}

int main()
{
	int ticket_1, ticket_2;
	cin >> ticket_1;

	bool flag = luckyticket(ticket_1);
	if (flag == false)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	cin >> ticket_2;
	if (luckyticket(ticket_2) == false) {
		cout << "NO";
	}
	else
		cout << "YES";

	return 0;
}
