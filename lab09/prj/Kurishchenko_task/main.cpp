#include "sample_module.h"

int main()
{
    Dev_info();

    char picked_sym;
    bool repeat = 1;

    cout << "\ns - s_calculator     \n";
    cout << "f - ffun_cal_discount  \n";
    cout << "g - sfun_male_sizes    \n";
    cout << "h - tfun_bin_count     \n";
    cout << "J,j - close the program\n";

    while (repeat == true){
    cout << "Enter the symbol: ";
    cin >>  picked_sym;
    switch (picked_sym){
        case 's':{
            float x, z, y;
            cout << "Enter three numbers: ";
            cin >> x >> y >> z;
            s_calculator(x, y, z);
            break;
        }
        case 'f':{
            float purc_sum = 0;
            cout << "Enter the purchase amount: ";
            cin >> purc_sum;
            ffun_cal_discount(purc_sum);
            break;
        }
        case 'g':{
            int uw_size = 0;
            cout << "Enter men's underwear size (44 - 54) in Ukrainian system: ";
            cin >> uw_size;
            sfun_male_sizes(uw_size);
            break;
        }
        case 'h':{
            int number = 0;
            cout << "Enter a natural number from 0 to 190550: ";
            cin >> number;
            tfun_bin_count(number);
            break;
        }
        case 'J':
        case 'j':
            return 0;
        default:
            cout << "\a";
    }
    }
}

