#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll arr[100005];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    if (a == b || b - a == 1)
    {
        cout << '0';
        return 0;
    }
    cout << b - a - 1 << '\n';
    for (ll i = a + 1; i < b; i++) {
        cout << i << ' ';
    }

}
