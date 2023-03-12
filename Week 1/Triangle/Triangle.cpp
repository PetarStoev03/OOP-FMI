#include <iostream>
#include "Triangle.h"

void Triangle::InitTriangle(double A, double B, double C) {
    a = A;
    b = B;
    c = C;
}

bool Triangle::IsRightAngled() {
    return a * a == b * b + c * c || b * b == c * c + a * a || c * c == b * b + a * a;
}

bool Triangle::IsIsosceles() {
    return a == b || b == c || c == a;
}

double Triangle::TriangleArea() {
    double halfPerimeter = TrianglePerimeter() / 2;

    return sqrt(halfPerimeter * (halfPerimeter - a) * (halfPerimeter - b) * (halfPerimeter - c));
}

double Triangle::TrianglePerimeter() {
    return a + b + c;
}

double Triangle::TriangleHeight() {
    if (a > b && a > c)
    {
        return 2 * TriangleArea() / a;
    }
    else if (b > a && b > c)
    {
        return 2 * TriangleArea() / b;
    }
    else
    {
        return 2 * TriangleArea() / c;
    }
}

double Triangle::InscribedCircleRadius() {
    return (2 * TriangleArea()) / (TrianglePerimeter() / 2);
}
