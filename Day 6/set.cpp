#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(int argc, char** args) { 
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);

    s.count(20); // Check if 20 exists in the set
    s.erase(20); // Erase the element 20 from the set
    s.empty(); // Check if the set is empty

    s.emplace(40); // Insert 40 into the set using emplace
    s.emplace(50); // Insert 50 into the set using emplace

    s.find(30); // Find the element 30 in the set
    s.size(); // Get the number of elements in the set

    s.clear(); // Clear all elements from the set
    
    return 0;
}