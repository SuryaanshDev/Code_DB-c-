#include<bits/stdc++.h>

using namespace std;

int main() {

    unordered_map<char, int> um;

    map<int, int> m;

    string s = "Suryaansh";

    for(char c:s) um[c]++;

    for(char c:s) m[c]++;

    for(auto x:um) cout << x.first << " " << x.second << endl;

    for(auto x:m) cout << x.first << " " << x.second << endl;
}