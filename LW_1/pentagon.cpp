#include <iostream>
#include "pentagon.h"

Pentagon::Pentagon()
{
	for (std::size_t i = 0u; i < 5u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = 0.0l;
		}
	}
}

Pentagon::Pentagon(const long double (*coor)[2u])
{
	for (std::size_t i = 0u; i < 5u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = coor[i][j];
		}
	}
}

Pentagon::Pentagon(const Pentagon& origin)
{
	for (std::size_t i = 0u; i < 5u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			vertex[i][j] = origin.vertex[i][j];
		}
	}
}

Pentagon::Pentagon(std::istream &is)
{
	for (std::size_t i = 0u; i < 5u; i++)
	{
		for (std::size_t j = 0u; j < 2u; j++)
		{
			is >> vertex[i][j];
		}
	}
}

long double Pentagon::Square()
{
	return area(vertex, 5u);
}

void Pentagon::Print()
{
	for (std::size_t i = 0u; i < 5u; i++)
	{
		std::cout << '(' << vertex[i][0u] << ", "<< vertex[i][1u] << ")\n";
	}
}