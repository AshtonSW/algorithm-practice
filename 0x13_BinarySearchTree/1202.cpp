#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, k;
pair<int, int> jewel[300002];
multiset <int> bag;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> k;
    
    for(int i = 0; i < n; i++){
        cin >> jewel[i].Y >> jewel[i].X;
    }
    sort(jewel, jewel + n);

    for(int i = 0; i < k; i++){
        int c;
        cin >> c;
        bag.insert(c);
    }

    ll ans = 0;

    for(int i = n-1; i >= 0; i--){
        int v, m;
        tie(v, m) = jewel[i];
        auto it = bag.lower_bound(m);
        if(it == bag.end()) continue;
        ans += v;
        bag.erase(it);
    }
    cout << ans;
}
