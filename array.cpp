#include <bits/stdc++.h>
using namespace std;
//writing the code to implement the array using the user defined function 


int thisare(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "The elements of the array are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main(){
    thisare();
    return 0;
}