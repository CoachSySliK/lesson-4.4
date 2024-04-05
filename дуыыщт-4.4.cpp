#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Введите число: ";
	cin >> x;
	x = -x; 
	cout << "Ваше число по модулю равно: " << x;
	return 0;
}
