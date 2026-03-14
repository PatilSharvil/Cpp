#include<iostream>
#include<map>
using namespace std;

int main(int argc, char** args) { 
    
    map<int, string> m;
    m[1] = "one";
    m.insert({2, "two"});
    m.insert({3, "three"});

    m.erase(2); // Erase the element with key 2

    if (m.find(2) != m.end()) {
        cout << "Key 2 found: " << m[2] << endl;
    } else {
        cout << "Key 2 not found" << endl;
    }

    if (!m.count(3)) {
        cout << "Key 3 not found" << endl;
    } else {
        cout << "Key 3 found: " << m[3] << endl;
    }

    cout << "Number of elements in the map: " << m.size() << endl;

    cout << "Elements in the map:" << endl;
    for (const auto& pair : m) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    m.clear(); // Clear all elements from the map

    return 0;
}





