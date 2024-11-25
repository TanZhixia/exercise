#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}
int main() {
    int count = 0;
    int n, i = 2;
    cin >> n;
    while (count < n) {
        if (isPrime(i))
            count ++;
        if (count == n) {
            cout << i << endl;
            return 0;
        }
        i ++;
    }
    return 0;
}