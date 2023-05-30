#include <iostream>
#include "MultipleChoiceQuestion.h"

MultipleChoiceQuestion::MultipleChoiceQuestion()
{
	points = 0;
}

MultipleChoiceQuestion::MultipleChoiceQuestion(std::string _question, std::vector<std::string> _statements, std::vector<bool> _correctStatements, int _points)
{
	question = _question;
	statements = _statements;
	correctStatements = _correctStatements;
	points = _points;

	int size = statements.size() < correctStatements.size() ? statements.size() : correctStatements.size();

	statements.resize(size);
	correctStatements.resize(size);
}

void MultipleChoiceQuestion::ask()
{
	std::string ans;
	std::cout << "Question: " << question << std::endl;
	for (int i = 0; i < statements.size(); i++)
	{
		std::cout << "Statement "<< i+1 << ": " << statements[i] << std::endl;
		do
		{
			std::cout << "Answer: ";
			std::cin >> ans;
			if (validYesNoAnswer(ans))
			{
				answers.push_back(ans);
				break;
			}
			std::cout << "Invalid answer!\n";

		} while (true);
	}
	std::cout << "Points: " << grade(ans) << std::endl;
}

void MultipleChoiceQuestion::print() const
{
	std::cout << "Qeustion: " << question << std::endl;
	for (int i = 0; i < statements.size(); i++)
	{
		std::cout << "Statement " << i + 1 << ": " << statements[i] << std::endl;
	}
}

int MultipleChoiceQuestion::grade(const std::string& ans) const
{
	int score = 0;
	int correctCount = 0;
	for (int i = 0; i < correctStatements.size(); i++)
	{
		if (correctStatements[i])
		{
			correctCount++;
		}
	}
	int wrongCount = correctStatements.size() - correctCount;


	for (int i = 0; i < correctStatements.size(); i++)
	{
		if ((correctStatements[i] && ans == YES) || (!correctStatements[i] && ans == NO))
		{
			score += points / correctCount;
		}

		score -= points / wrongCount;
	}

	return score;
}
