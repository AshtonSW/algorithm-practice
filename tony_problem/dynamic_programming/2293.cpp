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

int n, k;
ll arr[102];
ll dp[10002]; // i원을 만들 수 있는 경우의 수 dp
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        for(int j = arr[i]; j < k; j++){
            dp[j] += dp[j - arr[i]];
        }
    }

    cout << dp[k];
}
