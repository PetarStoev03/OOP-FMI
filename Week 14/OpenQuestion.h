#include "Question.h"
#ifndef OPEN_QUESTION_H
#define OPEN_QUESTION_H

class OpenQuestion : public Question
{
public:
	OpenQuestion();
	OpenQuestion(std::string _question, int _points);
	void ask();
	void print() const;

private:
	int grade(const std::string& ans) const;
	std::string answer;
	std::string question;
	int points;
};

#endif // !OPEN_QUESTION_H
