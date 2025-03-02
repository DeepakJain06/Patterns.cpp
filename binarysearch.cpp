#include <bits/stdc++.h>
using namespace std;
int arr[] = {22, 33, 44, 23, 4, 5, 7, 1};
//binary search

int binary(){
    for (int i = 0; i<8; i++){
        
        for (int j = 1; j < 8; j++){
            if (arr[i] < arr[j]){
                arr[i] = arr[i];
                cout << arr[i];
                
        }
    }
}
int main(){
    binary();

    return 0;
}