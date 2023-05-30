#include "Question.h"

const std::string Question::YES = "yes";
const std::string Question::NO = "no";

Question::~Question()
{
}

bool Question::validYesNoAnswer(const std::string& ans)
{
	return ans == NO || ans == YES;
}

bool Question::correctYesNoAnswer(const std::string& ans, bool correct_is_yes) {
	return (correct_is_yes == true && ans == YES) || (correct_is_yes == false && ans == NO);
}