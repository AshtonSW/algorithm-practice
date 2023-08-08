#include <bits/stdc++.h>
using namespace std;

int a[500005];
int n, m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin  >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> m;
    while(m--){
        int t;
        cin >> t;
        cout << upper_bound(a, a+n, t) - lower_bound(a, a+n, t) << ' ';
    }
}   
