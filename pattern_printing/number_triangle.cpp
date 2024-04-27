#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

     for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
    }
    return  0;
}

//output
// 4
// 4 3
// 4 3 2
// 4 3 2 1