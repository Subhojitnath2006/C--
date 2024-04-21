#include <iostream>
using namespace std;
int main(){
 // importance is divisibility questions
    int x;
    cout<<"enter first number: ";
    cin>>x; // >> use to take input.
    int y;
    cout<<"enter second number: ";
    cin>>y; // >> use to take input.

    
    cout<<"the remainder is: "<< x%y; // is the remainder when x is divided by y.

    //some important points
    // a%b ==a [if a<b]
    // a%a == 0
    // a % b ==0 when b is a factor of a
    // a % (-b) == a%b
    // (-a) % b == -[a%b]
    return 0;
}