#include <iostream>
using namespace std;

int main(){
    string str1, str2;

    cout << "Enter first string: ";
    cin >> str1;

    cout<< "Enter second string: ";
    cin >> str2;

    string result = str1 + str2 ;
    cout<< "Concatinate string: "<< result << endl;

    return 0;
}