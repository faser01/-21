#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	cout << "�������.\n������� ��� ��������: ";
	cin >> x >> y;
	int* px = &x, * py = &y;
	cout << "������� �������������� " << *px << " � " << *py << " = " << (*px + *py) / 2 << endl << endl;


	return 0;
}