#include <cmath>
#include <iostream>
using namespace std;
int main(){
    
    int A = 999999999;
    int mod = 1000000007;
    long long int ans = 0;
    while(A > 0){
        
        long long logValue = floor(log2(A));
        long long maxPower = pow(2, logValue);
        
        long long bitsOne = maxPower * logValue / 2;
        
        long long difference = A - maxPower;
        
        ans += (bitsOne + difference + 1);
        
        A = difference;
        
    }
    
    cout << ans;
    
    return 0;
        
    }