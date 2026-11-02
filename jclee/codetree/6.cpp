#include <bits/stdc++.h>
using namespace std;

int n[100];
int maxv = 0;
int sol(int i){

    if(i < 0){
        return maxv; 
    }
    maxv = maxv < n[i] ? n[i] : maxv;
    sol(i - 1);

    return maxv;

}

int main(){

    int N;

    cin >> N;
    int s;
    for (size_t i = 0; i < N; i++)
    {
        cin >> s;

        n[i] = s;
    }
    cout << sol(N);
    

}