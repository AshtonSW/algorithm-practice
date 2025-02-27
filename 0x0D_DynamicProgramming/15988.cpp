#include <iostream>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define MODULER 1000000009

int n, t;
ll dp[1000005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    
    for(int j = 4; j < 1000005; j++){
        dp[j] = (dp[j-1] + dp[j-2] + dp[j-3]) % MODULER;
    }

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> t;
        cout << dp[t] << '\n';
    }
    
}
