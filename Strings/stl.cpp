#include <iostream>
using namespace std;
int main(){

    // string x="Subhojit Nath";

    string s="subhojit ";
    cout<<s<<endl;


    s.push_back('a'); //add any character at the end of the string
    cout<<s<<endl;

    s.pop_back(); //remove one character from the end of the string
    cout<<s<<endl;

    s.append("nath"); //add another string at the end
    cout<<s<<endl;

    s.clear();
    cout<<s<<endl; //uses to clear th whole string

    
    
    return 0;
}