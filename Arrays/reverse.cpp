#include <iostream>
#include <climits>
using namespace std;
int swap(int* x,int* y){
    int temp= *y;
    *y=*x;
    *x=temp;
}
int main(){

    int arr[5]={6,2,8,5,0};
    int size=(sizeof arr)/(sizeof arr[0]);
    int brr[size];
    int i=0;
    int j=size-1;
    //reverse
    while(i<j){
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }
    for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
    }
   
    return 0;
}