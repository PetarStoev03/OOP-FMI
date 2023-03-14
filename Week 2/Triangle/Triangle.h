#ifndef _TRIANGLE_H
#define _TRIANGKE_H
class Triangle {
	double a;
	double b;
	double c;

public:
	void InitTriangle(double A, double B, double C);

	bool IsRightAngled();
	bool IsIsosceles();
	double TriangleArea();
	double TrianglePerimeter();
	double TriangleHeight();
	double InscribedCircleRadius();
};
#endif
