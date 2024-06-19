#include <iostream>
using namespace std;

int main(){
    int num;
    cout<< "Enter an integer: ";
    cin >> num;

    if (num % 2 == 0)
        cout<< num <<" Is an even Number";
    else 
        cout<< num << " Is an odd Number";

    return 0;

}