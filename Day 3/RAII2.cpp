#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class SmartPointer {
public: 
    int* ptr;
    SmartPointer(int val) {
        ptr = new int(val);
        cout << "Pointer created with value : " << *ptr << endl;
    }

    ~SmartPointer() {
        cout << "Deleting ptr val " << *ptr << " On memory location " << ptr << endl; 
        delete ptr;
    }

    auto getVal() {
        return *ptr;
    }

};


int main(int argc, char** args) { 

    SmartPointer s(10);
    cout << s.getVal() << endl;

    return 0;
}