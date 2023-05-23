#include <string>
#ifndef PROPERTY_H
#define PROPERTY_H

class Property
{
public:
	Property();
	Property(std::string _owner, bool _tangible);
	virtual ~Property();
	std::string getOwner() const;
	bool getTagible() const;
	
private:
	std::string owner;
	bool tangible;
};

#endif
