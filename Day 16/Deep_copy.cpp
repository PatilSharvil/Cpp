#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Array {
    int* data;
    int size;
    
public:
    Array(int s) : size(s) {
        data = new int[size];
        cout << "Constructor\n";
    }
    
    // DEEP COPY - allocate new memory and copy contents
    Array(const Array& other) : size(other.size) {
        data = new int[size];  // Allocate NEW memory
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];  // Copy values
        }
        cout << "Deep Copy Constructor\n";
    }
    
    ~Array() {
        delete[] data;
        cout << "Destructor\n";
    }
};

int main() {
    Array a1(5);
    Array a2 = a1;  // Deep copy - independent memory
    
    return 0;  // No crash!
}