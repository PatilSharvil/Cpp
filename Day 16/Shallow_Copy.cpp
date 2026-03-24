#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Array{
private: 
int size;
int* data;

public: 

Array(int s){
    this->size = s;
    data = new int[size];
    cout << "constructor: allocated "<< size << " ints" << endl;
}

~Array() {
    delete[] data;
}

};

int main(int argc, char** args) { 
    Array a1(5);
    Array a2 = a1;  // Shallow copy
    
    return 0;  // DOUBLE FREE! so the program crashes
    
    return 0;
}