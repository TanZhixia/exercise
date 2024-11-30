#include <iostream>
using namespace std;
string add(string a, string b) {
    string result = "";
    int carry = 0;
    while (a.length() < b.length())
        a = "0" + a;
    while (b.length() < a.length())
        b = "0" + b;
    a = "0" + a;
    b = "0" + b;
    for (int i = 0; i < a.length(); i ++)
        result += '0';
    for (int i = a.length() - 1; i >= 0; i --) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        if (sum >= 10) {
            sum -= 10;
            carry = 1;
        } else {
            carry = 0;
        }
        result[i] = sum + '0';
    }
    for (int i = 0; i < result.length(); i --) {
        if (result[i] == '0') {
            result.erase(i, 1);
            break;
        }
    }
    return result;
}
int main() {
    string a, b;
    cin >> a >> b;
    cout << add(a, b) << endl;
    return 0;
}