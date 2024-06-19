#include <iostream>
using namespace std;

int main(){
    int n ,sum = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout<< "Enter the elements: ";
    for (int i = 0 ; i < n; ++i){
        cin >>arr[n];

    }
    for (int i =0 ;i < n ;++i){
        sum +=arr[n];
    }

    cout<<"The sum of the elements: "<<sum<<endl;

    return 0;
}