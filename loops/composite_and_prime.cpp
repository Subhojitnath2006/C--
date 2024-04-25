#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int count=0;
    for(int i=1;i<=(n/2);i++){
        if(n%i==0){
            count++;
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else if(count==1) cout<<"prime";
    else cout<<"composite";

}