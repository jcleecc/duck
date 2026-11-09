#include <bits/stdc++.h>

// super noob test challenge

using namespace std;


// int main(){
//     int N, num;

//     int prev = 0;
//     int cnt = 1;
//     int maxcnt = 1;
//     cin >> N;
//     for (size_t i = 0; i < N; i++)
//     {
//         cin >> num;
//         if(prev == num){
//             cnt++;
//             if(maxcnt < cnt){
//                 maxcnt = cnt;
//             }
//         }else{
//             cnt = 1;
//         }
//         prev = num;
//     }
//     cout << maxcnt;

// }



// int main(){

//     int N, num;
//     cin >> N;

//     int maxcnt = 0;
//     int finalcnt = 0;
//     int prev = 0;
//     for (size_t i = 0; i < N; i++)
//     {
//         cin >> num;

//         if(i == 0){
//             prev = num;
//             continue;  
//         }
//         if(prev < num){
//             maxcnt++;
//             if(finalcnt < maxcnt){
//                 finalcnt = maxcnt;
//             }
//         }else{
//             maxcnt = 0;
//         }
//         prev = num;
        
        
        
//     }
//     cout << finalcnt;
    




// }






// int main(){


//     int N;
//     int cnt = 0;
//     int val;
//     int previous = 0;
//     cin >> N;
//     for (size_t i = 0; i < N; i++)
//     {
//         cin >> val;
//         if(i == 0){
//             previous = val;
//             continue;
//         }
//         if(val > previous){
//             cnt++;
//         }
//         previous = val;

//     }
    
//     cout << cnt;


// }


// int main(){
//     int N, num;
//     int first = 0;
//     int second = 0;

//     cin >> N;
//     for (size_t i = 0; i < N; i++)
//     {
//         cin >> num;
//         if (num > first){
//             second = first;
//             first = num;
//         }
//         else if(second < num){
//             second = num;
//         }
//     }

//     cout << second << endl;

// }

// int main(){
//     int N, num;

//     cin >> N;
//     int max = 0;
//     int cnt = 0;
//     int idx = 0;
//     for (size_t i = 0; i < N; i++)
//     {
//         cin >> num;
//         if(max < num){
//             max = num;
//             cnt = 1;
//             idx = i;
//         }
//         else if(max == num){
//             cnt++;
//         }

//     }
    
//     cout << max << " " << cnt;
    




// }
// int main(){
// 가장 큰수가 나온 위치와 값
//     int N;

//     cin >> N;
//     vector<int> arr(N, 0);
//     int max = 0;
//     int idx = 0;
//     for (size_t i = 0; i < N; i++)
//     {
//         cin >> arr[i];

    
//         if(max < arr[i]){
//             max = arr[i];
//             idx = i + 1;
//         }

//     }
//     cout << max << " " << idx;
//     // for (size_t i = 0; i < T; i++)
//     // {
//     //     cout << "#" + to_string(i) << " " << result[i] << endl;;
        
//     // }
// }