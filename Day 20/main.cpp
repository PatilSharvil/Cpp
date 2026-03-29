#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

class Student {
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

    auto getName() const {
        return this->name;
    }

    auto getMarks() const {
        return this->marks;
    }

    auto getGrade() const {
        if (this->marks >= 90) return 'A';
        else if (this->marks >= 80) return 'B';
        else if (this->marks >= 70) return 'C';
        else if (this->marks >= 60) return 'D';
        else if (this->marks >= 50) return 'F';
        else return '-';
    }

    auto operator>(const Student& other) const {
        return this->marks > other.marks;
    }

    auto operator==(const Student& other) const {
        return this->id == other.id;
    }

    friend ostream& operator<<(ostream& os, const Student& s);
};

ostream& operator<<(ostream& os, const Student& s) {
    os << "ID: " << s.id
       << ", Name: " << s.name
       << ", Marks: " << s.marks
       << ", Grade: " << s.getGrade();
    return os;
}

void saveStudents(const vector<Student>& students, const string& filename) {
    ofstream outFile(filename);
    
    if (!outFile) {
        cout << "Error: Could not create file!" << endl;
        return;
    }
    
    outFile << students.size() << endl;
    
    for (const auto& s : students) {
        outFile << s.getid() << endl;
        outFile << s.getName() << endl;
        outFile << s.getMarks() << endl;
    }
    
    outFile.close();
    cout << "Saved " << students.size() << " students to " << filename << endl;
}

vector<Student> loadStudents(const string& filename) {
    ifstream inFile(filename);
    vector<Student> students;
    
    if (!inFile) {
        cout << "Error: Could not open file!" << endl;
        return students;
    }
    
    int count;
    inFile >> count;
    
    for (int i = 0; i < count; i++) {
        int id, marks;
        string name;
        inFile >> id >> name >> marks;
        students.push_back(Student(id, name, marks));
    }
    
    inFile.close();
    cout << "Loaded " << students.size() << " students from " << filename << endl;
    return students;
}

int main() {
    vector<Student> students = {
        Student(101, "Sharvil", 95),
        Student(102, "Nidhi", 87),
        Student(103, "Vaishnavi", 92)
    };
    
    cout << "=== Original Students ===" << endl;
    for (const auto& s : students) {
        cout << s << endl;
    }
    
    saveStudents(students, "students.txt");
    
    cout << "\n=== Loading from File ===" << endl;
    vector<Student> loaded = loadStudents("students.txt");
    
    cout << "\n=== Loaded Students ===" << endl;
    for (const auto& s : loaded) {
        cout << s << endl;
    }
    
    cout << "\n=== Verification ===" << endl;
    if (students.size() == loaded.size()) {
        cout << "Success! All students saved and loaded correctly." << endl;
    } else {
        cout << "Error: Student count mismatch!" << endl;
    }
    
    return 0;
}
