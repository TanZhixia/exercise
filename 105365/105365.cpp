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
    int L, count = 0;
    cin >> L;
    int all = 0;
    for (int i = 2; ; i ++) {
        if (all + i > L) {
            cout << count << endl;
            return 0;
        }
        if (isPrime(i)) {
            all += i;
            count ++;
            cout << i << endl;
        }
    }
}