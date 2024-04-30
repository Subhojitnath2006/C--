#include <iostream>
#include <climits>
using namespace std;
int main(){

    int arr[5]={6,2,8,5,0};
    int size=(sizeof arr)/(sizeof arr[0]);
    int mx=INT_MIN;
    for(int i=0;i<size;i++){
        mx= max(mx,arr[i]);
    }
    int smax=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]!=mx){
        smax= max(smax,arr[i]);
        }
    }
   cout<<smax;
    return 0;
}