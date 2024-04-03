#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, m;
vector <int> A, B;
vector <int> ans;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> m;
    int num;
    for (int i = 0; i < n; i++) {
        cin >> num;
        A.push_back(num);
    }
    for (int i = 0; i < m; i++) {
        cin >> num;
        B.push_back(num);
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    for (int k : A) {
        if (binary_search(B.begin(), B.end(), k)) continue;
        ans.push_back(k);
    }
    
    cout << ans.size() << '\n';
    for (auto k : ans) {
        cout << k << ' ';
    }
}
