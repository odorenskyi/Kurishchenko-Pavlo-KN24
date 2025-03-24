#include <iostream>
#include <iomanip>
#include "sample_module.h"

using namespace std;

bool log_eq(char a, char b)
{
    bool answer;
    if (a + 10 >= b){
        answer = true;
    }
    else{
        answer = false;

    }
    return answer;
}

float transf(float x, float y, float z)
{
    cout << "Your numbers in dec: " << x << ", " << y << ", " << z << endl;
    cout << "Your numbers in hex: " << hex << showbase << static_cast<int>(x) << ", " << static_cast<int>(y) << ", " << static_cast<int>(z) << endl;
}

float s_calculator(float x, float y, float z);

int main()
{
    Dev_info();

    float x, y, z;
    char a, b;

    cout << "Enter 2 symbols: ";
    cin >> a >> b;
    cout << "Enter 3 whole numbers: ";
    cin >> x >> y >> z;

    cout << "The result of equation is " << log_eq(a, b) << endl;
    transf(x, y, z);
    cout << "The result of calculation \"S\" is " << s_calculator(x, y, z) << endl;
    return 0;
}
