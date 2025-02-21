#include <bits/stdc++.h>
using namespace std;

// int count(int n){
//     int cnt = 0;
//         while(n>0){
//             cnt = cnt + 1;

//             cnt= n /10;
            

//         }
//         return cnt;
// }

int count(int n){
    int cnt = log10(n) + 1;
    return cnt;
}

int main(){
    count(1234);
    cout << count(1234);
    

    return 0;
}