#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, tc;
string str;
vector<ll> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    cin >> tc;
    for(int i = 0;  i < tc; i++){
        cin >> str;
        reverse(str.begin(), str.end());
        v.push_back(stoll(str));
    }
    sort(v.begin(), v.end());
    for(auto c : v) cout << c << '\n';
}