#include <bits/stdc++.h>
using namespace std;

// making the function which will give the some of arr if variable is 0 and if variable is 1 then it will give the product of the array
  int sum_product(int arr[], int n, int variable){
      int sum = 0;
      int product = 1;
    
      for (int i = 0; i < n; i++){
          sum += arr[i];
          product *= arr[i];


      }
      if(variable == 0){
          return sum;
      }
      else{
          return product;

      }
      }
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int variable = 0; // change to 1 to get the product
    int result = sum_product(arr, n, variable);
    cout << "Result: " << result << endl;
    return 0;
}