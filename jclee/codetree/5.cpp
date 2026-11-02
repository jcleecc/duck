#include <bits/stdc++.h>
using namespace std;


int sol(int n){
    if(n == 0){
        return n;
    }
    return n + sol(n - 1);
}

int main(){
    int N;
    cin >> N;

    cout << sol(N);
    



}