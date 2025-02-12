#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v(3,300);
    cout << v[0] << "  " << v[1] << endl;
    vector<pair<int, int>> v_p = {{1, 3}, {2, 4}, {5, 6}};
    // cout << v_p[0].first << " "<< v_p[0].second << endl;
    // vector<int> v1 = {0, 2, 33, 45, 33, 32, 56};
    // cout << v1.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;
    cout << v[0] << endl;
    cout << v [5] << endl;
    cout << v.at(0) << endl;

    return 0;
}