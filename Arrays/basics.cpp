#include <iostream>
using namespace std;
int main(){

    int arr[5]={6,2,8,5,0};
    int size=(sizeof arr)/(sizeof arr[0]);
    cout<<size<<endl;
    int sum=0;
    for(int i=0;i<size;i++){
        sum= sum+arr[i];
    }
   cout<<sum;

    return 0;
}