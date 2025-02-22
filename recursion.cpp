#include <bits/stdc++.h>
using namespace std;

int vare = 100;
int thistypeof(){
    if(vare==0){
        return 0;
    }
    cout << vare << endl;
    vare--;
    thistypeof();
    return 0;
}

int main(){

    return 0;
}