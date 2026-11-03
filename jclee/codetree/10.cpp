
//연속으로 더 많이 걸은 날

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> walkduck(N);
    for (int i = 0; i < N; i++) {
        cin >> walkduck[i];
    }

    int bestduck = 1;
    int cnt = 1;

    for (int i = 1; i < N; i++) {
        if (walkduck[i] > walkduck[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        bestduck = max(bestduck, cnt);
    }

    cout << bestduck;
}