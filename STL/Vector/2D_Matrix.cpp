#include<bits/stdc++.h>

using namespace std;

int main() {

    int rows, columns;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << endl << "Enter the number of columns: ";
    cin >> columns;

    vector<vector<int>> matrix(rows, vector<int>(columns));

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < columns; j++) {

            cin >> matrix[i][j];
        }
    }

   for(int i = 0; i < rows; i++) {

        for(int j = 0; j < columns; j++) {

            cout << matrix[i][j] << " ";
        }

        cout << endl;
    } 
}