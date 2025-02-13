#include <bits/stdc++.h>
using namespace std;
int main(){
    auto p = make_pair(1, 2);
    cout << p.first << " " << p.second << endl;
    auto q = make_pair(1, make_pair(2, "deepak"));

    // auto deepak = i("deepak_1"); // error: 'makes_pa' was not declared in this scope
    vector<int> v(2, 100); // {100, 100}

    v.insert(v.begin(), 200);//{200, 100, 100}
    for(auto x: v){
        cout << x << " ";
        v.emplace_back(300); //

        list<int> l = { 1, 2, 3, 4, 5, 6, 7, 8};
        auto it = l.size();
        cout << it << endl;
        l.push_back(10);
        }
    return 0;
}