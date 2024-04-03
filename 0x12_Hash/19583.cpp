#include <unordered_map>
#include <iostream>
using namespace std;

string e, s, q;
unordered_map <string, int> ma;
string times, name;
int cnt;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);

	cin >> s >> e >> q;
	while (cin >> times >> name) {
		if (times <= s) {
			ma[name] = 1;
		}
		else if (e <= times && times <= q) {
			if (ma[name] == 1) {
				ma[name]++;
				cnt++;
			}			
		}
	}
	cout << cnt;
	return 0;
}