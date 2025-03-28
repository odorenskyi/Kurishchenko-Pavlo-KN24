#include "sample_module.h"

int main()
{
    float purc_sum = 0;
    cout << "Enter the purchase amount: ";
    cin >> purc_sum;

    ffun_cal_discount(purc_sum);

    int uw_size = 0;
    cout << "Enter men's underwear size (44 - 54) in Ukrainian system: ";
    cin >> uw_size;

    sfun_male_sizes(uw_size);

    int number = 0;
    cout << "Enter a natural number from 0 to 190550: ";
    cin >> number;

    tfun_bin_count(number);


    return 0;
}
