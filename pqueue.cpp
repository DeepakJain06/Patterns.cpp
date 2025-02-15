#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(4);
    cout << pq.top() << endl;
    pq.push(1000);
    cout << pq.top();
    pq.emplace(34);
    
    

    return 0;
}