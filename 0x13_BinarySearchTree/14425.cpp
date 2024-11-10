#include <iostream>
#include <set>
#include <vector>
using namespace std;
using ll = long long;
#define X first
#define Y second

set <string> s;
int n, m;
string str;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> str;
        s.insert(str);
    }
    int ans = 0;
    for(int i = 0; i < m; i++){
        cin >> str;
        if(s.find(str) != s.end()) ans++;
    }
    cout << ans;
    return 0;
}
