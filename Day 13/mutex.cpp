#include<iostream>
#include<bits/stdc++.h>
using namespace std;

mutex m;
int counter = 0;

void update() {
    for (int i = 0; i < 10000; i++) {
        m.lock();
        counter++;
        cout << counter << endl;
        m.unlock();
    }
}

int main(int argc, char** args) { 
    thread t1(update);
    thread t2(update);
    
    t1.join();
    t2.join();

    cout << "Final Counter: " << counter << endl;
    return 0;
}