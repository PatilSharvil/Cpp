#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Stack {
    private:
        vector<T> v;
    public:
        void push(T data) {
            v.push_back(data);
        }

        void pop() {
            if(v.size() == 0) {
                cout << "Stack is empty" << endl;
                return;
            }
            v.pop_back();
        }

        T top() {
            try {

            } catch(const exception& e) {
                cout << "Stack is empty" << endl;
            }
            return v[v.size() - 1];
        }

        bool empty() {
            return v.size() == 0;
        }
};


int main(int argc, char** args) { 
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top() << endl; // Output: 3
    s.pop();
    cout << s.top() << endl; // Output: 2
    s.pop();
    cout << s.top() << endl; // Output: 1
    s.pop();
    cout << s.empty() << endl; // Output: 1 (true)


    Stack<string> s2;
    s2.push("Hello");
    s2.push("World");
    cout << s2.top() << endl; // Output: World
    s2.pop();
    cout << s2.top() << endl; // Output: Hello
    cout << s2.empty() << endl; // Output: 0 (false)
    s2.pop();
    cout << s2.empty() << endl; // Output: 1 (true)

    return 0;
}