#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* data;

public:
    String(const char* str) {
        cout << "Constructor called\n";
        data = new char[strlen(str) + 1];
        strcpy(data, str);
    }

    String(const String& other) {
        cout << "Copy Constructor called\n";
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    String(String&& other) noexcept {
        cout << "Move Constructor called\n";
        data = other.data;
        other.data = nullptr;
    }

    ~String() {
        cout << "Destructor called\n";
        delete[] data;
    }

    void print() const {
        if (data)
            cout << data << endl;
        else
            cout << "Empty\n";
    }
};

int main() {
    String s1("Hello");
    String s2 = s1;
    String s3 = std::move(s1);

    s1.print();
    s2.print();
    s3.print();

    return 0;
}
