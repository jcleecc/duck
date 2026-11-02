#include <bits/stdc++.h>
using namespace std;

void prt1(int n){

    if(n < 1){ cout << endl;
        return;
    }
    cout << n << " ";
    prt1(n - 1);

}
void prt2(int n){
    if(n < 1){ cout << endl;
        return;
    }
    prt2(n - 1);
    cout << n << " ";

}

int main(){

    int N;
    cin >> N;
    prt1(N);
    prt2(N);
    


}