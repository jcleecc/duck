// 문제 SWEA 21425. += D2
#include <bits/stdc++.h>

using namespace std;

int main(){

    int A, B, N, T, cnt;
    cin >> T;
    for (size_t i = 0; i < T; i++)
    {
        cin >> A >> B >> N;
        cnt = 0;
        while(A <= N && B <= N){
            B < A ? B+=A : A+=B;
            cnt++;
        }
        cout << cnt << endl;

    }
    // for(const int v : result){
    //     cout << v << endl;
    // }

    return 0;
}