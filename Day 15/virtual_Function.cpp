#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Shape{
    public: 
        virtual void draw(){
            cout << "In Shape Draw" << endl;
        }
};

class Circle: public Shape{
    public: 
        void draw() override{
            cout << "In Circle Draw" << endl;
        }
};

class Rectangle: public Shape{
    public: 
        void draw() override{
            cout << "In Rectangle Draw" << endl;
        }
};


int main(int argc, char** args) { 
    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();
    
    s1->draw();
    s2->draw();

    delete s1, s2;

    return 0;
}