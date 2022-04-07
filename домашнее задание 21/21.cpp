#include <iostream>

using namespace std;



int main() {
	setlocale(LC_ALL, "Russian");

	int x, y;
	cout << "Задание.\nВведите два значения: ";
	cin >> x >> y;
	int* px = &x, * py = &y;
	cout << "Среднее арифметическое " << *px << " и " << *py << " = " << (*px + *py) / 2 << endl << endl;


	return 0;
}