#ifndef _HEXAGON_H_
#define _HEXAGON_H_

#include <iostream>
#include "Figure.h"

class Hexagon : public Figure
{
	long double vertex[6u][2u];
public:
	Hexagon();
	Hexagon(const long double (*coor)[2u]);
	Hexagon(const Hexagon& orig);
	Hexagon(std::istream &is);

	long double Square() override;
	void Print() override;

	virtual ~Hexagon() {};
};

#endif