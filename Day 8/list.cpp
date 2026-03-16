#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **args)
{

    list<int> l;
    l.push_front(1);
    l.push_front(11);
    l.push_front(111);
    l.push_back(2);
    l.push_back(22);
    l.push_back(222);

    for (auto val : l) {
        cout << val << " ";
    }

    for (int i = 0; i < 3; i++) {
        cout << "Popped: " << l.back();
        l.pop_back();
    }

    for (int i = 0; i < 3; i++) {
        cout << "Popped: " << l.front();
        l.pop_front();
    }
    cout << endl;
    auto it = l.begin();
    advance(it, 1);
    
    for (int i = 0; i < 5; i++) {
        l.push_back(i);
    }

    l.insert(it, 1000);

    for (auto val : l) {
        cout << val << " ";
    }

    return 0;
}