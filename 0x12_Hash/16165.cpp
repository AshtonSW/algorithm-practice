#include <iostream>
#include <unordered_set>
#include <set>
#include <unordered_map>
#include <map>
using namespace std;

int n, m, l; 
string str1, str2;
map<string, string> ma;
int num;
string str3;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> str1;
		cin >> l;
		for (int j = 0; j < l; j++) {
			cin >> str2;
			ma[str2] = str1;
		}
	}

	for (int K = 0; K < m; K++) {
		cin >> str3;
		cin >> num;
		
		if (num == 1) {
			if (ma.find(str3) != ma.end()) {
				cout << ma[str3] <<'\n';
			}
		}
		else {
			for (auto e : ma) {
				if (e.second == str3) {
					cout << e.first << '\n';
				}
			}
		}
	}
}