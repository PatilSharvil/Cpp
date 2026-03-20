#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    vector<int> v;
    for (int i = 0; i < 21; i++) {
        v.push_back(i);
    }

    int count = count_if(v.begin(), v.end(), [](int val) {
        return val > 10;
    });
    
    cout << count << endl;
    
    return 0;
}