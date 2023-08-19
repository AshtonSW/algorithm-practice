#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define X first
#define Y second

int ans, tmp;
int sign = 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string str;
    cin >> str;
    for(char c : str){
        if(c == '+' || c == '-'){
            ans += tmp * sign;
            if (c == '-') sign = -1;
            tmp = 0;
        }
        else{
            tmp *= 10;
            tmp += c - '0';
        }
        ans += tmp * sign;
        cout << ans;
    }
}
