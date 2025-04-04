#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second
#define INF 1e9
#define pb push_back

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    // Knapsack Problem 기본 꼴들
    
    /*
        0-1 Knapsack
        각 아이템을 최대 1번만 선택 가능한 경우
        입력: 무게와 가치가 주어지는 n개의 아이템, 배낭 용량 W
        문제: 배낭에 담을 수 있는 최대 가치를 구하세요
        특징: 선택 or 선택안함
    */ 
    int N, W;
    int weight[10];
    int dp[10];
    int value[10];
    // 0-1 knapsack
    for(int i = 1; i <= N; i++) {
        for(int j = W; j >= weight[i]; j--) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }

    /*
        unbounded Knapsack
        각 아이템을 무한히 사용 가능함(동전 문제)
        입력: 무게와 가치, 무제한 사용 가능
        특징: 무게 기준으로 바깥쪽 루프
    */
    for(int i = 0; i < N; i++) {
        for(int j = weight[j]; j <= W; j++) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
}
