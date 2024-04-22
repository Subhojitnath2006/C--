#include <iostream>
using namespace std;
int main(){

    int a;
    cout<<"enter first number: ";
    cin>>a;
    int b;
    cout<<"enter second number: ";
    cin>>b;
    int c;
    cout<<"enter third number: ";
    cin>>c;
    // a>b and b>c --> a>c --> a geartest

    if(a>b){ // b can never be the greatest
      if(a>c) cout<<a<<" is greatest";
      else cout<<c<<" is greatest";
    }
    else{ //b>a
       if(b>c)  cout<<b<<" is greatest";
       else cout<<c<<" is greatest";
    }
    return 0;
}