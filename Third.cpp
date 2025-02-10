#include <bits/stdc++.h>
using namespace std;

void Pattern4(){
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0;  j < 5 - i + 1; j++)
        {
            cout << " # ";
        }
        cout << endl;
    }
}

int main(){
    // int n;
    // cin >> n;

    Pattern4();

    return 0;
}