#include <iostream>
#include <unordered_map>
#include <unordered_set>
#include <cmath>
using namespace std;

int *findMajorityNumber(int *arrayNumbers, int arraySize){

    //We're creating a hashmap to use for search repeated values in the array
    //In this case, we can find the values using a O(1) complexity instead of using O(n)
    unordered_map<int, int> searchValue;

    //This part have a complexity of O(n)
    for(int i = 0; i < arraySize; i++){
        if(searchValue.find(arrayNumbers[i]) != searchValue.end()){
            searchValue[arrayNumbers[i]]++;
        }

        else{
            searchValue[arrayNumbers[i]] = 1;
        }

        if(searchValue[arrayNumbers[i]] > floor(arraySize/2)){
            return &arrayNumbers[i];
        }
    }

    return nullptr;

}

int main(){
    int arraySize;
    cin >> arraySize;

    int arrayNumbers[arraySize];

    for(int i = 0; i < arraySize; i++){
        cin >> arrayNumbers[i];
    }

    int *majority = findMajorityNumber(arrayNumbers, arraySize);

    if(majority != nullptr){
        cout << "The majority number is: " << *majority << endl;
    } else{
        cout << "This array doesn't have a majority number" << endl;
    }

}