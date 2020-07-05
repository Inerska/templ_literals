#include "../include/templ_literals/main.hpp"

using namespace templ_lit;

int main(){
	std::string name{"Adrian"}, name2{"Alex"};
	std::cout << templ_lit::t("Hey ", name, " how are u man ?", " wbu ", name2, " ?");
	return 0;
}

template<typename ...T>
std::string templ_lit::t(T&& ...fmt){
	return (... + fmt);
}