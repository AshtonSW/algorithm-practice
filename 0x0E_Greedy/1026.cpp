#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int a[55] = {};
    int b[55] = {};
    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    sort(a, a+n);
    sort(b, b+n, greater<int>());
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i] * b[i];
    }
    cout << sum;
}
