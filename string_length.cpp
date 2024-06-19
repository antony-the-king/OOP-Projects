#include <iostream>
using namespace std;

int main(){
    string str;
    cout << "Enter a word: ";

    cin>> str;

    int length = str.length();

    cout << "Length of the word is: " << length << endl;

    return 0;
}