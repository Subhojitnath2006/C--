#include <iostream>
using namespace std;
int main(){

    int arr[5]={6,2,8,5,0};
    int size=(sizeof arr)/(sizeof arr[0]);
    // cout<<size<<endl;
    // int sum=0;
    for(int i=0;i<size;i++){
        if(i%2==0) arr[i]= arr[i]*2;
        else arr[i]+=10;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}