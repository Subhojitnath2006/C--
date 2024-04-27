#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    int reverse=0;
    
    // for(int i=n;i>0;){
    //     reverse= (reverse*10) +(i%10);
    //     i=i/10;
    // }

    // while(n!=0){
    //     reverse= (reverse*10) +(n%10);
    //     n=n/10;
    // }
    cout<<"Reversed number: "<<reverse;
    return  0;
}