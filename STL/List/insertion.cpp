#include<bits/stdc++.h>
using namespace std;

void displayList(list<int> l) {

    for(auto x:l) {

        cout << x << " " << endl;
    }
}

int main() {

    list<int> li;
    
    li.push_back(11);
    li.push_back(23);
    li.push_back(213);
    li.push_back(32);

    displayList(li);

    cout << "Front element of the list: " << li.front();
    cout << endl << "Back element of the list: " << li.back() << endl;

    //Delete the front element
    li.pop_front();

    //Delete the back element
    li.pop_back();

    li.sort();

    displayList(li);  
}