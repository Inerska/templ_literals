#ifndef TEMPL_LITERALS_MAIN_HPP
#define TEMPL_LITERALS_MAIN_HPP

#include <iostream>

namespace templ_lit
{
	template<typename ...T>
	std::string t(T &&...fmt);
}

#endif //TEMPL_LITERALS_MAIN_HPP
