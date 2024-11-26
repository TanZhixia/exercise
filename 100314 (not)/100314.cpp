#include <iostream>
using namespace std;
int n, p;
int _p[3000][2];
int r;
int _r[8000][2];
int all;
bool flag;
void Read() {
    cin >> n;
    cin >> p;
    for (int i = 0; i < p; i ++)
        cin >> _p[i][0] >> _p[i][1];
    cin >> r;
    for (int i = 0; i < r; i ++)
        cin >> _r[i][0] >> _r[i][1];
}
void core() {
    bool _n[3000];
    for (int i = 1; i <= n; i ++)
        _n[i - 1] = false;
    for (int i = 0; i < p; i ++) {
        all += _p[i][1];
        _n[_p[i][0] - 1] = true;
    }
    for (int i = 0; i < r; i ++) {
        if (_n[_r[i][0] - 1]) {
            if (!(_n[_r[i][1] - 1]))
                _n[_r[i][1] - 1] = true;
            else {
                int index = _r[i][1];
                for (int j = index - 1; j < p; j ++) {
                    if (_p[j][0] == index)
                        all -= _p[j][1]; // not!
                }
            }
        }
    }
    flag = true;
    for (int i = 0; i < n; i ++)
        if (!_n[i]) {
            flag = false;
            break;
        }
    if (flag) {
        cout << "YES" << endl;
        cout << all << endl;
    } else {
        cout << "NO" << endl;
        for (int i = 0; i < n; i ++)
            if (!_n[i]) {
                cout << i + 1 << endl;
                break;
            }
    }
}
void Core() {
    core();
}
int main() {
    Read();
    Core();
    return 0;
}