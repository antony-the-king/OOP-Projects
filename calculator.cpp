#include <iostream>
#include <cmath>
using namespace std;

int main (){
    float num1;
    float num2;
    float sum;
    float product;
    float division;
    float modulas;


cout<< "Enter the first number\n";
cin>> num1;
/*if(num1 % 2 ==0 ){
    cout << "The first number you entered is even"<<endl ;
}
else {
    cout<< "The first number is  odd"<<endl;
}*/

cout << "Enter the second number\n";
cin>> num2;

/*if(num2 % 2 ==0 ){
    cout << "The second  number you entered is even"<<endl ;
}
else {
    cout<< "The second number is  odd"<<endl;
}*/
sum = num1 + num2;
product = num1 * num2;
division = num1 / num2;
//modulas = num1 % num2;

    cout << num1  <<" + "<< num2 <<" = " << sum << endl;
    cout << num1 << " x "<< num2 << " = "  << product<< endl;
    cout << num1 << " / "<< num2 <<" = " << division << " and its remainder is: "<< modulas;
   

}

