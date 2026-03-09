#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Parent
{
protected:
    int data = 10;
    Parent()
    {
        cout << "In parent" << endl;
    }
};

class Child : public Parent
{
public:
    Child()
    {
        cout << "In child " << data << endl;
    }
};

class Child2 : public Child
{
public:
    Child2()
    {
        cout << data << endl;
        cout << "In Child2" << endl;
    }
    int print(int x)
    {

        return x * x;
    }
};

int main(int argc, char **args)
{

    // Child c;
    Child2 c;
    int x = c.print(5);
    cout << x << endl;
    return 0;
}