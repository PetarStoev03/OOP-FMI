#include <vector>
#include <string>
#include "Question.h"
#ifndef MULTIPLE_CHOICE_QUESTION_H
#define MULTIPLE_CHOICE_QUESTION_H

class MultipleChoiceQuestion : public Question
{
public:
	MultipleChoiceQuestion();
	MultipleChoiceQuestion(std::string _question, std::vector<std::string> _statements, std::vector<bool> _correctStatements, int _points);
	void ask();
	void print() const;

private:	
	int grade(const std::string& ans) const;
	std::string question;
	int points;
	std::vector<std::string> statements;
	std::vector<std::string> answers;
	std::vector<bool> correctStatements;
};
#endif
