#include <iostream>
#include <clocale>
#include "ModulesYemelyanov.h"
using namespace std;

// Функція для обчислення значення S
int s_calculation(int x, int y, int z) {
    // ваш код для обчислення значення S
    return x + y + z;
}

int main() {

    setlocale(LC_ALL, "ukr");

    int x, y, z;
    char a, b;

    // Введення чисел та символів
    std::cout << "Введiть числа X, Y, Z: ";
    std::cin >> x >> y >> z;
    std::cout << "Введiть символи A i B: ";
    std::cin >> a >> b;

    // Виведення прізвища та імені розробника
    std::cout << "Прiзвище та iм'я розробника: © Ємельянов Ярослав" << std::endl;

    // Виведення результату логічного виразу
    bool result = (a + 7 == b);
    std::cout << "Результат логiчного виразу: " << (result ? "true" : "false") << std::endl;

    // Виведення значень x, y, z в десятковій та шістнадцятковій системах числення
    std::cout << "Значення x, y, z (десяткова): " << x << ", " << y << ", " << z << std::endl;
    std::cout << "Значення x, y, z (шiстнадцяткова): " << std::hex << x << ", " << y << ", " << z << std::dec << std::endl;

    // Виклик функції s_calculation() та виведення значення S
    int s = s_calculation(x, y, z);
    std::cout << "Значення S: " << s << std::endl;

    return 0;
}



