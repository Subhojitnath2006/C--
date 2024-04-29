#include <iostream>
#include <cmath>
using namespace std;

int power(int a,int b)
{
   
    if(b==1) return a;
   
    if(b%2==0){
        return power(a,(b/2))*power(a,(b/2));
    }
    if(b%2!=0){
        return power(a,((b+1)/2))*power(a,((b-1)/2));
    }
}
int main()
{
    int a;
    cout << "enter a number: ";
    cin >> a;
    int b;
    cout << "enter the power: ";
    cin >> b;
    cout << power(a,b);

    return 0;
}