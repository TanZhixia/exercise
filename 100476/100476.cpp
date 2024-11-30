#include <iostream>
using namespace std;
int a[100], result[100], n;
int main() {
    cin >> n;
    for (int i = 0; i < n; i ++)
        cin >> a[i];
    for (int i = 0; i < n; i ++)
        for (int j = i - 1; j >= 0; j --)
            if (a[i] > a[j])
                result[i] ++;
    for (int i = 0; i < n; i ++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}