#include <iostream>
#include <stack>
using namespace std;
stack<int> s;
int main() {
    char c;
    string num;
    while (true) {
        cin >> c;
        if (c == '@')
            break;
        if (c == '.') {
            s.push(stoi(num));
            num = "";
        }
        if (c == '+') {
            int x = s.top();
            s.pop();
            x = s.top() + x;
            s.pop();
            s.push(x);
        }
        if (c == '-') {
            int x = s.top();
            s.pop();
            x = s.top() - x;
            s.pop();
            s.push(x);
        }
        if (c == '*') {
            int x = s.top();
            s.pop();
            x = s.top() * x;
            s.pop();
            s.push(x);
        }
        if (c == '/') {
            int x = s.top();
            s.pop();
            x = s.top() / x;
            s.pop();
            s.push(x);
        }
        if (c <= '9' && c >= '0')
            num += c;
    }
    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}