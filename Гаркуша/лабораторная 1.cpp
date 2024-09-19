#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, s, S, V;
	cout << "Введите значение ребра куба" << endl;
	cin >> a;
	s = pow(a,2);
	S = a * a * 6;
	V = pow(a,3);
	cout << "s = " << s << "\nS = " << S << "\nV = " << V << endl;
	return 0;
}