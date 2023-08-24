#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
ll d[100005];
ll arr[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    d[0] = arr[0];
    for (int i = 1; i < n; i++) {
        d[i] = max(arr[i], d[i - 1] + arr[i]);
    }

    cout << *max_element(d, d + n);

}
