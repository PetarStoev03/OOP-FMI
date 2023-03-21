#include "ShoeShop.h"

void ShoeShop::copy(const ShoeShop& other) {
	modelCount = other.modelCount;
	maxModelCount = other.maxModelCount;

	shoes = new Shoe[maxModelCount];
	for (int i = 0; i < maxModelCount; i++)
	{
		shoes[i] = other.shoes[i];
	}
}

void ShoeShop::destroy() {
	delete[] shoes;
	shoes = nullptr;

	int modelCount = 0;
	int maxModelCount = 0;
}

ShoeShop::ShoeShop(int maxModelCountData) {
	maxModelCount = maxModelCountData;
	modelCount = 0;
	maxModelCount = 0;

	shoes = new Shoe [maxModelCount];
}

ShoeShop::ShoeShop(ShoeShop const& other) {
	copy(other);
}

ShoeShop& ShoeShop::operator=(ShoeShop const& other) {
	if (this != &other)
	{
		destroy();
		copy(other);
	}

	return *this;
}

ShoeShop::~ShoeShop() {
	destroy()
}

void ShoeShop::AddNewShoe(const Shoe& shoe) {

}

void ShoeShop::SellShoe(std::string model) {

}

void ShoeShop::AddShoeCount(std::string model) {

}

void ShoeShop::ChangeModelRating(std::string model) {

}

void ShoeShop::RemoveModel(std::string model) {

}

void ShoeShop::ReadFromFile(std::string fileName) {

}
void ShoeShop::WriteToFile(std::string fileName) {

}