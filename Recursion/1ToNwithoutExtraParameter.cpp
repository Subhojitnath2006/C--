#include <iostream>
using namespace std;

void printNto1(int n){
    if (n==0) return; //base case
    
    printNto1(n-1); //call
    cout<<n<<endl; //work
    
}
int main()
{
 int n;
 cout<<"enter a number: ";
 cin>>n;
printNto1(n); 

    return 0;
}