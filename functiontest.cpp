#include <iostream>
using namespace std;

int addition(int x,int y){                     //addition function 
    return (x+y);
};
int subtraction(int x, int y){                 //subtraction function
    return (x-y);
};
float average (float x, float y){                    //average function
    return ((x+y)/2);
};

int main(){
    int x,y;
    cout <<"Enter the value of x and y ,remember (x > y) ";
    cin >> x;
    cin >> y;

    //calling of functions.
    cout <<"The addition of x and y is: " << addition(x,y) << "\n";
    
    cout <<"The subtraction of x and y is: " << subtraction(x,y) << "\n";
    
    cout <<"The average of x and y is: " << average(x,y) << "\n";
    

    return 0;
}
