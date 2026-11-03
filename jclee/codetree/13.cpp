// 오리의 이웃 연못

#include <bits/stdc++.h>
using namespace std;


int main(){

    int N, M, S;
    cin >> N >> M >> S;
    int a, b;

    vector<int> rs;
    for (size_t i = 0; i < M; i++)
    {
        cin >> a >> b;
        if(S == a){
            rs.push_back(b);
        }
        else if(S == b){
            rs.push_back(a);
        }
    }
    cout << rs.size();


}