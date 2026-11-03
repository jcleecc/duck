//오리의 같은 걸음 수

#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> duck(N);


    for (size_t i = 0; i < duck.size(); i++)
    {
        cin >> duck[i];
    }

    int cnt = 1;
    int cur = -1;
    int bestduck = 1;
    for (size_t i = 1; i < duck.size(); i++)
    {
        if(duck[i] == duck[i - 1]){
            cnt++;
            if(cnt > bestduck){
                bestduck = cnt;
            }
        }else{
            cnt = 1;
        }
    }
    cout << bestduck;
    
    

}