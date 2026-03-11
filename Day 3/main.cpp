#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char** args) { 

    int* ptr = new int(10);// allocated in heap
    cout << *ptr << endl; // 10
    cout << ptr << endl; // address of the allocated memory
    cout << &ptr << endl; // address of the pointer variable itself
    cout << sizeof(ptr) << endl; // size of the pointer variable (usually 8 bytes on a 64-bit system)
    
    delete ptr; // deallocate the memory
    return 0;
}