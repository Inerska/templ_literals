#include "../include/templ_literals/main.hpp"

using namespace templ_lit;

int main()
{
	std::string name{"Adrian"}, name2{"Alex"};
	int pi{3};
	std::cout << templ_lit::t("Hey ", name, " how are u man ?", " wbu ", name2, " ?", pi);
	return 0;
}