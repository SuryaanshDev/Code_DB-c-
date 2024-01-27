#include<bits/stdc++.h>

using namespace std;

int main() {

    set<int> b;

    int i = 0;

    while (i < 6) {
        
        b.insert(1+i);
        i++;
    }
    
    for(int c:b) {

        cout << c << " ";
    }
}