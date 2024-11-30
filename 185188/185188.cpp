#include <iostream>
using namespace std;
int main() {
    int n;
    int a[100];
    int k;
    cin >> n;
    for (int i = 0; i < n; i ++) 
        cin >> a[i];
    cin >> k;
    for (int i = 0; i < n; i ++)
        if (a[i] == k) {
            cout << i + 1 << endl;
            return 0;
        }
    cout << -1 << endl;
    return 0;
}