// Boost.Assign library
//
//  Use, modification and
//  distribution is subject to the Boost Software License, Version
//  1.0. (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//
// For more information, see http://www.boost.org/libs/assign/

#include <boost/assign/list_of.hpp>
#include <list>

// from: https://svn.boost.org/trac10/ticket/12538
int main()
{
    std::list<int> l;
    l = boost::assign::list_of(1)(2);
}
