#include <iostream>
#include <cstdio>
using namespace std;
void writeRect(int n) {
    for (int i = 1; i <= n * n; i ++) {
        if ((i - 1) % n == 0 && i > 1)
            cout << endl;
        printf("%02d", i);
    }
    cout << endl;
}
void writeTriangle(int n) {
    int i = 1;
    for (int a = n - 1; a >= 0; a --) {
        for (int b = 0; b < a; b ++)
            cout << "  ";
        for (int b = 0; b < n - a; b ++)
            printf("%02d", i ++);
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    writeRect(n);
    cout << endl;
    writeTriangle( n);
    return 0;
}