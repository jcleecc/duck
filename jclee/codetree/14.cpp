#include <bits/stdc++.h>
using namespace std;

int sums(int N, int i){

    if(i == N){
        return i; 
    }



    return sums(N, i + 1) + i;
}

int main(){

    int N;

    cin >> N;

    int r = sums(N, 1);
    cout << r;





}