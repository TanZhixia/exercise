#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int index = 0;
    int result = 0;
    while (index < s.length())
        result += s[index ++] - '0';
    cout << result << endl;
    return 0;
}