#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    cout << (int) (number % 7 == 0 && number % 5);
    return 0;
}