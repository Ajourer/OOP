#ifndef _FIGURE_H_
#define _FIGURE_H_

#include <iostream>

long double dot_product(long double [], long double []);
long double cross_product(long double [], long double []);
long double area(long double (*)[2u], std::size_t);

class Figure
{
public:
	virtual long double Square() = 0;
	virtual void Print() = 0;
	virtual ~Figure() {};
};

#endif