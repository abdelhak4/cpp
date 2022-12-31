//
// Created by Abdelhak El moussaoui on 12/31/22.
//

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>

template <typename T, class container=std::deque<T> >
class	MutantStack : public std::stack<T> {
	public:
		typedef typename container::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};
#endif //MUTANTSTACK_HPP
