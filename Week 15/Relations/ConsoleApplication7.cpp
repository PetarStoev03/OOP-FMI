#include "RelationElement.h"
#include <iostream>

int main()
{
    RelationElement<int> r1(1, 2, "is smaller than");
    r1.print();
    RelationElement<int> r2(2, 1, "is devisable by");
    r2.print();

    RelationElement<int> r = r1 * r2;
    r.print();
}