#include <iostream>
using namespace std;
int main(){

    // string x="Subhojit Nath";

    string s;
    cout<<"enter a string: ";
    getline(cin,s);
    int count=0;
    int n= s.length();
     for(int i=0;i<=n;i++){
        if(s[i]=='a' ||s[i]=='A'||s[i]=='e' ||s[i]=='E'||s[i]=='i' ||s[i]=='I'||s[i]=='o' ||s[i]=='O'||s[i]=='u' ||s[i]=='U'){
           count++;
        }
     }
     
    cout<<"the no of vowel is: "<<count;
    return 0;
}