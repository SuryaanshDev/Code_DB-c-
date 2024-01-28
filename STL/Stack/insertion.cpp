    #include<bits/stdc++.h>

    using namespace std;

    int main() {

        stack<int> s;

        //first method for insertion

        s.push(23);
        s.push(49);
        s.push(17);
        s.push(6);

        //to get the size we use size function

        cout << "Size of stack = " << s.size() << endl;

        while(!s.empty()) {

            cout << s.top();
            
            s.pop();

            cout << endl;
        }
    }