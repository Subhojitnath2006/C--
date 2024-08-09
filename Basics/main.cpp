// #include <iostream>

// using namespace std;

// int main() 
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//       cin>>arr[i];
//     }
//     int min=-1;
//     for(int i=0;i<n;i++){
//       if(arr[i]<min){
//         min=arr[i];
//       }
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//       if(arr[i]==min){
//         count++;
//       }
//     }
//     if(count!=2){
//       cout<<"Array is lucky";
//     }else{
//       cout<<"Arrat is not lucky";
//     }
//     return 0;
// }

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
      cin>>b[i];
    }
    sort(b,b+n);
    sort(a,a+n);
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            flag=false;
        }
    }
    if(flag==true){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return 0;
}