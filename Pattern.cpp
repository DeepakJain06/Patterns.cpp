#include <bits/stdc++.h>
using namespace std;

void pattern7(){
    for (int i = 0; i < 10; i++){

        for (int j = 0; j < -i - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            cout << "* ";
            for (int l = 0; l <-i-1 ; l++)
            {
                cout << " ";
            }
        }
    }
    cout << endl;
}
int main(){
    pattern7();
    return 0;
}