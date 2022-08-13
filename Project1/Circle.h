#pragma once
#include <iostream>
#include "point.h"
using namespace std;
class Circle
{
public:
	void SetR(int R);

	int GetR();

	void SetCenter(point center);

	point GetCenter();

private:
	int r;
	point Center;
};