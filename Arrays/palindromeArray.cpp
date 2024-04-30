#include <iostream>
#include <climits>
using namespace std;

int main(){

    int arr[]={1,2,3,4,6,2,1};
    int size=(sizeof arr)/(sizeof arr[0]);
    int brr[size];
    int i=0;
    int j=size-1;
    bool flag=true;
    //reverse
    while(i<j){
        if(arr[i]!=arr[j]){
           flag= false;
        }
        i++;
        j--;
    }
    if(flag==true) cout<<"Array is palindrome";
    else cout<<"Array is not palindrome";
   
    return 0;
}