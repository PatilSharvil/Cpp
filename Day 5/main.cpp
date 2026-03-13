#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **args)
{
    // vector<int> v;                 // empty vector
    vector<int> v1(5);             // vector of size 5 with default values (0)
    vector<int> v2(5, 10);         // vector of size 5 with all values initialized to 10
    vector<int> v3{1, 2, 3, 4, 5}; // vector initialized with a list of values
    vector<int> v4(v3);            // vector initialized as a copy of v3
    vector<int> v = {10, 20, 30};
    cout << v.at(1);
    cout << v[1];
    cout << v.front();
    cout << v.back();
    int *ptr = v.data();
    v.capacity();
    vector<int> v_new;

    v_new.push_back(10);
    v_new.push_back(20);

    cout << v_new.capacity();

    cout << v_new.empty();

    v_new.clear();
    return 0;
}