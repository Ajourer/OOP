#include <cmath>
#include <cstddef>
#include "figure.h"

long double area(long double (*coor)[2u], std::size_t ver_count)
{
	long double result = 0.0l;
	for (std::size_t i = 1u, j = 2u; j < ver_count; i++, j++)
	{
		long double v1[2] = { coor[i][0u] - coor[0u][0u], coor[i][1u] - coor[0u][1u] },
		            v2[2] = { coor[j][0u] - coor[0u][0u], coor[j][1u] - coor[0u][1u] };
		result += cross_product(v1, v2);
	}

	return result / 2.0l;
}

long double cross_product(long double coor_1[], long double coor_2[])
{
	long double norm_1 = std::sqrt(dot_product(coor_1, coor_1)),
	            norm_2 = std::sqrt(dot_product(coor_2, coor_2));
	long double a = std::acos(dot_product(coor_1, coor_2) / norm_1 / norm_2);
	return norm_1 * norm_2 * std::sin(a);
}

long double dot_product(long double vec_1[], long double vec_2[])
{
	return vec_1[0u] * vec_2[0u] + vec_1[1u] * vec_2[1u];
}