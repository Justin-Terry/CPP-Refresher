#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    scanf("%i %i", &a, &b);

    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i = a; i <= b; i++){
        if(i <= 9){
            cout << nums[i] << endl;
        } else if(i % 2 == 0){
            cout << "even" << endl;
        } else{
            cout << "odd" << endl;
        }
    }


    return 0;
}

