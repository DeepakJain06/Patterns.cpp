#include <bits/stdc++.h>
using namespace std;

void pattern1(){
    for(int i=0; i<10; i++){
        for(int j=0; j<+10-i-1; j++){
            for (int k = 0; k <= 2 * i + j; k++){
                cout << "*";
            }
        }
        cout << endl;
    }
}

int main(){
    pattern1();
    return 0;
}