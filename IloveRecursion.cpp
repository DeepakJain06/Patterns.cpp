#include <bits/stdc++.h>
using namespace std;
int age = 1;
void makingInterest(){
    if(age==29){
        return;}
        cout << age << endl;
        age++;
        makingInterest();
    
}

int main(){
    makingInterest();
    return 0;
}