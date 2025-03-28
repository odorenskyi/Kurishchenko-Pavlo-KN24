#include "sample_module.h"

float s_calculator(float x, float y, float z)
{
    float S;

    if (x <= y){
        cout << "Error: log(x - y) is undefined (x must be greater than y).\n";
    }
    else if (x + (z / 2) * pow(y, 2) == 0){
        cout << "Error: Division by zero.\n";
    }
    else{
        S = log(x - y) + sqrt((M_PI * pow(x, 2))/(x + (z / 2 * pow(y, 2))));
        cout << "Your result is " << S;
    }
}

int ffun_cal_discount(float purc_sum){
    int discount = 0;
    if (purc_sum <= 0){
        cout << "Enter the purchase amount\n";
        return ffun_cal_discount(purc_sum);
    }
    if (purc_sum <= 100) discount = 5;
    if (purc_sum <= 200) discount = 7;
    if (purc_sum <= 300) discount = 9;
    if (purc_sum <= 400) discount = 12;
    if (purc_sum <= 500) discount = 15;
    if (purc_sum <= 1000) discount = 20;
    else discount = 25;
    return discount;
}

void Dev_info()
{
    cout << "+-----------------------+\n";
    cout << "| Pavlo Kurishchenko(c) |\n";
    cout << "|  github.com/movavok   |\n";
    cout << "+-----------------------+\n";
}
