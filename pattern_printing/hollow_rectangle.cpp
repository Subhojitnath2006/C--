#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "enter a number: ";
    cin >> n;

    int m;
    cout << "enter a number: ";
    cin >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++) {
            if( i==1 ||i==n||j==1||j==n) cout<<'*'<<" ";
            else cout<<" "<<" ";
            
        }
      cout << endl;
    }
    return 0;
}