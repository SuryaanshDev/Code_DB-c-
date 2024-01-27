#include<bits/stdc++.h>

using namespace std;

int main () {

    set<pair<int, int>> sp;

    sp.insert({4,10});
    sp.insert({6,15});
    sp.insert({23,30});
    sp.insert({32,3});
    sp.insert({46,60});

    for(pair<int, int> x: sp) {

        cout << "{" << x.first << x.second << "}, ";
    }
    
    cout << endl;
}