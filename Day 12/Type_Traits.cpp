#include<iostream>
#include<bits/stdc++.h>
#include<type_traits>
using namespace std;

int main(int argc, char** args) { 

    string x = "sharvil";

    if constexpr (is_integral<decltype(x)>::value) {
        cout << "It is integer" << endl;    
    } else {
        cout << "Its not" << endl;
    }

    cout << typeid(x).name() << endl;

    return 0;
}