//114996
#include <iostream>
using namespace std;
bool palindrome(string p) {
    return (p[0] == p[3]) && (p[1] == p[2]);
}
int main() {
    string p;
    cin >> p;
    cout << (int) (palindrome(p)) << endl;
    return 0;
}