#include <string>
#ifndef BASE_PERSON_H
#define BASE_PERSON_H

class BasePerson
{
public:
	virtual BasePerson* clone() const = 0;
	BasePerson() = default;
	virtual ~BasePerson() = default;
	virtual void displayInfo() = 0;
 
protected:
	std::string name;
	static int egn;

	BasePerson(const std::string& _name);
};
#endif // !BASE_PERSON_H
