#include "../../../lab08/prj/ModulesKurishchenko/sample_module.h"

int main()
{
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "uk_UA.UTF-8");

    Dev_info();

    ffun_word_searching("input.txt", "output.txt");
    sfun_swap_case("input.txt", "output.txt");
    tfun_write_calculations("output.txt");
    return 0;
}
