#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Complex {
    double real, imag;
    
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    
    // Addition - as member function
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    
    // Subtraction - as member function
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }
    
    // Multiplication - as member function
    Complex operator*(const Complex& other) const {
        return Complex(
            real * other.real - imag * other.imag,
            real * other.imag + imag * other.real
        );
    }
    
    // Division - as member function
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex(
            (real * other.real + imag * other.imag) / denominator,
            (imag * other.real - real * other.imag) / denominator
        );
    }
    
    void print() const {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1(3, 4);
    Complex c2(1, 2);
    
    Complex c3 = c1 + c2;  // operator+
    Complex c4 = c1 - c2;  // operator-
    Complex c5 = c1 * c2;  // operator*
    Complex c6 = c1 / c2;  // operator/
    
    c3.print();
}
