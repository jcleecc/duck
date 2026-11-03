#include <bits/stdc++.h>

using namespace std;

int countEven(const vector<int>& arr, int i) {
    if (i == arr.size()) {
        return 0;
    }

    int current = 0;
    if ((arr[i] & 1) == 0) {
        current = 1;
    }

    return current + countEven(arr, i + 1);
}

int main(){

    int N;
    cin >> N;
    vector<int> duckarr(N);
    for (size_t i = 0; i < N; i++)
    {
        cin >> duckarr[i];
    }

    int sol = countEven(duckarr, 0);
    cout << sol;




}