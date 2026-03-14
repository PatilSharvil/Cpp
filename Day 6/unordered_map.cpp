#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main(int argc, char **args)
{

    unordered_map<int, string> m;
    m[1] = "one";
     m.insert({2, "two"});
     m.insert({3, "three"});
     m.emplace(4, "four");
    cout << m.erase(2); // Erase the element with key 2
    cout << m.count(3); // Check if key 3 exists
    cout << m.empty();
    cout << m.size();
     m.clear(); // Clear all elements from the unordered_map
    return 0;
}