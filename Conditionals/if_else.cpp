#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
    if(n%2==0){
        cout<<n<<" is even";
    }else{
        cout<<n<<" is odd";
    }
    return 0;
}