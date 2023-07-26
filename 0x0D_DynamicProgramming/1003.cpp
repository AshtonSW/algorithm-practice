#include <bits/stdc++.h>
using namespace std;

int cnt0, cnt1;

int f[42][2];
void fib(int n) {
    f[0][0] = 1;
    f[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        f[i][0] = f[i - 1][0] + f[i - 2][0];
        f[i][1] = f[i - 1][1] + f[i - 2][1];
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int tc;
    cin >> tc;
    for (int i = 1; i <= tc; i++) {
        cin >> n;
        fib(n);
        cout << f[n][0] << ' ' << f[n][1] << '\n';
    }
}
