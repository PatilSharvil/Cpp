#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void task() {
    cout << "Hello" << endl;
}

int main(int argc, char** args) { 
    thread t(task);
    t.join();
    
    return 0;
}