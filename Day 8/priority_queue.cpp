#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Priority queue always keeps the biggest number at the top/ front of the queue and it is used in dijkstra and etc algorithms 
int main(int argc, char** args) { 
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);
    pq.push(60);
    pq.push(70);
    pq.push(5);

    cout <<"Top element: " << pq.top() << endl;

    while (!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}