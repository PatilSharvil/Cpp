#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T>
T add(T a, T b) {
    return a + b;
}

template<typename T>
auto compare(T a, T b) {
    return a > b;
}


int main(int argc, char** args) { 
    cout << add(1, 2) << endl;
    cout << add(1.2, 2.1) << endl;

    cout << compare(1 , 2) << endl;
    cout << compare('A', 'Z') << endl;
    return 0;
}