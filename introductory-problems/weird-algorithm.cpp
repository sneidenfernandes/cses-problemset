#include <iostream>
using namespace std;


// Recursive Solution

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


// Iterative Solution

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

// note: use the long long type as "n = 3 * n * 1" operation wil outputs numbers that exceed the range of the int type.

int main() {
   long long n;
   cin >> n;
   wierdAlgorithmIterative(n);
   cout << endl;
   return 0;
}