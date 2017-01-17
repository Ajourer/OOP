#ifndef _PENTAGON_H_
#define _PENTAGON_H_

#include <iostream>
#include "Figure.h"

class Pentagon : public Figure
{
	long double vertex[5u][2u];
public:
	Pentagon();
	Pentagon(const long double (*coor)[2u]);
	Pentagon(const Pentagon& orig);
	Pentagon(std::istream &is);

	long double Square() override;
	void Print() override;

	virtual ~Pentagon() {};
};

#endif