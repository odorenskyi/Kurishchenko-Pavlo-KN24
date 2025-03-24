#include <iostream>
#include <math.h>
#include "sample_module.h"

using namespace std;

float s_calculator(float x, float y, float z);

int main()
{
    float x, z, y;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    s_calculator(x, y, z);
    return 0;
}
