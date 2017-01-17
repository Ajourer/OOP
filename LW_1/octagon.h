#ifndef _OCTAGON_H_
#define _OCTAGON_H_

#include <iostream>
#include "Figure.h"

class Octagon : public Figure
{
	long double vertex[6u][2u];
public:
	Octagon();
	Octagon(const long double (*coor)[2u]);
	Octagon(const Octagon& orig);
	Octagon(std::istream &is);

	long double Square() override;
	void Print() override;

	virtual ~Octagon() {};
};

#endif