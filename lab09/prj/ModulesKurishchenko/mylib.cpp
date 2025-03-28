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

void ffun_cal_discount(float purc_sum){
    int discount = 0;
    if (purc_sum <= 0){
        cout << "Error: entered value less than one\n";
        return;
    }
    if (purc_sum <= 100) discount = 5;
    else if (purc_sum <= 200 && purc_sum > 100) discount = 7;
    else if (purc_sum <= 300 && purc_sum > 200) discount = 9;
    else if (purc_sum <= 400 && purc_sum > 300) discount = 12;
    else if (purc_sum <= 500 && purc_sum > 400) discount = 15;
    else if (purc_sum <= 1000 && purc_sum > 500) discount = 20;
    else discount = 25;
    cout << "Your discount in percent is " << discount << "%\n";
    cout << "Your discount in hryvnia is " << discount * purc_sum / 100 << " uah\n";
    cout << "Your purchase amount with discount is " << purc_sum - (discount * purc_sum / 100) << "\n";
}

void sfun_male_sizes(int uw_size){
    switch (uw_size){
        case 44:
            cout << "Your size in International system: S\n";
            cout << "Your size in UK system: 34\n";
            cout << "Your size in French system: 2\n";
            break;
        case 46:
            cout << "Your size in International system: M\n";
            cout << "Your size in UK system: 36\n";
            cout << "Your size in French system: 3\n";
            break;
        case 48:
            cout << "Your size in International system: L\n";
            cout << "Your size in UK system: 38\n";
            cout << "Your size in French system: 4\n";
            break;
        case 50:
            cout << "Your size in International system: XL\n";
            cout << "Your size in UK system: 40\n";
            cout << "Your size in French system: 5\n";
            break;
        case 52:
            cout << "Your size in International system: XXL\n";
            cout << "Your size in UK system: 42\n";
            cout << "Your size in French system: 6\n";
            break;
        case 54:
            cout << "Your size in International system: XXXL\n";
            cout << "Your size in UK system: 44\n";
            cout << "Your size in French system: -\n";
            break;
        default:
            cout << "Error: entered a non-existing men's underwear size (44 - 54) in the Ukrainian system\n";
            return;
    }
}

void tfun_bin_count(int number){
    if (number < 0 || number > 190550){
        cout << "Error: value entered is out of range\n";
        return;
    }
    bitset<18> binary(number);
    bool D3 = binary[3];
    int bin_amount = D3 ? (18 - binary.count()) : binary.count();
    cout << "The third bit is " << (D3 ? "one" : "zero")
         << ", then the number of " << (D3 ? "zeros" : "ones")
         << " is " << bin_amount << "\n";
}

void Dev_info()
{
    cout << "+-----------------------+\n";
    cout << "| Pavlo Kurishchenko(c) |\n";
    cout << "|  github.com/movavok   |\n";
    cout << "+-----------------------+\n";
}
