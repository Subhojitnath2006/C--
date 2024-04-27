#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) {
            // if((i*j)%3 == 0){
            //     cout<<'*'<<" ";
            // }
            // else{
            //     cout<<" "<< " ";
            // }

            //another method
           int  mid=(n/2)+1;
            if(i==mid || j==mid) cout<<'*'<<" ";
            else cout<<" "<<" ";
            
        }
      cout << endl;
    }
    return 0;
}