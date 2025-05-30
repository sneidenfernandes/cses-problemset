#include<bits/stdc++.h>
using namespace std;


long increasingArray(long arr[], int n){

    long moves = 0;

    for (int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            int difference = arr[i-1] - arr[i];
            arr[i] += difference;
            moves  += difference;
        }
    }
    
    return moves;

}


int main(){
    int n; 
    cin >> n; 
    long arr[n];
    
    for (int i = 0; i < n; i++){
         cin >> arr[i];
    }
    
    cout << increasingArray(arr, n) << endl;

    return 0;
}

    
