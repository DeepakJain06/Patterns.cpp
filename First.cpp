#include <bits/stdc++.h>
using namespace std;

void pattern1(){
    for(int i=0; i<10; i++){
        for(int j=0; j<6; j++){
            cout << "💖";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    pattern1();
    return 0;
}