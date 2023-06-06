#include<string>
#include<iostream>

#ifndef RELATION_ELEMENT_H
#define RELATION_ELEMENT_H

template <typename T>
class RelationElement
{
public:
	RelationElement() {
		subject = 0;
		object = 0;
		action = "No action";
	}
	RelationElement(T _subject, T _object, std::string _action) {
		subject = _subject;
		object = _object;
		action = _action;
	}
	~RelationElement() {

	}
	RelationElement<T> operator*(const RelationElement<T>& other) {
		if (object != other.subject)
		{
			throw std::exception("Invalid composition");
		}

		RelationElement<T> newRelation;
		newRelation.subject = subject;
		newRelation.object = other.object;
		newRelation.action = action + " " + std::to_string(object) + ", which is " + other.action;

		return newRelation;
	}
	void print() {
		std::cout << subject << " " << action << " " << object << std::endl;
	}

private:
	T subject;
	T object;
	std::string action;
};
#endif // !RELATION_ELEMENT_H