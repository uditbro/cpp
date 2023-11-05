//average of two numbers.
#include<iostream>
using namespace std;

int main(){
    float number1, number2, sum, average;
    cout << "Enter number 1: ";
    cin >> number1 ;
    cout << "Enter number 2: ";
    cin >> number2 ;

    sum = number1 + number2 ;
    average = sum/2;
    cout << "sum = " << sum << "\n";
    cout << "average = " << average <<"\n";

    return 0;

}