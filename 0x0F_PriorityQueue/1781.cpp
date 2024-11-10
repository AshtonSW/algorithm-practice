#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
#define X first
#define Y second

int n, d, r;
vector <pair<int, int>> v;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> d >> r;
        v.push_back({d, r});
    }

    sort(v.begin(), v.end());
    priority_queue <int, vector<int>, greater<int>> pq;
    ll ans = 0;

    for(auto c : v) {
        pq.push(c.Y);
        ans += c.Y;

        if(pq.size() > c.X) {
            ans -= pq.top();
            pq.pop();
        }
    }
    cout << ans << '\n';
    return 0;

            

    

    
    

}
