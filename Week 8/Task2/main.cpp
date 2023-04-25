#include <iostream>
#include "TSet.cpp"

int main()
{
	Set<int> set1(20);
	Set<int> set2(5);

	set1.add(10);
	set1.add(10);
	set1.add(9);
	set1.add(8);
	set1.add(7);
	set1.add(6);
	set1.add(5);
	set1.add(4);
	set1.add(3);
	set1.add(2);
	set1.add(1);

	set2.add(1);
	set2.add(2);
	set2.add(3);
	set2.add(4);
	set2.add(5);


	Set<int> set3 = (set1 + set2);

	set3.print();
	std::cout << std::endl;

	bool contains = set2 < set1;
	std::cout << set1[0] << ' ';
	std::cout << contains << ' ';
	std::cout << std::endl;
}