#include <iostream>
using namespace std;
double l;
double r;
double number;
int mid;
int main() {
    cin >> number;
    r = number;
    while (r - l > 0.001 && l - r < 0.001) {
        mid = (l + r) / 2;
        if (mid * mid > number)
            r = mid;
        if (mid * mid < number)
            l = mid;
        if (mid * mid == number)
            break;
    }
    cout << mid << endl;
}