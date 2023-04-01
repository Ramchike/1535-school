#include <iostream>
#include "vector"
#include "algorithm"


using namespace std;

int main() {
    int n, c, s_petr = 0, s_ivan = 0, t_petr = 0, t_ivan = 0;
    cin >> n >> c;

    vector<int> p (n);
    vector<int> t (n);

    for (int i = 0; i < n; i++)
        cin >> p[i];
    
    for (int i = 0; i < n; i++)
        cin >> t[i];


    for (int i = 0; i < n; i++) {
        t_petr += t[i];
        int r_petr = max(p[i] - c * t_petr, 0);
        s_petr += r_petr;
    }

    for (int i = n - 1; i > 0; i--) {
        t_ivan += t[i];
        int r_ivan = max(p[i] - c * t_ivan, 0);
        s_ivan += r_ivan;
    }

    if (s_petr > s_ivan)
        cout << "1";
    else if (s_petr == s_ivan)
        cout << "0";
    else
        cout << "2";

    return 0;
}
