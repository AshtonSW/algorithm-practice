#include <iostream>
#include <unordered_set>
#include <set>
#include <unordered_map>
using namespace std;

int n, q; 

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	
	cin >> n;
	for (int i = 0; i < n; i++) {
		unordered_map<string, int> m;
		cin >> q;
		for (int j = 0; j < q; j++) {
			string str1, str2;
			cin >> str1 >> str2;
			if (m.find(str2) == m.end()) {
				m[str2] = 1;
			}
			else {
				m[str2]++;
			}
		}
		int ans = 1;
		for (auto e : m) {
			ans *= 1+ e.second;
		}
		cout << ans - 1 << '\n';
	}
}