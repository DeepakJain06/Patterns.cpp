#include <bits/stdc++.h>
using namespace std;

void pattern7(){
    for (int i = 0; i < 10; i++){

        for (int j = 0; j <10 -i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++){
            cout << "* ";
            }

            for (int j = 0; j <10-i-1 ;j++)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    
int main(){
    pattern7();
    return 0;
}