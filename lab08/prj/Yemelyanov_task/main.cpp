#include <iostream>
#include <clocale>
#include "ModulesYemelyanov.h"
using namespace std;

// ������� ��� ���������� �������� S
int s_calculation(int x, int y, int z) {
    // ��� ��� ��� ���������� �������� S
    return x + y + z;
}

int main() {

    setlocale(LC_ALL, "ukr");

    int x, y, z;
    char a, b;

    // �������� ����� �� �������
    std::cout << "����i�� ����� X, Y, Z: ";
    std::cin >> x >> y >> z;
    std::cout << "����i�� ������� A i B: ";
    std::cin >> a >> b;

    // ��������� ������� �� ���� ����������
    std::cout << "��i����� �� i�'� ����������: � ��������� �������" << std::endl;

    // ��������� ���������� �������� ������
    bool result = (a + 7 == b);
    std::cout << "��������� ���i����� ������: " << (result ? "true" : "false") << std::endl;

    // ��������� ������� x, y, z � ��������� �� �������������� �������� ��������
    std::cout << "�������� x, y, z (���������): " << x << ", " << y << ", " << z << std::endl;
    std::cout << "�������� x, y, z (�i������������): " << std::hex << x << ", " << y << ", " << z << std::dec << std::endl;

    // ������ ������� s_calculation() �� ��������� �������� S
    int s = s_calculation(x, y, z);
    std::cout << "�������� S: " << s << std::endl;

    return 0;
}



