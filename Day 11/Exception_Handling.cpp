#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Calc{
    public: 
        
        int division(int a, int b) {
            
                if (b == 0) {
                    throw runtime_error("Second number cant be zero");
                }

                return a / b;
        }
};

int main(int argc, char** args) { 

    Calc a;
    try {
        a.division(5, 0);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}