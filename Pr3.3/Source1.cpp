// Lab_03_3.cpp
// ����� ���������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 17
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // 
	double R; // 
	double y; // 
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= (-1 - R))
		y = 1;
	else
		if (-1 - R < x && x <= -1)
			y = R * R - ((x + 1) * (x + 1));
		else
			if (-1 < x && x <= 2)
				y = -R;
			else
				if (2 < x && x <= 4)
					y = (-4 * R + R * x) / 2;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}