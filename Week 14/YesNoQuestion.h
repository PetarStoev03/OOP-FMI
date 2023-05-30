#include "Question.h"

#ifndef YES_NO_QUESTION_H
#define YES_NO_QUESTION_H

class YesNoQuestion : public Question
{
public:
	YesNoQuestion();
	YesNoQuestion(std::string _question, int _points, std::string _correctAnswer);
	void ask();
	void print() const;

private:
	int grade(const std::string& ans) const;
	int points;
	std::string answer;
	std::string question;
	std::string correctAnswer;
};
#endif
