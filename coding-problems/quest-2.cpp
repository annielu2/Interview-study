#include <iostream>
#include <unordered_set>
using namespace std;

bool findSum(int *arrayNumbers, int target){
    unordered_set<int> aux;

    for(int i = 0; i < 5; i++){
        int val = target - arrayNumbers[i];

        if(aux.find(val) != aux.end()){
            return true;
        }

        aux.insert(arrayNumbers[i]);
    }

    return false;
}

int main(){

    int arrayNumbers[5] = {5, 8, 12, 10, 1};
    int target;
    cin >> target;
    cout << findSum(arrayNumbers, target);




    return 0;
}