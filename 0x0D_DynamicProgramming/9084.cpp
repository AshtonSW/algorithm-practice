#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int t;
int n, coin, target;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> t;
    while(t--){

        int arr[22] = {};
        int dp[10002] = {};
        dp[0] = 1;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> coin;
            arr[i] = coin;
        }
        cin >> target;
        for(int i = 0; i < n; i++){
            int c = arr[i];
            for(int j = c; j <= target; j++){
                dp[j] += dp[j - c];
            }
        }
        cout << dp[target] << '\n';
    }
}
