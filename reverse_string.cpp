#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversed = string(str.rbegin(),str.rend());

    cout<< "Reversed string is : "<< reversed << endl;

    return 0;
}
