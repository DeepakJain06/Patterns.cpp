#include <bits/stdc++.h>


using namespace std;
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int>::iterator it = v.end();
    it--;
    cout << *it << endl;

    return 0;
}