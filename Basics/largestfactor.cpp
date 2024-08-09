// #include <iostream>
// using namespace std;

// int isPrime(int x){
//   int count=0;
//   for(int i=1;i<=(x/2);i++){
//     if(x%i==0){
//       count++;
//     }
//   }
//   if(count==1) return x;
  
// }
// int main() 
// {
//     int n;
//     cin>>n;
//     if(isPrime(n)){
//       cout<<n;
//     }
//     else {
//       for(int i=n;i>1;i--){
//         if(isPrime(i)){
//           cout<<i;
//           break;
//         }
//       }
//     }
    
//     return 0;
// }

#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x <= 1){
        return false;
    }
        
    for (int i = 2; i<= (x/2); i++) {
        if (x % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << n;
    } else {
        for (int i = n; i > 1; i--) {
            if (isPrime(i)) {
                cout << i;
                break;
            }
        }
    }
    return 0;
}
