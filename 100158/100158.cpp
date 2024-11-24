#include <iostream>
using namespace std;
int max(string a) {
    char temp = a[0];
    int res = 0;
    for (int i = 1; i < a.length(); i ++) {
        int x = temp - '0';
        int y = a[i] - '0';
        if (y > x) {
            temp = a[i];
            res = i;
        }
    }
    return res;
}
int main() {
    string a = "1234596109";
    a.erase(a.begin() + max(a));
    cout << a;
}