#include <iostream>
#include "string"

using namespace std;

bool ValidChar(char c)
{
    if (c == '0' || c == '1') {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    string str;
    string sorted;
    getline(cin, str);
    for (char c : str) {
        if (ValidChar(c)) {
            sorted.push_back(c);
        }
    }
    cout << sorted;
    return 0;
}
