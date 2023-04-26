#include <iostream>
#include <cmath>

using namespace std;

string getDayOfWeek (int dayNum){
    string dayName;

    switch (dayNum){
        case 0: dayName = "Monday";
        break;
                case 1: dayName = "Tuesday";
        break;
                case 2: dayName = "Wednesday";
        break;
                case 3: dayName = "Thursday";
        break;
                case 4: dayName = "Friday";
        break;
                case 5: dayName = "Saturday";
        break;
                case 6: dayName = "Sunday";
        break;

    }


    return dayName;
}

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

    cout << getDayOfWeek(2);

     return answer;
    
    }
