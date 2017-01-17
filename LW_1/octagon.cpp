#include <iostream>
#include "octagon.h"

Octagon::Octagon()
{
	for (std::size_t i = 0u; i < 8u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = 0.0l;
		}
	}
}

Octagon::Octagon(const long double (*coor)[2u])
{
	for (std::size_t i = 0u; i < 8u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = coor[i][j];
		}
	}
}

Octagon::Octagon(const Octagon& origin)
{
	for (std::size_t i = 0u; i < 8u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = origin.vertex[i][j];
		}
	}
}

Octagon::Octagon(std::istream &is)
{
	for (std::size_t i = 0u; i < 8u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			is >> vertex[i][j];
		}
	}
}

long double Octagon::Square()
{
	return area(vertex, 8u);
}

void Octagon::Print()
{
	for (std::size_t i = 0u; i < 8u; i++)
	{
		std::cout << '(' << vertex[i][0u] << ", "<< vertex[i][1u] << ")\n";
	}
}