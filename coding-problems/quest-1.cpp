#include <iostream>
using namespace std;

//Find the missing number in the array:

int missingNumber(int arraySize){
    int vector[arraySize];
    int sumArray = 0;
    
    /**Input the values */
    for(int i = 0; i < arraySize; i++){
        cin >> vector[i];
        sumArray += vector[i];
    }
    
    /**The variable n indicates the array's size. If it's missing just one number, 
     * the original array must have size + 1**/
    int n = arraySize + 1;

    int sum_of_numbers = n*(n + 1)/2;

    return sum_of_numbers - sumArray;
}

int main(){
    int arraySize;
    cin >> arraySize;
    cout << missingNumber(arraySize);
    return 0;
}