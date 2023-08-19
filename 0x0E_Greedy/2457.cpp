#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
vector <pair<int, int>> v;
int sm, sd, em, ed;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> sm >> sd >> em >> ed;
        v.push_back({sm * 100 + sd, em * 100 + ed});
    }

    int t = 301;
    int ans = 0;
    while(t < 1201){
        int nxt_t = t;
        for(int i = 0; i < n; i++){
            if(v[i].X < t && v[i].Y > nxt_t){
                nxt_t = v[i].Y;
            }
        }
        if(nxt_t == t){
            cout << 0;
            return 0;
        }
        ans++;
        t == nxt_t;
        
    }
    cout << ans;
}