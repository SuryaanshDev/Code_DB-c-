#include<bits/stdc++.h>
using namespace std;

void displayVector(vector<int> & v) {

    for(vector<int>:: iterator it = v.begin(); it != v.end(); it++) {//Iteration loop

        cout << *it << " ";
    }
}

void autoVector(vector<int> & v) {

    for(auto it = v.begin(); it != v.end(); it++) {//Iteration loop with auto keyword

        cout << *it << " ";
    }
}

void shorthand(vector<int> &v) {

    for(auto it:v) {

        cout << it << " ";
    }
}

int main() {

    vector<int> a = {4, 5, 6, 7, 8, 9};

    displayVector(a);
    cout << endl;

    autoVector(a);
    cout << endl;

    shorthand(a);

}