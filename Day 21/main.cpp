#include<iostream>
#include<bits/stdc++.h>
#include<fstream>
using namespace std;
class FileSystem {
    public: 

    fstream file;
    FileSystem() {
        cout << "Opening file..." << endl;
        file.open("file.txt", ios::out | ios::in | ios::trunc);
    }
    void writeToFile(string data) {
        file << data;
    }
    void readFromFile() {
        string data;
        file.seekg(0);
        while(getline(file, data)) {
            cout << data << endl;
        }
    }

    ~FileSystem() {
        cout << "Closing file..." << endl;
        file.close();
    }

};
int main(int argc, char** args) { 
    FileSystem fs;
    fs.writeToFile("Hello, World!");
    fs.readFromFile();

    
    return 0;
}