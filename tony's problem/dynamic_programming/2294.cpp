#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <vector>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define pb push_back
const int INF = 1e9;

int n, k;
int arr[102]; // 
int dp[10002]; // 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    fill(dp, dp + k + 1, INF);
    dp[0] = 0;

    for(int i = 0; i < n; i++) {
        for(int j = arr[i]; j <= k; j++){
            dp[j] = min(dp[j], dp[j - arr[i]] + 1);
        }
    }
    
    if(dp[k] == INF) cout << -1;
    else{
        cout << dp[k];
    }
    
}
