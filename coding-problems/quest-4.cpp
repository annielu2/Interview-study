#include <iostream>
#include <string>
using namespace std;

int main(){
    string codeNumber;
    cin >> codeNumber;

    int arrayPossibilities[codeNumber.length()];

    arrayPossibilities[0] = 1;

    for(int i = 1; i <= codeNumber.length()-1; i++){
        //Converting chat to int
        string numberBefore = codeNumber.substr(i-1, 2);
        int valueBefore = stoi(numberBefore);

        if(i == 1 and valueBefore <= 26){
            arrayPossibilities[i] = arrayPossibilities[0] + 1;
        }

        else if(i == 1 and valueBefore > 26){
            arrayPossibilities[i] = arrayPossibilities[0];
        }

        else if(i > 1 and valueBefore <= 26){
            arrayPossibilities[i] = arrayPossibilities[i-2] + arrayPossibilities[i-1];
        }

        else{
            arrayPossibilities[i] = arrayPossibilities[i-1];
        }
  
    }

    cout << "All possibilities: " << arrayPossibilities[codeNumber.length()-1];
    
}
