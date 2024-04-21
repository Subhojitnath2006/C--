#include <iostream>
using namespace std;
int main(){

    int cp;
    cout<<"enter cost price: ";
    cin>>cp;

    
    int sp;
    cout<<"enter selling price: ";
    cin>>sp;
    if(sp>cp){
        cout<<"profit is: "<<sp-cp;
    }else if(sp<cp){
        cout<<"loss is: "<<cp-sp;
    }else{
        cout<<"no profit no loss";
    }
    return 0;
}