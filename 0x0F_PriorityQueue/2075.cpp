#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<int> v(n*n);
    for (int i = 0; i < n * n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    cout << v[n-1];
}
