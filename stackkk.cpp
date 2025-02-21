#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(44);
    while(!st.empty()){
        int val = st.top();
        cout << val << " ";
        st.pop();
    }
    return 0;
}