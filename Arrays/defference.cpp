#include <iostream>
using namespace std;
int main(){

    int arr[5]={6,2,8,5,0};
    int size=(sizeof arr)/(sizeof arr[0]);
    int sumEven=0,sumOdd=0;
    for(int i=0;i<size;i++){
        if(i%2==0){
            sumEven+=i;
        }else{
            sumOdd+=i;
        }
    }
    cout<<sumEven-sumOdd;
   

    return 0;
}