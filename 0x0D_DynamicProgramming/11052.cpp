#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
int d[10005];
int arr[10005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> d[i];
    for (int i = 1; i <= n; ++i) for (int j = 1; j < i; ++j) d[i] = max(d[i - j] + d[j], d[i]);
    cout << d[n];
}
