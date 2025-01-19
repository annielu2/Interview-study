#include <iostream>
#include <vector>
using namespace std;

int Solution(const vector<int> &A, const vector<int> &B){
    int n_stations = A.size();
    int startStation = -1;
    int fuel = 0;
    
    bool going = false;
    
    //Going
    for(int i = 0; i < n_stations; i++){
        fuel += A[i];
        
        if(fuel < B[i]){
            fuel = 0;
            going = false;
            startStation = -1;
        }
        
        else{
            if(!going){
                startStation = i;
            }
            fuel -= B[i];
            going = true;
        }
    }
    //Back
    if(startStation > -1){
        for(int i = 0; i < startStation; i++){
            fuel += A[i];
            if(fuel < B[i]){
                return -1;
            } else{
                fuel -= B[i];
            }
        }
    }

    return startStation;
    
}

int main(){

    vector<int> A = {1, 2, 3, 1};
    vector<int> B = {1, 5, 2, 1};
    
    int startStation = Solution(A, B);
    cout << startStation;

    return 0;
}