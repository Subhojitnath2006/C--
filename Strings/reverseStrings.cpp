#include <iostream>
using namespace std;
int main(){


//integer to string
    int x=46273;
     string s=to_string(x);

     cout<<s.length()<<endl;

     cout<<s<<endl;

//string to integer

string str="1621";
int a=stoi(str);
cout<<a<<endl;
    
    return 0;
}