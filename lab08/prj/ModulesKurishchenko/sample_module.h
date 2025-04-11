#ifndef SAMPLE_MODULE_H_INCLUDED
#define SAMPLE_MODULE_H_INCLUDED

#include <iostream>
#include <math.h>
#include <bitset>
#include <clocale>
#include <locale>
#include <windows.h>
#include <ctime>
#include <fstream>
#include <string>

using namespace std;

float s_calculator(float x, float y, float z);

void ffun_cal_discount(float purc_sum); // lab9
void sfun_male_sizes(int uw_size);
void tfun_bin_count(int number);

void ffun_word_searching(const string&, const string&); // lab10
bool is_word_in_poem(const string&, const string&);
int low_letters_count(const string&);

void sfun_swap_case(const string&, const string&);

void tfun_write_calculations(const string&);

void Dev_info();

#endif // SAMPLE_MODULE_H_INCLUDED
