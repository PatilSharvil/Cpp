#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    string s = "Hello World";

    stack<char> st;
    for(auto x : s)
    {
        st.push(x);
    }
    string ans = "";

    while(!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    
    
    return 0;
}