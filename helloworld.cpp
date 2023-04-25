#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int num1, num2;
    char op;

    cout << "Enter number 1 here: ";
    cin >> num1;

    cout << "Select your operator here: ";
    cin >> op;

    cout << "Enter number 2 here: ";
    cin >> num2;

    int answer;
    if (op == '+'){
        answer = num1 + num2;
    }
    else if (op == '-'){
        answer = num1 - num2;
    }
    else if (op == '*'){
        answer = num1 * num2;
    }
    else if (op == '/'){
        answer = num1 / num2;
    }
    else {
        cout << "Invalid operator added";
    }

     return answer;
    
    }
