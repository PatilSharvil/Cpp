#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Myclass{
    private: 
    int value;

    public: 

    Myclass(int v) {
        this->value = v;
        cout << "Constructor" << endl;
    }

    Myclass(Myclass& other) {
        this->value = other.value;
        cout << "Copy Constructor" << endl;
    }

};

int main(int argc, char** args) { 
    Myclass a(10);

    Myclass b = a; // copy constructor

    Myclass c(a); // copy constructor

    Myclass d(20); // normal constructor
    d = a; // // Copy assignment (NOT copy constructor!)

    return 0;
}