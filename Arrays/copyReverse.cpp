#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[5]={6,2,8,5,0};
    int size=(sizeof arr)/(sizeof arr[0]);
    int brr[size];
    for(int i=0;i<size;i++){
       brr[size-i-1]=arr[i];
    }
    
    for(int i=0;i<size;i++){
        cout<<brr[i]<<" ";
    }
   
    return 0;
}