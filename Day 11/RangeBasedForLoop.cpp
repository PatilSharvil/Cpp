#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    vector<int> v = {1, 2, 3, 4, 5};

    for (auto& val : v) {
        val += 10;
    }
    
    for (auto val : v) {
        cout << val << " ";
    }

    return 0;
}