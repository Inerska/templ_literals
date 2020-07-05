#include "../include/templ_literals/main.hpp"

using namespace templ_lit;

int main()
{
	std::string name{"Adrian"};
	std::cout << "Hello $.name"_ << std::endl;
	return 0;
}

std::string templ_lit::operator "" _(const char *sentence, size_t len)
{
	std::string str_sentence{sentence};
	for (unsigned int i = 0; i < len; ++i)
	{
		if (str_sentence[i] == '$' && str_sentence[i + 1] == '.')
		{
			
		}
	}
	return "";
}
