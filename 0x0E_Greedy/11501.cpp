#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        ll ans = 0;
        int num;
        cin >> num;
        vector<int> v;
        for (int i = 0; i < num; i++) {
            int pc; //price
            cin >> pc;
            v.push_back(pc);
        }

        int max_val = -1;

        for (int i = num-1; i>=0; i--) {
            max_val = max(max_val, v[i]);
            ans += max_val - v[i];
        }
        cout << ans << '\n';
    }
}
