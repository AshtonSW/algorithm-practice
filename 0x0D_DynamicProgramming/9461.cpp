#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, tc;
ll d[102];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> tc;
    while (tc--) {

        d[1] = 1;
        d[2] = 1;
        d[3] = 1;
        d[4] = 2;
        d[5] = 2;
        cin >> n;
        for (int i = 6; i < n+1; i++) {
            d[i] = d[i - 1] + d[i - 5];
        }
        cout << d[n] << '\n';
    }
    
}