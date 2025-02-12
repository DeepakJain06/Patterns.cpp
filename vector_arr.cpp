#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<array<int, 2>> v = {{1, 2}, {2, 4}, {5, 6}};
    cout << v[0][0] << " " << v[0][1] << endl;
    cout << v[0][3]
    ;
    vector<int> p(5, 233);
    cout << p[0] << endl;
    cout << p.size() << endl;
    p.push_back(6);
    cout << p.size() << endl;
    cout << p[5] << endl;
    return 0;
}