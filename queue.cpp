#include <bits/stdc++.h>
using namespace std;
int main(){

    queue<int> q;
    q.push(2);
    q.push(5);
    q.push(3999);
    q.back() += 4;
    cout << q.back() << endl;
    
    q.pop();
     cout << q.back();
    return 0;
}