// 몸무게가 같은 오리 쌍

#include <bits/stdc++.h>
using namespace std;
int main(){

    int N;
    cin >> N;

    vector<int> duck(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> duck[i];
    }
    int cnt = 0;
    for (size_t i = 0; i < N; i++)
    {
        for (size_t x = i + 1; x < N; x++)
        {
            if(duck[i] == duck[x]){
                cnt++;
            }
        }
        
    }
    
    cout << cnt;    
    

}