#include<iostream>
#include<bits/stdc++.h>
#include<memory>
using namespace std;

class B;

class A{
public : 
    shared_ptr<B> ptrB;

    ~A() {
        cout << "Class A Destructor Called" << endl;
    }

};

class B{
public: 
    weak_ptr<A> ptrA;

    ~B() {
        cout << "Class B Destructor Called" << endl;
    }

};


int main(int argc, char** args) { 
    shared_ptr<A> ptr1 = make_shared<A>();
    shared_ptr<B> ptr2 = make_shared<B>();

    ptr1->ptrB = ptr2;
    ptr2->ptrA = ptr1;
    
    return 0;
}