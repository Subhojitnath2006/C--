#include <iostream>
using namespace std;

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{

    int x = 3;
    int y = 5;

    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y;

    return 0;
}