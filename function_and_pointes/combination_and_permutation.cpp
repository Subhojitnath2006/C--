#include <iostream>
#include <cmath>
using namespace std;
int main(){
   int n;
   cout<<"enter n:";
   cin>>n;

   int r;
   cout<<"enter r: ";
   cin>>r;
   
   int facn=1;
   int facr=1;
   for(int i=1;i<=n;i++){
    facn= facn*i;
   }
   for(int j=1;j<=r;j++){
    facr= facr*j;
   }

   int combination= (facn)/(facr*(facn-facr));
   int permutation= combination* facr;
   cout<<combination<<endl<<permutation;
   return 0;
}