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
    return S;
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

int low_letters_count(const string& word) { // 10.1(2)
    int count = 0;
    for (char ch : word) {
        string lowercase = "абвгґдеєжзийіклмнопрстуфхцчшщьюя";
        if (lowercase.find(ch) != string::npos) {
            count++;
        }
    }
    return (count / 2);
}

bool is_word_in_poem(const string& word, const string& poem) { // 10.1(3)
    string lowerWord = word, lowerPoem = poem;
    for (char& ch : lowerWord) ch = tolower((unsigned char)ch);
    for (char& ch : lowerPoem) ch = tolower((unsigned char)ch);
    return lowerPoem.find(lowerWord) != string::npos;
}

void ffun_word_searching(const string& inputFile, const string& outputFile) { // 10.1
    ifstream fin(inputFile);
    ofstream fout(outputFile);

    if (!fin.is_open() || !fout.is_open()) {
        cerr << "Не вдалося відкрити файл." << endl;
        return;
    }

    string inputWord;
    fin >> inputWord;

    fout << "Автор: Павло Куріщенко\n";
    fout << "Організація: ЦНТУ\n";
    fout << "Місто/Країна: Кропивницький/Україна\n";
    fout << "Рік розробки: 2025\n\n";

    int fin_low_count = low_letters_count(inputWord);
    fout << "Кількість символів нижнього регістру у слові \"" << inputWord << "\": " << fin_low_count << "\n";

    string poem =
        "В хаті сонячний промінь косо\n"
        "На долівку ляга з вікна...\n"
        "Твої чорні шовкові коси\n"
        "Припорошила вже сивина.";

    bool found = is_word_in_poem(inputWord, poem);
    fout << "Слово \"" << inputWord << "\" " << (found ? "є" : "не є") << " у вірші Василя Симоненка.\n";

    fin.close();
    fout.close();
}

void sfun_swap_case(const string& inputFile, const string& outputFile) { // 10.2

    ifstream fin(inputFile);
    ofstream fout(outputFile, ios::app);

    string swappedWord;
    fin >> swappedWord;

    string lower = "абвгдеєжзиіїйклмнопрстуфхцчшщьюя";
    string upper = "АБВГДЕЄЖЗИІЇЙКЛМНОПРСТУФХЦЧШЩЬЮЯ";

    for (char& ch : swappedWord) {
        size_t pos = lower.find(ch);
        if (pos != string::npos) {
            ch = upper[pos];
        }
        else {
            pos = upper.find(ch);
            if (pos != string::npos) {
                ch = lower[pos];
            }
        }
    }

    time_t now = time(0);
    char* dt = ctime(&now);

    fout << "\nІнверсія регістру: " << swappedWord << endl;
    fout << "Дата та час додавання: " << dt << endl;

    fout.close();
}

void tfun_write_calculations(const string& outputFile){

    ofstream fout(outputFile, ios::app);

    float x, y, z;
    cout << "Введи три дійсних числа(через пробіли): ";
    cin >> x >> y >> z;

    int b = 0;
    cout << "Введи натуральне число для подання у двійковому коді: ";
    cin >> b;

    fout << "\nРезультат обчислення s_calculator: " << s_calculator(x, y, z) << endl;
    fout << "Число b у бінарному представленні: " << bitset<8>(b) << endl;

}

void Dev_info()
{
    cout << "+-----------------------+\n";
    cout << "| Pavlo Kurishchenko(c) |\n";
    cout << "|  github.com/movavok   |\n";
    cout << "+-----------------------+\n";
}
