#include <bits/stdc++.h>
using namespace std;

unordered_map <string, string> ma;
int n, m;
string site, pw;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> site >> pw;
		ma.insert({ site, pw });
	}
	for (int i = 0; i < m; i++) {
		cin >> site;
		cout << ma[site] << '\n';
	}
}
