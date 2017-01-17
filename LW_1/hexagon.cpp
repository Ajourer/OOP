#include <iostream>
#include "hexagon.h"

Hexagon::Hexagon()
{
	for (std::size_t i = 0u; i < 6u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = 0.0l;
		}
	}
}

Hexagon::Hexagon(const long double (*coor)[2u])
{
	for (std::size_t i = 0u; i < 6u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = coor[i][j];
		}
	}
}

Hexagon::Hexagon(const Hexagon& origin)
{
	for (std::size_t i = 0u; i < 6u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = origin.vertex[i][j];
		}
	}
}

Hexagon::Hexagon(std::istream &is)
{
	for (std::size_t i = 0u; i < 6u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			is >> vertex[i][j];
		}
	}
}

long double Hexagon::Square()
{
	return area(vertex, 6u);
}

void Hexagon::Print()
{
	for (std::size_t i = 0u; i < 6u; i++)
	{
		std::cout << '(' << vertex[i][0u] << ", "<< vertex[i][1u] << ")\n";
	}
}