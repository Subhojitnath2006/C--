#include <iostream>
using namespace std;
int main(){

    int x=3;
    int* p= &x;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;

    return 0;
}

//pointers--> acess the value of the variable whose address is in the pointer--> using dereference(*) opreator.
