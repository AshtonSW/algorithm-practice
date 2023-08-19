#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
int num[102];
int ans, sum;
int tmp;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> num[i];
    }
    for (int i = n; i > 0; i--) {
        if (num[i] <= num[i - 1]) {
            sum += (num[i - 1] - num[i]) + 1;
            ans += sum;
            num[i - 1] = num[i - 1] - sum;
            sum = 0;
        }
    }
    cout << ans;
}
