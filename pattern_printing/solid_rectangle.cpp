#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    int m;
    cout<<"enter a number: ";
    cin>>m;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    return  0;
}