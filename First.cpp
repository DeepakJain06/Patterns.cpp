#include <bits/stdc++.h>
using namespace std;

void pattern1(){
    for(int i=0; i<10; i++){
        for(int j=0; j<6; j++){
            cout << " D ";
        }
        cout << endl;
    }
}
void pattern2(){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j <= i; j++){
            cout << " D ";
        }
        cout << endl;
    }
}

int main(){
    // int t;
    // cin >> t;
    pattern2();
    return 0;
}