#include <bits/stdc++.h>
using namespace std;


int maxday(vector<int> arr, int day, int k){
    int res = 0;
    int arrsize = arr.size();
    for (size_t i = 0; i < k; i++)
    {
        if(i + day < arrsize){
            res += arr[i + day];
        }
        else{
            return -1;
        }
    }
    return res;
    
}

int main(){

    int N, K;
    cin >> N >> K;
    vector<int> visitor;
    int vnum = -1;
    

    for (size_t i = 0; i < N; i++)
    {
        cin >> vnum;
        visitor.push_back(vnum);
    }
    int cnt = 0;
    for (size_t i = 0; i < visitor.size(); i++)
    {
        int t = maxday(visitor, i, K);
        if(t >= vnum){
            
            cnt += 1;
            if(vnum != t){
                cnt = 1;
            }
            vnum = t;
        }
    }
    cout << vnum <<" "<< cnt; 


    
}