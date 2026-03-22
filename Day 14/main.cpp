#include<iostream>
#include<bits/stdc++.h>
#include<tuple>
using namespace std;

int main(int argc, char** args) { 
    vector<tuple<int, string, float, char, bool>> v;

    v.push_back({1, "Sharvil", 9.5, 'A', true});
    v.push_back({2, "Raghav", 8.5, 'B', false});

    for (auto [id, name, pointer, grade, pass] : v) {
        cout << id << " " << name << " " << pointer << " " << grade << " " << pass << endl;
    }

    get<0>(v[0]) = 3003;

    for (auto [id, name, pointer, grade, pass] : v) {
        cout << id << " " << name << " " << pointer << " " << grade << " " << pass << endl;
    }

    v.erase(v.begin());

    for (auto [id, name, pointer, grade, pass] : v) {
        cout << id << " " << name << " " << pointer << " " << grade << " " << pass << endl;
    }
    
    return 0;
}