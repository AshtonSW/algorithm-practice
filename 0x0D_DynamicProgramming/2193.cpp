#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
ll d[1005];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    d[1] = 1; //1
    d[2] = 1; //10 
    d[3] = 2; //100 101 
    for (int i = 4; i <= n; i++) {
        d[i] = d[i - 1] + d[i - 2];
    }
    cout << d[n];

}
