#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int result = 0;

    for(int i = 0; i < 3; i++){
        int temp;
        cin >> temp;
        result += temp;
    }

    cout << result << endl;

    return 0;
}
