// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter a number: ";
//     cin>>n;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<(2*n-1);j++){
//             if((j+i)==4 && j<=(n+1)/2){
//                 cout<<'*'<<" ";
//             }
//             else if((j-i)==4 && ( j>=(n+1)/2 && j<2*n-1)){
//                 cout<<'*'<<" ";
//             }
//             else{
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter a number: ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<(char)(j+64)<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i+j>=n && i>=j+n){
                cout<<'*'<<" ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}