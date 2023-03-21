#include "Shoe.h"
#include <string>
#ifndef SHOE_SHOP_H
#define SHOE_SHOP_H


class ShoeShop
{
private:
	Shoe* shoes;
	int modelCount;
	int maxModelCount;

	void copy(const ShoeShop& other);
	void destroy();

public:
	ShoeShop(int maxModelCountData);
	ShoeShop(ShoeShop const& other);
	ShoeShop& operator=(ShoeShop const& other);
	~ShoeShop();
	void AddNewShoe(const Shoe& shoe);
	void SellShoe(std::string model);
	void AddShoeCount(std::string model);
	void ChangeModelRating(std::string model);
	void RemoveModel(std::string model);
	void ReadFromFile(std::string fileName);
	void WriteToFile(std::string fileName);
};

#endif