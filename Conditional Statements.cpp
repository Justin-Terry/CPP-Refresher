#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string nums[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Write Your Code Here
    if(n < 10){
        cout << nums[n] << endl;
    }else{
        printf("%s", "Greater than 9");
    }

    return 0;
}
