#include <iostream>
using namespace std;
int main() {
    int n, x, count = 0, index = 0;
    int a[100];
    cin >> n >> x;
    for (int i = 0; i < x; i ++)
        cin >> a[i];
    while (index < x) {
        if (a[index] > n) count ++;
        else n -= a[index];
        index ++;
    }
    cout << count << endl;
    return 0;
}