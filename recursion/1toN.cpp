#include <iostream>
using namespace std;
    void printNumbers(int n) {
        // Your code goes here
        if(n<1)
            return;
        int temp = n;
        n = n-1;
        printNumbers(n);
        cout << temp << endl;
    }

    int main(){
        printNumbers(10);
        return 0;
    }