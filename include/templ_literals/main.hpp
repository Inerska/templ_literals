#ifndef TEMPL_LITERALS_MAIN_HPP
#define TEMPL_LITERALS_MAIN_HPP

#include <iostream>
#include <cstring>
#include <vector>

namespace templ_lit{
    std::string operator "" _(const char*, unsigned int);
}

#endif //TEMPL_LITERALS_MAIN_HPP
