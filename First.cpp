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
void pattern2(int t){
    for (int i = 0; i < t; i++){
        for (int j = 0; j < t; j++){
            cout << " D ";
        }
        cout << endl;
    }
}

int main(){
    int t;
    cin >> t;
    pattern2(t);
    return 0;
}