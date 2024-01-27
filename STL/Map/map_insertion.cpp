#include<bits/stdc++.h>

using namespace std;

int main() {

    map<int, int> m1, m2;
//first method to insert elements in a map.
    m1.insert(make_pair(1,10));
    m1.insert(make_pair(2,11));
    m1.insert(make_pair(3, 12));

    for(auto it:m1) {

        cout << it.first << " " << it.second << endl;
    }

    //second method to insert elements in a map.
    m2[10] = 100;
    m2[20] = 200;
    m2[30] = 300;

    for(auto it:m2) cout << it.first << " " << it.second << endl;

    string name = "Suryaansh";
    map<char, int> myChar; 
    
    for(auto x:name) myChar[x]++;

    for(auto x:myChar) cout << x.first << " " << x.second << endl;
}