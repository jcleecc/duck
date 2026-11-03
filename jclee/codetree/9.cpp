#include <bits/stdc++.h>

using namespace std;

int main(){

    int N;
    cin >> N;
    vector<int> walk(N);

    for (size_t i = 0; i < N; i++)
    {
        cin >> walk[i];
    }
    int c = 0;
    for (size_t i = 1; i < walk.size(); i++)
    {
        if(walk[i] > walk[i - 1]){
            c++;
        }
    }
    cout << c;    


}
