#include<bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;

    //Push an element to the last of the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    //get the size of queue

    cout << "Size of Queue: " << q.size() << endl;

    //Iterate till queue is not empty
    while (!q.empty()) {

        cout << q.front() << endl;
        q.pop();
    }

    cout << "Size of Queue: " << q.size();
    
}