#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.back();

    cout << q.front();

    q.pop();

    for (int i = 0; i < 2; i++) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}