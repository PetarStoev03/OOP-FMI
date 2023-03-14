#include "MyString.h"
#include <cstring>
#include <exception>

void MyString::copy(const MyString& other)
{
	strLength = other.strLength;
	str = new char[strLength];
	for (int i = 0; i < strLength; i++)
	{
		str[i] = other.str[i];
	}
}

void MyString::erase()
{
	delete[] str;
}

MyString::MyString() : str(nullptr), strLength(0) {

}

MyString::MyString(const char* str) {
	strLength = strlen(str);
	this->str = new char[strLength];

	for (int i = 0; i < strLength; i++)
	{
		this->str[i] = str[i];
	}
}

MyString::MyString(MyString const& other) {
	copy(other);
}

MyString& MyString::operator=(MyString const& other) {
	if (this != &other)
	{
		erase();
		copy(other);
	}

	return *this;
}

MyString::~MyString() {
	erase();
}

int MyString::length() {
	return strLength;
}

char& MyString::at(unsigned indx) {
	if (indx > strLength || indx < 0)
	{
		throw std::exception("Index out of bounds");
	}

	return str[indx];
}

int MyString::find(char c, unsigned startPos = 0) {
	for (int i = 0; i < startPos; i++)
	{
		if (c == str[i])
		{
			return i;
		}
	}

	return -1;
}

bool MyString::empty() {
	return strLength == 0;
}

MyString MyString::substr(unsigned pos = 0, unsigned n = 0) {
	if (pos > strLength)
	{
		throw std::exception("Index out of bounds");
	}

	if (pos + n > length())
	{

	}
}