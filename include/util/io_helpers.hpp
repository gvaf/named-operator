#ifndef UTIL_IO_HELPERS_HPP
#define UTIL_IO_HELPERS_HPP

#include <iostream>
#include <vector>
#include <utility>
#include <cstdlib>

template <typename T>
inline std::ostream& operator <<(std::ostream& out, std::pair<T, T> const& rhs) 
{
    return out << '<' << rhs.first << ", " << rhs.second << '>';
}

template <typename T>
inline std::ostream& operator <<(std::ostream& out, const std::vector<T> & rhs) 
{
    out << '[';

    bool first = true;

    for (auto&& x : rhs) 
    {
        if (first)
        {
        	first = false;
        }
        else        
        {
        	out << ", ";
        }

         out << x;
    }

    out << ']';

	return out;
}

#endif // UTIL_IO_HELPERS_HPP
