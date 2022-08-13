#include <iostream>
#include "point.h"
#include "Circle.h"
using namespace std;
void isinCircle(Circle& c, point& p)
{
	int distance = (c.GetCenter().getX() - p.getX())* (c.GetCenter().getX() - p.getX()) + 
		           (c.GetCenter().getY() - p.getY())* (c.GetCenter().getY() - p.getY());
	int Rdistance = c.GetR() * c.GetR();
	if (distance == Rdistance)
	{
		cout << "在圆上" << endl;
	}
	else if (distance < Rdistance)
	{
		cout << "在圆内" << endl;
	} 
	else
	{
		cout << "在圆外" << endl;
	}
}
int main()
{
	Circle c1;
	c1.SetR(10);
	point p1;
	p1.setX(10);
	p1.setY(0);
	c1.SetCenter(p1);
	point p2;
	p2.setX(10);
	p2.setY(10);
	isinCircle(c1, p2);
	system("pause");
	return 0;
}
//class cube
//{
//public:
//	void setl(int L)
//	{
//		l = L;
//	}
//	int getl()
//	{
//		return l;
//	}
//	void setw(int W)
//	{
//		w = W;
//	}
//	int getw()
//	{
//		return w;
//	}
//	void seth(int H)
//	{
//		h = H;
//	}
//	int geth()
//	{
//		return h;
//	} 
//	int ClaculationAreal()
//	{
//		return h * w * 2 + w * l * 2 + h * l * 2;
//	}
//	int ClaculationVolume()
//	{
//		return h * w * l;
//	}
//private:
//	int h;
//	int w;
//	int l;
// };
//bool IsSame(cube& s1, cube& s2)
//{
//	if (s1.geth() == s2.geth() && s1.getl() == s2.getl() && s1.getw() == s2.getw())
//	{
//		return true;
//	}
//	return false;
//}
//int main()
//{
//	cube s1;
//	s1.setl(10);
//	s1.setw(15);
//	s1.seth(20); 
//	cube s2;
//	s2.setl(10);
//	s2.setw(15);
//	s2.seth(20);
//	bool ret = IsSame(s1, s2);
//	if (ret)
//	{
//		cout << "相等" << endl;
//	}
//	else
//	{
//		cout << "不相等" << endl;
//	}
//	system("pause");
//	return 0;
//}
//class student
//{
//public:
//	string name;
//	int identfy;
//	void behavior()
//	{
//		cout << name << " " << identfy << endl;
//	}
//};
//int main()
//{
//	student s1;
//	s1.name = "nidie";
//	s1.identfy = 1;
//	s1.behavior();
//	system("pause");
//	return 0;
//}
//class Circle
//{
//public:
//	int r;
//	double caclulate()
//	{
//		return 2 * PI * r;
//	}
//};
//int main()
//{
//	Circle c1;
//	c1.r = 10;
//	cout << c1.caclulate() << endl;
//	system("pause");
//	return 0;
//}
//void at()
//{
//	int* arry = new int[10];
//	for (int i = 0; i < 10; i++)
//	{
//		arry[i] = i + 100;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arry[i] << endl;
//	}
//}
//int* func()
//{
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	at();
//	int* p = func();
//	cout << *p << endl;
//}