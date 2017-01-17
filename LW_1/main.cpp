#include <iostream>
#include "pentagon.h"
#include "hexagon.h"
#include "octagon.h"

int main()
{
	using namespace std;

	long double matrix[5][2];
	for (size_t i = 0u; i < 5u; i++)
	{
		for (size_t j = 0u; j < 2u; j++)
		{
			cin >> matrix[i][j];
		}
	}

	Figure *ptr = new Octagon(matrix);
	ptr->Print();
	cout << ptr->Square() << endl;
	delete ptr;

	return 0;
}