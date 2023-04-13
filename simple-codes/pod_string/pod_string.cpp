// pod_string.cpp: определяет точку входа для приложения.
//

#include "pod_string.h"

using namespace std;

int main()
{
	string s, pod_s;
	cin >> pod_s >> s;

	cout << ((s.find(pod_s) == s.npos) ? "no" : "yes");
	
	return 0;
}
