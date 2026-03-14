#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(int argc, char** args) { 
    
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    for (auto val : d) {
        cout << val << endl;
    }

    d.pop_back();
    cout << endl;
    d.pop_front();
    cout << endl;

    d.push_front(111);

    for (auto val : d) {
        cout << val << endl;
    }


    return 0;
}