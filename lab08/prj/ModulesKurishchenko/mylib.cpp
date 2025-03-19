#include <iostream>
#include <math.h>

using namespace std;

float s_calculator(float x, float y, float z)
{
    float S;

    if(x <= y){
        cout << "Error: log(x - y) is undefined (x must be greater than y).\n";
    }
    else if(x + (z / 2) * pow(y, 2) == 0){
        cout << "Error: Division by zero.\n";
    }
    else{
        S = log(x - y) + sqrt((M_PI * pow(x, 2))/(x + (z / 2 * pow(y, 2))));
        cout << "Your result is " << S;
    }
}

void Dev_info()
{
    cout << "+-----------------------+\n";
    cout << "| Pavlo Kurishchenko(c) |\n";
    cout << "|  github.com/movavok   |\n";
    cout << "+-----------------------+\n";
}
