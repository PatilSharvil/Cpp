#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    ~Node() {
        if (this-> next != NULL) {
            delete next; // Recursively delete the next node
            this->next = NULL; // Set the next pointer to NULL after deletion
        }
    }
};


int main(int argc, char** args) { 
    int* arr = new int[100];
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    delete head; // Deallocate the memory allocated for the linked list
    delete[] arr; // Deallocate the memory allocated for the array
    return 0;
}