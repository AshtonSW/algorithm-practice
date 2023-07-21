// Authored by : AshtonSW
// https://www.acmicpc.net/problem/9498

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int sc;
	cin >> sc;

	if (90 <= sc && sc <= 100) { cout << 'A'; }
	else if (80 <= sc && sc <= 89) { cout << 'B'; }
	else if (70 <= sc && sc <= 79) cout << 'C';
	else if (60 <= sc && sc <= 69) cout << 'D';
	else cout << 'F';
}