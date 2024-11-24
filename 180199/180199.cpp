#include <iostream>
using namespace std;
int main() {
    int n, index = 1, result = 0;
    cin >> n;
    while (index <= n)
        result += index ++;
    cout << result << endl;
    return 0;
}