#include <bits/stdc++.h>
using namespace std;

void printStar(int n){

    if(n == 0){
        return;
    }
    printStar(n - 1);
    for (size_t i = 0; i < n; i++)
    {
        cout << "*";
    }
    cout << endl;
    


}

int main(){

    int N;
    cin >> N;
    printStar(N);






}