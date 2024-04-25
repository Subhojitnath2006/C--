#include <iostream>
using namespace std;
int main(){
   
   int a,b;
   cout<<"enter two numbers: ";
   cin>>a>>b;

   char op;
   cout<<" enter a operator: ";
   cin>>op;

   switch(op){
    case '+' : cout<<"the sum is: "<<a+b;
    break;
    case '-' : cout<<"the subtraction is: "<<a-b;
    break;
    case '*' : cout<<"the multiplication is: "<<a*b;
    break;
    case '/' : cout<<"the division is: "<<a/b;
    break;
    default: cout<<"enter valid operator";

   }
    
}