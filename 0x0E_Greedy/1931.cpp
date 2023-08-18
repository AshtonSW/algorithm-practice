#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
pair<int, int> v[100005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> v[i].Y >> v[i].X;
    }
    sort(v, v + n);
    int ans = 0;
    int check = 0;
    for (int i = 0; i < n; i++) {
        if (v[i].second < check) continue;
        ans++;
        check = v[i].first;
    }
    cout << ans;

}
