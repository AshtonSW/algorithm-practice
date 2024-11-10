#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long ans;
int n, t;

void seqSum(vector<int> v){
    while(1 < v.size()){
        ans += *(v.end() - 1) * *(v.end() - 2);
        v.pop_back();
        v.pop_back();
    }
    if(v.size() == 1){
        ans += v[0];
    }
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<int> pos, neg;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t == 1) ans++;
        else if(t > 0) pos.push_back(t);
        else neg.push_back(t);
    }
    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end(), greater<int>());

    seqSum(pos);
    seqSum(neg);

    cout << ans;    
}
