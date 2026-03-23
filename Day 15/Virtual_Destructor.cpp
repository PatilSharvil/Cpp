#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Base{
    public: 
        Base() {
            cout << "Base Constructor" << endl;
        }

        virtual ~Base() {
            cout << "Base Destructor" << endl;
        }
};

class Derived: public Base{
    public: 
        Derived() {
            cout << "Derived Constructor" << endl;
        }

        ~Derived() {
            cout << "Derived Destructor" << endl;
        }
};


int main(int argc, char** args) { 
    Base* obj = new Derived();

    delete obj;

    return 0;
}