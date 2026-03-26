#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int marks;

public:
    Student() {
        this->id = 0;
        this->name = "";
        this->marks = 0;
    }

    Student(int id, string name, int marks) {
        this->id = id;
        this->name = name;
        this->marks = marks;
    }

    auto getid() const {
        return this->id;
    }

    auto getGrade() const {

        if (this->marks >= 90) {
            return 'A';
        }
        else if (this->marks >= 80 && this->marks < 90) {
            return 'B';
        }
        else if (this->marks >= 70 && this->marks < 80) {
            return 'C';
        }
        else if (this->marks >= 60 && this->marks < 70) {
            return 'D';
        }
        else if (this->marks >= 50 && this->marks < 60) {
            return 'F';
        }
        else  {
            return '-';
        }
    }

    auto operator>(const Student &other) const {
        return this->marks > other.marks;
    }

    auto operator==(Student &other) const {
        return this->id == other.id;
    }

    friend ostream &operator<<(ostream &os, const Student &s);
};

ostream &operator<<(ostream &os, const Student &s) {
    os << "ID: " << s.id
       << ", Name: " << s.name
       << ", Marks: " << s.marks
       << ", Grade: " << s.getGrade();
    return os; // Return for chaining
}

int main(int argc, char **args) {
    Student s1(101, "Sharvil", 95);
    Student s2(102, "Nidhi", 87);
    Student s3(101, "navivaish", 87);

    cout << "=== Testing operator> ===" << endl;
    if (s1 > s2) {
        cout << "Sharvil has higher marks than Bob" << endl;
    } else {
        cout << "Nidhi has higher marks than Alice" << endl;
    }

    cout << "\n=== Testing operator== ===" << endl;
    if (s1 == s3) {
        cout << "s1 and s3 have the SAME ID" << endl;
    } else {
        cout << "s1 and s3 have DIFFERENT IDs" << endl;
    }

    cout << "\n=== Testing operator<< ===" << endl;
    cout << "Student 1: " << s1 << endl;
    cout << "Student 2: " << s2 << endl;
    cout << "Student 3: " << s3 << endl;

    return 0;

    return 0;
}