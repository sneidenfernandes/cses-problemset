#include <iostream>
using namespace std;

// Recursive solution 
// note: keep in mind that using the int type in the function breaks the code in practice, 

void wierdAlgorithmRecursive(long long n){
    cout << n << " ";
    if(n == 1) return;
    
    if(n % 2 == 0){
        wierdAlgorithmRecursive(n/2);
    }
    else{
        wierdAlgorithmRecursive(n * 3 + 1);
    }
}


void wierdAlgorithmIterative(long long n){
    
    while (n > 1){
        cout << n << " ";
        if(n % 2 == 0){
            n /= 2; 
        }else{
            n = n * 3 + 1;
        }
    }
    cout << n << endl;

}

int main() {
   long long n;
   cin >> n;
   wierdAlgorithmIterative(n);
   cout << endl;
   return 0;
}