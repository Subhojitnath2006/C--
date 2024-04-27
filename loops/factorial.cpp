// #include <iostream>
// using namespace std;
// int main(){

//     int n;
//     cout<<"enter a number: ";
//     cin>>n;
   
//    int fac= 1;
//    for(int i=1;i<=n;i++){
//     fac= fac*i;
//    }
//     cout<<"Factorial is: "<<fac;
//     return  0;
// }

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter a number: ";
    cin>>n;
   
   int fac= 1;
   for(int i=1;i<=n;i++){
    fac= fac*i;
    cout<<"Factorial of "<<i<<"is: "<<fac<<endl;
   }
    
    return  0;
}