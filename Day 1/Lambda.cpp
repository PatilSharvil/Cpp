#include <iostream>
#include <bits/stdc++.h>
using namespace std;

auto func = [](int x) -> int
{
    cout << "Value in param is : " << x << endl;
    return x * x;
};

int main(int argc, char **args)
{

    int x = 10;
    int y = 20;
    int z = 0;
    [x, y, z]()
    {
        return  x + y;
    };


    
    return 0;
}