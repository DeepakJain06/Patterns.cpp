#include <bits/stdc++.h>
using namespace std;


// void exampleList(){
//     list<int> ls;
//     ls.push_back(2);

// }
int main(){
    list<int> myList = {10, 39, 56, 78};
    myList.push_back(50);
   
    // myList.clear();
    for(int val: myList)
        cout << val << " ";
    return 0;
}

