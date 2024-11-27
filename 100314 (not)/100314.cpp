#include <iostream>
using namespace std;
int n;
int p, r;
int _p[3001];       // okList
int _r[3001][3001]; // x -> y: _r[x][y] = 1 else _r[y][x] = 0;
int _money[3001];
int allMoney;
void Read() {
    cin >> n;
    cin >> p;
    for (int i = 1; i <= p; i ++) {
        int people, money;
        cin >> people >> money;
        _money[people] = money;
    }
    cin >> r;
    for (int i = 1; i <= r; i ++) {
        int x, y;
        cin >> x >> y;
        _r[x][y] = 1;
    }
}
int coreExit() {
    int flag = 1;
    for (int i = 1; i <= n; i ++) {
        if (_money[i] == 0) {
            flag = 0;
            break;
        }
    }
    return flag;
}
int isNone(int n) {
    for (int i = 1; i <= n; i ++)
        if (_r[n][i] == 1)
            return false;
    return true;
}
int whatNumber(int index) {
    if (isNone(index))
        return 0;
    int sum = 0;
    for (int i = 1; i <= n; i ++)
        if (_r[index][i] == 1)
            sum += whatNumber(i) + 1;
    return sum;
}
void Core() {
    while (coreExit()) {
        double list[3001];
        int maxIndex = 0;
        int maxValue = 0;
        for (int i = 1; i <= n; i ++) {
            if (_p[i] == 1) continue;
            list[i] = (double) (whatNumber(i) + 1) / _money[i] ;
            if (list[i] > maxValue) {
                maxIndex = i;
                maxValue = list[i];
            }
        }
        _p[maxIndex] = 1;
        allMoney += _money[maxIndex];
    }
}
void Write() {
    cout << allMoney;
}
int main() {
    Read();
    Core();
    Write();
    return 0;
}