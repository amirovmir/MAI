#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main() {
    int a; //����� � 10 ������� ���������
    int base; //��������� ������� ���������, � ������� ����� ���������
    int rest, save;
    string otvet;

    setlocale(LC_ALL, "RUS"); //���������
    cout << "������� ����� � ���������� ������� ���������: \n";
    cin >> a;
    cout << "������� ��������� ������� ���������, � ������� ����� ���������: \n";
    cin >> base;

    int numb = a;
    while (numb >= base) {
        save = numb;
        numb = save / base;
        rest = save - numb * base;
        if (rest > 9) {
            otvet += rest - 10 + 'A';
        }
        else
            otvet += rest + '0';
    }
    if (numb > 9) {
        otvet += numb - 10 + 'A';
    }
    else
        otvet += numb + '0';
    for (int i = otvet.size(); i >= 0; i--) {
        char digit = otvet[i];
        cout << digit;
    }
    return 0;
}