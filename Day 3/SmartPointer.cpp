#include<iostream>
#include<bits/stdc++.h>
#include<memory>
using namespace std;

int main(int argc, char** args) { 
    //when we use the unique pointer then there is no need to free the memory manually it automatically gets released when the pointer goes out of scope
    
    unique_ptr<int> ptr = make_unique<int>(10);
    cout << *ptr << endl;

    return 0;
}