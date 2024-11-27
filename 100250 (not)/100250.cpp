#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
vector<ll> list;
ll t = 0;
ll M, D;
ll max(ll l) {
    ll maxVal = -2147483648;
    for (ll i = l; i < list.size(); i ++)
        maxVal = maxVal > list[i] ? maxVal : list[i];
    return maxVal;
}
int main() {
    cin >> M >> D;
    for (int i = 0; i <= M; i ++) {
        char command;
        cin >> command;
        if (command == 'Q') {
            ll x;
            cin >> x;
            cout << max(x - 1) << endl;
            t = x;
        }
        else if (command == 'A') {
            ll x;
            cin >> x;
            list.insert(list.begin() + t, x);
        }
    }
}