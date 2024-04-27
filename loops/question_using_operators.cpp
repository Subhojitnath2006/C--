#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    int count =0;
    // for(int i=1;i<n;i/=10){
    //     count ++;
    // }

    while(n!=0){
        n= n/10;
        count++;
    }
    cout<<"the no of digits is: "<<count;
    return  0;
}