#include <bits/stdc++.h>
using namespace std;
int age = -100;
void makingInterest(){
    if(age==0){
        return;}
        cout << age << endl;
        age++;
        makingInterest();
    
}

int main(){
    makingInterest();
    return 0;
}