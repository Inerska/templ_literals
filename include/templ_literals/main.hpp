#ifndef TEMPL_LITERALS_MAIN_HPP
#define TEMPL_LITERALS_MAIN_HPP

#include <iostream>
#include <string>

namespace templ_lit
{
	//region PROTOTYPES
	template<typename ...T>
	std::string t(T &&...fmt);
	
	template<typename T>
	std::string to_string(const T &arg);
	
	std::string to_string(const std::string &arg);
	
	std::string to_string(const char *arg);
	
	//endregion
	//region DECLARATIONS
	template<typename ...T>
	std::string t(T &&...fmt)
	{
		return (... + templ_lit::to_string(fmt));
	}
	
	/**
	 *
	 * @tparam const T&
	 * @return string conversion from const T&
	 */
	template<typename T>
	std::string to_string(const T &arg)
	{
		return std::to_string(arg);
	}
	
	/**
	 *
	 * @param const std::string&
	 * @return string conversion from const std::string&
	 */
	std::string to_string(const std::string &arg)
	{
		return arg;
	}
	
	/**
	 *
	 * @param const char*
	 * @return string conversion from const char*
	 */
	std::string to_string(const char *arg)
	{
		return arg;
	}
	//endregion
}


#endif //TEMPL_LITERALS_MAIN_HPP
