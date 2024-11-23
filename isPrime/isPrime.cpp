//181224
#include <iostream>
using namespace std;
int main() {
    int number;
    cin >> number;
    if (number == 2 || number == 3) {
        cout << "Yes" << endl;
        return 0;
    }
    if (number != 1 && number % 2 && number % 3) {
        for (int i = 5; i * i <= number; i += 6) {
            if (number % i == 0 || number % (i + 2) == 0) {
                cout << "No" << endl;
                return 0;
            }
        }
        cout << "Yes" << endl;
        return 0;
    }
    cout << "No" << endl;
    return 0;
}