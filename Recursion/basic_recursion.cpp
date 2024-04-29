// #include <iostream>
// using namespace std;

// void printNto1(int n){
//     if (n==0) return;
//     cout<<n<<endl;
//     printNto1(n-1);
    
// }
// int main()
// {
//  int n;
//  cout<<"enter a number: ";
//  cin>>n;
// printNto1(n); 

//     return 0;
// }

// print 1 to n using recursion

#include <iostream>
using namespace std;

void print1toN(int x,int n){
    if (x>n) return;
    cout<<x<<endl;
    print1toN(x+1,n);
    
}
int main()
{
    
 int n;
 cout<<"enter a number: ";
 cin>>n;
 print1toN(1,n); 

    return 0;
}