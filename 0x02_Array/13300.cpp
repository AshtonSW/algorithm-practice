#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, K;
    int arr[12] = {};

    int cnt = 0;
    cin >> N >> K; // N은 전체 학생 수, K는 한 방 최대인원 수
    int s, y; // s는 성별, y는 학년
    for (int i = 0; i < N; i++) {
        cin >> s >> y;
        if (s == 0 && y == 1) {
            arr[0]++;
        }
        else if (s == 0 && y == 2) {
            arr[1]++;
        }
        else if (s == 0 && y == 3) {
            arr[2]++;
        }
        else if (s == 0 && y == 4) {
            arr[3]++;
        }
        else if (s == 0 && y == 5) {
            arr[4]++;
        }
        else if (s == 0 && y == 6) {
            arr[5]++;
        }
        else if (s == 1 && y == 1) {
            arr[6]++;
        }
        else if (s == 1 && y == 2) {
            arr[7]++;
        }
        else if (s == 1 && y == 3) {
            arr[8]++;
        }
        else if (s == 1 && y == 4) {
            arr[9]++;
        }
        else if (s == 1 && y == 5) {
            arr[10]++;
        }
        else arr[11]++;
    }
    for (int i = 0; i < 12; i++) {
        if (arr[i] % K == 0) {
            cnt += arr[i] / K;
        }
        if (arr[i] % K != 0) {
            cnt += arr[i] / K + 1;
        }
    }
    cout << cnt;
}