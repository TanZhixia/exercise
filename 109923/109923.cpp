#include <iostream>
#include <cstdio>
using namespace std;
int people[4][100];
int a, b, c, d;
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        if (x <= 18) {
            people[0][a] = x;
            a ++;
        } else if (x <= 35) {
            people[1][b] = x;
            b ++;
        } else if (x <= 60) {
            people[2][c] = x;
            c ++;
        } else {
            people[3][d] = x;
            d ++;
        }
    }
    int all = a + b + c + d;
    printf("%.2f%\n", (double)a * 100 / all);
    printf("%.2f%\n", (double)b * 100 / all);
    printf("%.2f%\n", (double)c * 100 / all);
    printf("%.2f%\n", (double)d * 100 / all);
    return 0;
}