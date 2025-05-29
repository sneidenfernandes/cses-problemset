#include<bits/stdc++.h>
using namespace std;




// Goal: To find the longest substring of a unique character

// Attempt 1


// int repititions(string dna){

//     unordered_map<char, int> temp;

//     for(int i = 0; i < dna.length(); i++){
//         // simple letter counter
//         char ch = dna[i];
//         temp[ch]++;

//         // reset letter counter to zero if it encoutners it again    // The problem with this approach was that it reset the counter to zero time it came across a new substring,
//         if(dna[i] != dna[i+1] && temp.count(dna[i+1]) > 0){          // regardless of whether it was the longest substring
//             temp[dna[i+1]] = 0;                                      // For instnace, take AABBBAABB. Despite "BBB" being the longest substring with a count of 3.  
//         }                                                            // The program would output 2, as the count of the longest substring was reset to zero when traversing from the "BBB"
                                                                        // substring to the "AA" substring    

//     }


//     int greatest = 0;
//     for(auto it: temp){
//         if(it.second > greatest){   
//             greatest = it.second;
//         }
//     }

//     return greatest;
// }


// 2nd approach would be to chunk all of the substrings sepreately and if count of a substring of the same letter already exists in the map, make sure the max of the two is inputed in the map


// 3rd approad: Ditch the map, you don't need a map of all the string, you just 


int repititions(string dna){
    int current_length = 1;
    int max_length = 1;

    for(int i = 1; i < dna.length(); i++){
        
        if(dna[i] == dna[i-1]){
            current_length += 1;
        }
        
        if(dna[i] != dna[i-1]){
            current_length = 1;
        }

        if(current_length > max_length){
            max_length = current_length;
        }

    }

    return max_length;
    
}

int main(){
    
    string dna;
    cin >> dna;
    cout << repititions(dna) << endl;
    
}
