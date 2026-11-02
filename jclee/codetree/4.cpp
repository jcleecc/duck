#include <bits/stdc++.h>

using namespace std;
void prtstart(int n){
    
    if(n == 0){
        return;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout << "* ";
    }
    
    cout << endl;
    prtstart(n - 1);
    for (size_t i = n; i > 0; i--)
    {
        cout << "* ";
    }
    
    cout << endl;
}


int main(){

    int N;
    cin >> N;
    prtstart(N);


}