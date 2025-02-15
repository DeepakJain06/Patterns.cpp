#include <bits/stdc++.h>
using namespace std;
int main(){

    deque<int> dq;
    dq = {23, 44, 56, 76};
    dq.push_front(1);

    for(int val : dq) cout << val << " ";
    cout << endl;
    cout << dq.size();

    dq.emplace_front(1000);
    for(int val : dq)
        cout << val << " ";

    return 0;
}