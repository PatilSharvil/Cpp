#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void update(int &x) {
    x += 10;
    cout << x;
}

int main() {
    int val = 5;
    thread t(update, ref(val)); // must use ref()
    t.join();
}
