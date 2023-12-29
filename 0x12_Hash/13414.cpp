#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int n, m;
string id;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;

	unordered_map<string, int> map;
	vector <string> v(m);

	for (int i = 0; i < m; i++) {
		cin >> id;
		map[id] = i;
		v[i] = id;
	}

	int cnt = 0;
	
	for (int i = 0; i < m && cnt < n; i++) {
		if (map[v[i]] == i) {
			cout << v[i] << '\n';
			cnt++;
		}
	}
	

}