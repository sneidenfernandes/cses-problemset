#include<bits/stdc++.h>


using namespace std;


// This is the naive approach 
int missingNumberN(int n, vector<int> v){
   for(int i = 1 ; i <= n; i++){
        bool not_found = false;
        for(int j = 0; j < n - 1 ; j++){
            if(i == v[j]){
                not_found = true;
                break;
            } 
        }
        if(!not_found){
           return i; 
        }
   }

   return 0;

}

// The smarter appraoch is use the sum of n natural numbers formula i.e (n)*(n+1) / 2.
// Calculate the sum of the given numbers i.e the actual sum 
// Calculate the sum of n numebers i.e the expected sum 
// Subract the actual sum from the expected sum to get the missing value



// XOR appraoch
int missingNumber(const vector<int>& nums){
    long long n = nums.size() + 1;
    long long expected_sum = (n*(n+1))/2;

    long long actual_sum = 0;
    
    for(int i = 0; i <= nums.size() - 1; i++){
        actual_sum += nums[i];
    }

    return expected_sum - actual_sum;

}

int missingNumberXOR(const vector<int>& nums){
    int n = nums.size() + 1;
    int xor_all = 0, xor_array = 0;

    for (int i = 0; i <= n ; i++){
        xor_all ^= i;
    }

    for (int i = 0; i <= n - 1; i ++){
        xor_array ^= nums[i];
    }

    return xor_all ^ xor_array;
}

int main(){

    int n;

    cin >> n;
    vector<int> arr(n - 1);
    for(int i = 0; i < n - 1; i++){
        cin >> arr[i];
    }

    cout << missingNumberXOR(arr) << endl;
     
    return 0;
}