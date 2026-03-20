#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template <typename T>

        void CheckType(T val) {
            if (is_integral_v<T>) {
                cout << "Int" << endl;
            } else if (is_same_v<T, string>) {
                cout << "String" << endl;
            } else if (is_same_v<T, double>) {
                cout << "Double" << endl;
            }
        }

int main(int argc, char** args) { 
    int x = 10;
    string y = "hello";
    double z = 3.14;
    
    CheckType(x);
    CheckType(y);
    CheckType(z);
    
    return 0;
}