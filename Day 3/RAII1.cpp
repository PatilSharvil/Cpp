#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// A Resource should be owned by an object whose destructor releases it

class Resource {
public: 
    Resource() {
        cout << "Object Created" << endl;
    }

    ~Resource() {
        cout << "Object Freed" << endl;
    }
};


int main(int argc, char** args) { 

    Resource r;
    
    return 0;
}