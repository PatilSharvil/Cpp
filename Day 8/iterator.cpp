#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 
    vector<int> v = {1,2,4,5};
    vector<int>::iterator it = v.begin();
    v.insert(it+3, 3);

    for (auto val: v) {
        cout << val << " ";
    }
    // another method used for the iterator is using the advance

    vector<int> l = {1, 2, 4, 5};
    it = l.begin();
    advance(it, 3);
    l.insert(it, 3);
    for (auto val: l) {
        cout << val << " ";
    }
    return 0;
}