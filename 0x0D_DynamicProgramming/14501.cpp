#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n;
int t[17];
int p[17];
int d[17];


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t[i] >> p[i];
    }

    for(int i = n; i > 0; i--){
        if(t[i] + i <= n + 1){
            d[i] = max(p[i] + d[i+t[i]], d[i+1]);
        }
        else d[i] = d[i+1];
    }

    cout << *max_element(d, d+n+1);
}
