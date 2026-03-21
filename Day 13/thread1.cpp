#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int x) {
    cout << x << endl;
}

int main() {
    thread t(print, 10);
    t.join();
}