#include<iostream>
#include<bits/stdc++.h>
#include<memory>
using namespace std;

class Car {
    public: 
        string car_name;

        Car(string name) {
            this->car_name = name;
            cout << this->car_name << " Created" << endl;
        }

        ~Car() {
            cout << "Car Obj Deleted | Name: " << this->car_name << endl;
        }

        void drive() {
            cout << car_name << endl;
        }

};

int main(int argc, char** args) { 

        unique_ptr<Car> c = make_unique<Car>("Tesla");
        c->drive();

    return 0;
}