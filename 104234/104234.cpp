#include <iostream>
using namespace std;
char c[10002][10002];
int n, m;
void ParseIn() {
    cin >> n >> m;
    for (int i = 1; i <= n; i ++)
        for (int j = 1; j <= m; j ++)
            cin >> c[i][j];
}
char calculate(int x, int y) {
    int count = 0;
    if (c[x][y] == '*')
        return '*';
    for (int i = x - 1; i <= x + 1; i ++)
        for (int j = y - 1; j <= y + 1; j ++)
            if (c[i][j] == '*')
                count ++;
    return count + '0';
}
void Core() {
}
void Write() {
    for (int i = 1; i <= n; i ++) {
        for (int j = 1; j <= m; j ++)
            cout << calculate(i, j);
        cout << endl;
    }
}
int main() {
    ParseIn();
    Core();
    Write();
    return 0;
}