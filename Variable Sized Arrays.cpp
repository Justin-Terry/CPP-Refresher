#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int rows, qs; 
    scanf("%i %i", &rows, &qs);

    vector<vector<int>> rowVec;

    for(int i = 0; i < rows; i++){
        vector<int> temp;
        int cols;
        cin >> cols;
        int t;

        for(int j = 0; j < cols; j++){
            cin >> t;
            temp.push_back(t);
        }
        
        rowVec.push_back(temp);
    }


    for(int i = 0; i < qs; i++){
        int r, c;
        scanf("%i %i", &r, &c);
        cout << rowVec.at(r).at(c) << endl;
    }


    return 0;
}

