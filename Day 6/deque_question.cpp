#include<iostream>
#include<bits/stdc++.h>
#include<deque>
using namespace std;
//rotate first k elements : 
int main(int argc, char** args) { 
    deque<int> d = {1,2,3,4,5};
    int k = 3;

    vector<int> temp;

    while (k-- > 0) {
        temp.push_back(d.front());
        d.pop_front();
    }

    for (int i = 0; i < temp.size(); i++) {
        d.push_front(temp[i]);
    }

    for (auto val : d) {
        cout << val << endl;
    }
    
    return 0;
}