#include <iostream>

int power(int n, int deg)
{
	if (deg == 0)
		return 1;
	
	if (deg == 1)
		return n;

	double temp = n;
	for (int i = 1; i < abs(deg); i++)
		n *= temp;
	return n;
}

int main()
{
	return 0;
}

