#include <iostream>
using namespace std;
int main() {
    int count = 0;
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i ++) {
        string s = to_string(i);
        for (int j = 0; j < s.size(); j ++)
            if (s[j] == '0' + x)
                count ++;
    }
    cout << count << endl;
    return 0;
}