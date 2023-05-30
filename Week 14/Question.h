#include <string>
#ifndef QUESTION_H
#define QUESTION_H

class Question
{
public:
	virtual ~Question();
	virtual void ask() = 0;
	virtual void print() const = 0;
	static bool  validYesNoAnswer(const std::string& ans);
	static bool correctYesNoAnswer(const std::string& ans, bool correct_is_yes);

protected:
	virtual int grade(const std::string& ans) const = 0;
	static const std::string YES;
	static const std::string NO;
};
#endif