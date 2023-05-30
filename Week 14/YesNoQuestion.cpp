#include "YesNoQuestion.h"
#include <iostream>

YesNoQuestion::YesNoQuestion()
{
	points = 0;
	correctAnswer = NO;
	question = "Default";
}

YesNoQuestion::YesNoQuestion(std::string _question, int _points, std::string _correctAnswer)
{
	question = _question;
	points = _points;
	correctAnswer = _correctAnswer;
}

void YesNoQuestion::ask()
{
	std::string ans;

	std::cout << "Question: " << question << std::endl;
	do
	{
		std::cout << "Answer: ";
		std::cin >> ans;
		if (validYesNoAnswer(ans))
		{
			answer = ans;
			break;
		}
		std::cout << "Invalid answer!\n";
		
	} while (true);
	

	std::cout << "Points: " << grade(answer) << std::endl;
}

void YesNoQuestion::print() const
{
	std::cout << "Qeustion: " << question << std::endl;
}

int YesNoQuestion::grade(const std::string& ans) const
{
	if (correctYesNoAnswer(ans, ans==YES))
	{
		return points;
	}
	return 0;
}
