#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

int main() {
	string a; //����� ������� �����
	string b; //������� ����� � �������� �������
	int base1; //��������� ������� ��������� ���������� �����
	int base2; //��������� ������� ���������, � ������� ����� ���������
	int rest, save;
	int semiOtvet = 0; //����� � 10 ������� ���������
	string otvet; //����� 

	setlocale(LC_ALL, "RUS"); //���������
	cout << "������� ��������� ������� ���������: \n";
	cin >> base1;
	cout << "������� ����� � ���� ������� ���������: \n";
	cin >> a;
	cout << "������� ��������� ������� ���������, � ������� ����� ���������: \n";
	cin >> base2;

	//������ ����� � �������� �������
	for (int k = a.size() - 1; k >= 0; k--) {
		char ch = a[k];
		b += ch;
	}

	for (int i = 0; i < b.size(); i++) {
		//������� ��������� ������� ��������� � ������� ������� �����
		int st = 1;
		for (int j = i; j > 0; j--) {
			st *= base1;
		}
		//������� � 10 ������� ���������
		if (b[i] - '0' > 9) {
			semiOtvet += (b[i] - 'A' + 10) * st;
		}
		else {
			semiOtvet += (b[i] - '0') * st;
		}
	}
	cout << "����� � ���������� ������� ���������: " << semiOtvet << endl;

	//������� �� 10 ������� ��������� � ��������
	while (semiOtvet >= base2) {
		save = semiOtvet;
		semiOtvet = save / base2;
 		rest = save - semiOtvet * base2;
		if (rest > 9) {
			otvet += rest - 10 + 'A';
		}
		else
			otvet += rest + '0';
	}
	if (semiOtvet > 9) {
		otvet += semiOtvet - 10 + 'A';
	}
	else
		otvet += semiOtvet + '0';
	//����������� �������� � �������� �������
	cout << "����� � ������� ��������� � ���������� " << base2 << " : ";
	for (int i = otvet.size(); i >= 0; i--) {
		char digit = otvet[i];
		cout << digit;
	}
	return 0;
}