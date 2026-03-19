#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<class T>

class MyClass {
    public: 
        T data;
        MyClass(T data) {
            this->data = data;
        }
        void display() {
            cout << "Data: " << data << endl;
        }
};


int main(int argc, char** args) { 
    MyClass<int> obj1(10);
    obj1.display();
    MyClass<string> obj2("Hello");
    obj2.display();
    MyClass<double> obj3(3.14);
    obj3.display();

    return 0;
}