#include <iostream>
#include <cmath>

using namespace std;



int main(){
    
        int numberGrid[2][2] = {
                                {1,2},
                                {3,4}
        };
        // cout << numberGrid[0][1];

for (int i = 0; i < 2; i++){
    for (int a = 0; a < 2; a++){
        cout << numberGrid[i][a];
    }
    cout << endl;
}

    return 0;
    }
