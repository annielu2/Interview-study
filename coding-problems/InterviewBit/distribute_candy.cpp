#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> A = {1, 2, 2, 2, 1};
    int n = A.size();
    int ans = 0;
    int toRight[n];
    int toLeft[n];
    
    toRight[0] = 1;
    toLeft[n-1] = 1;
    
    for(int i = 0; i < n-1; i++){
        if(A[i] < A[i+1]){
            toRight[i+1] = toRight[i]+1;
        }
        
        else{
            toRight[i+1] = 1;
        }
        
        
        if(A[n-1-i] < A[n-2-i]){
            toLeft[n-2-i] = toLeft[n-1-i]+1;
        }

        else{
           toLeft[n-2-i] = 1; 
        }
    }
    
    for(int i = 0; i < n; i++){
        ans += max(toRight[i], toLeft[i]);
    }

    cout << ans;
}