#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int p[1005];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
    }
    sort(p, p + n);
    int sum = 0;
    int ans[1005] = {};
    for(int i = 0; i < n; i++){
        sum += p[i];
        ans[i] = sum;
    }
    cout << ans[n-1];
}
