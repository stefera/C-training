#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    int number = 10;
    int guess;
    int count = 0;

    while (number != guess && count < 3){
        cout << "enter guess: ";
        cin >> guess;
        count++;
    }

    if (count > 2){ 
        cout << "you lose";
        }
        else{
        cout << "you win";
        }
    return 0;
    }
