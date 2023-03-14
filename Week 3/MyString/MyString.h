#ifndef MY_STRING_H
#define MY_STRING_H

class MyString {
private:
	char* str;
	unsigned strLength;

	void copy(const MyString&);
	void erase();

public:
	MyString();
	MyString(const char* str);
	MyString(MyString const& other);
	~MyString();
	MyString& operator=(MyString const& other);
	int length();
	char& at(unsigned indx);
	int find(char c, unsigned startPos = 0);
	bool empty();
	MyString substr(unsigned pos = 0, unsigned n = 0);
	void append(const MyString& str);
	void print();
};

#endif