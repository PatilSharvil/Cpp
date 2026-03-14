#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int main(int argc, char** args) { 
    unordered_set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(10);// Duplicate elements will not be added to the unordered_set
    s.count(20); // Check if 20 exists in the unordered_set
    s.erase(20); // Erase the element 20 from the unordered_set
    s.empty(); // Check if the unordered_set is empty
    s.emplace(30); // Insert 30 into the unordered_set using emplace
    s.emplace(40); // Insert 40 into the unordered_set using emplace
    s.find(30); // Find the element 30 in the unordered_set
    s.size(); // Get the number of elements in the unordered_set
    s.clear(); // Clear all elements from the unordered_set
    return 0;
}