#include <iostream>
using namespace std;
int a[10001];
int main() {
    int n;
    int pl, pr;
    int m = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    pl = 0;
    pr = 0;
    for (int i = 0; i < n + 1; i ++) {
        if (a[i] - a[i - 1] == 1) {
            pr = i;
        } else {
            m = max(m, pr - pl + 1);
            pl = i;
            pr = i;
        }
    }
    cout << m << endl;
}