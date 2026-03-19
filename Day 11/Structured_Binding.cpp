#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    map<int , string> m;
    m[1] = "Sharvil";
    m[2] = "Patil";
    
    for (auto [key, value] : m) {
        cout << key << " " << value << endl;
    }

    m.emplace(3, "Raghav");
    cout << endl;
    for (auto [key, value] : m) {
        cout << key << " " << value << endl;
    }

    m.erase(3);
    cout << endl;

    for (auto [key, value] : m) {
        cout << key << " " << value << endl;
    }
    cout << endl;

    return 0;
}