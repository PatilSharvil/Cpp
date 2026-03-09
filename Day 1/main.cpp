#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class Parent{
    public: 
    string name;
    char grade;
    int roll;

    Parent(string name, char grade, int roll) {
        name = name;
        grade = grade;
        roll = roll;

        cout << name << endl;
        cout << grade << endl;
        cout << roll << endl;
    }
};

int main(int argc, char** args)
{
    Parent p("Sharvil", 'A', 3003);

    return 0;
}
