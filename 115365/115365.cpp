#include <iostream>
#include <stdio.h>
using namespace std;
double l;
double r;
double number;
double mid;
int main() {
    cin >> number;
    r = number;
    while ((r - l) > 0.0001 && (l - r) < 0.0001) {
        mid = (l + r) / 2;
        if (mid * mid > number)
            r = mid;
        if (mid * mid < number)
            l = mid;
        if (mid * mid == number)
            break;
    }
    int newMid = mid * 10000;
    int a = (int) (newMid) % 10;
    if (a >= 5) newMid += 10 - a;
    if (a <= 4) newMid -= a;
    mid = newMid / 10000.f;
    string end;
    if (mid == (int) (mid)) end = ".000";
    else if (mid * 10 == (int) (mid * 10)) end = "00";
    else if (mid * 100 == (int) (mid * 100)) end = "0";
    cout << mid << end << endl;
}