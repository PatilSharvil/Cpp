#include<iostream>
#include<bits/stdc++.h>
#include<memory>
using namespace std;

int main(int argc, char** args) { 

    shared_ptr<int> ptr1 = make_shared<int>(3003);
    cout << "Ptr Value : " << *ptr1 << endl;
    cout << "Reference Count : " << ptr1.use_count() << endl;

    shared_ptr<int> ptr2 = ptr1;
    cout << "After copying reference ptr1 count: " << ptr1.use_count() << endl; 
    cout << "After copying reference ptr2 count: " << ptr2.use_count() << endl;
    
    return 0;
}