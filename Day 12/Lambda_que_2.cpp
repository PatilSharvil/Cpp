#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    vector<string> s = {"Sharvil", "Ram", "Sham"};
    
    sort(s.begin(), s.end(), [](string a, string b) {
        return a.size() < b.size();
    });
    
    for (auto val: s) {
        cout << val << " ";
    }

    return 0;
}