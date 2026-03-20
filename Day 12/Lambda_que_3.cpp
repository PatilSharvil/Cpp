#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    vector<int> v;
    for (int i = 0; i < 11; i++) {
        v.push_back(i);
    }

    for_each(v.begin(), v.end(), [](int& val) {
        val *= 3;
    });

    for (auto val : v) {
        cout << val << endl;
    }
    return 0;
}