#pragma once
#include <iostream>
using namespace std;
class point
{
public:
	void setX(int X);

	int getX();

	void setY(int Y);

	int getY();

private:
	int x;
	int y;
};