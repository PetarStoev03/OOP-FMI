#include "OpenQuestion.h"
#include <iostream>

OpenQuestion::OpenQuestion()
{
	points = 0;
}

OpenQuestion::OpenQuestion(std::string _question, int _points)
{
	question = _question;
	points = _points;
}

void OpenQuestion::ask()
{


	std::cout << "Question: " << question << std::endl;
	std::cout << "Max points: " << points << std::endl;
	std::cin >> answer;

	std::cout << "Points: " << grade(answer) << std::endl;
}

void OpenQuestion::print() const
{
	std::cout << "Question: " << question << std::endl;
}

int OpenQuestion::grade(const std::string& ans) const
{
	if (answer == "")
	{
		return 0;
	}

	int score;
	std::cout << "Enter grade: ";
	std::cin >> score;

	return points*score/100;
}
