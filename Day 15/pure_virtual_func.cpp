#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base{
    public: 
        virtual void func() = 0;
};

class Derived: public Base{
    public: 
        void func() override {
            cout << "Func in derived" << endl;
      }
};

int main(int argc, char** args) { 
    Base* obj = new Derived();

    obj->func();
    
    delete obj;
    return 0;
}