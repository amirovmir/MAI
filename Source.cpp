#include <iostream>
#include <string>

using namespace std;

int main() {
	string figure;
	cout << "Figures: rectangle, square, circle, rhombus, trapeze, triangle" << endl;
	cout << "Enter figure to count area" << endl;
	cout << "Enter 0 to stop programme ;-)" << endl;
	while (cin >> figure) {
		if (figure == "rectangle") {
			int a, b;
			cout << "Enter sides a & b: ";
			cin >> a >> b;
			cout << "Area of " << figure << " is " << a * b << endl;
		}
		if (figure == "square") {
			int a;
			cout << "Enter the side: ";
			cin >> a;
			cout << "Area of " << figure << " is " << a * a << endl;
		}
		if (figure == "circle") {
			int r;
			cout << "Enter the radius: ";
			cin >> r;
			int S = 3.14 * r * r;
			cout << "Area of " << figure << " is " << S << endl;
		}
		if (figure == "rhombus") {
			int a, b;
			cout << "Enter 2 diagonals: ";
			cin >> a >> b;
			cout << "Area of " << figure << " is " << 0.5 * a * b << endl;
		}
		if (figure == "trapeze") {
			int a, b;
			cout << "Enter side and high: ";
			cin >> a >> b;
			cout << "Area of " << figure << " is " << a * b << endl;
		}
		if (figure == "triangle") {
			int a, b, c;
			cout << "Enter sides a, b & c: ";
			cin >> a >> b >> c;
			int p = (a + b + c) / 2;
			int S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "Area of " << figure << " is " << S << endl;
		}
		if (figure == "0") {
			return 0;
		}
	}
	return 0;
}