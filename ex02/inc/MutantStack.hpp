/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MutantStack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: christian.rasche <christian.rasche@stud      +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/09 14:58:12 by christian.r   #+#    #+#                 */
/*   Updated: 2025/06/16 17:24:42 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

# include <iostream>
# include <algorithm>
# include <iterator>
# include <deque>
# include <stack>

template <typename T, class BaseContainer = std::deque<T>>
class MutantStack : public std::stack<T, BaseContainer>
{
	private:
	public:
		// Typedefs for iterator types
		typedef typename BaseContainer::iterator iterator;
		typedef typename BaseContainer::const_iterator const_iterator;
		typedef typename BaseContainer::reverse_iterator reverse_iterator;
		typedef typename BaseContainer::const_reverse_iterator const_reverse_iterator;

		// Default constructor
		MutantStack() : std::stack<T, BaseContainer>() {}

		// Copy constructor
		MutantStack(const MutantStack &other) : std::stack<T, BaseContainer>(other) {}

		// Assignment operator
		MutantStack &operator=(const MutantStack &other) {
			if (this != &other)
				std::stack<T, BaseContainer>::operator=(other);
			return *this;
		}

		// Iterator functions
		iterator begin() {
			return this->c.begin();
		}
		const_iterator begin() const {
			return this->c.begin();
		}
		reverse_iterator rbegin() {
			return this->c.rbegin();
		}
		const_reverse_iterator rbegin() const {
			return this->c.rbegin();
		}

		iterator end() {
			return this->c.end();
		}
		const_iterator end() const {
			return this->c.end();
		}
		reverse_iterator rend() {
			return this->c.rend();
		}
		const_reverse_iterator rend() const {
			return this->c.rend();
		}
};

# define RESET          "\033[0m"
# define BLACK          "\033[30m"
# define WHITE          "\033[37m"
# define BRIGHT_WHITE   "\033[97m"
# define RED            "\033[31m"
# define BRIGHT_RED     "\033[91m"
# define YELLOW         "\033[33m"
# define BRIGHT_YELLOW  "\033[93m"
# define BLUE           "\033[34m"
# define LIGHT_BLUE     "\033[38;5;123m"
# define BRIGHT_BLUE    "\033[94m"
# define MAGENTA        "\033[35m"
# define BRIGHT_MAGENTA "\033[95m"
# define CYAN           "\033[36m"
# define BRIGHT_CYAN    "\033[96m"
# define GREEN          "\033[32m"
# define BRIGHT_GREEN   "\033[92m"
# define GRAY           "\033[90m"
# define LIGHT_GRAY     "\033[37m"
# define DARK_GRAY      "\033[90m"
# define ORANGE         "\033[38;5;208m"
# define PINK           "\033[38;5;213m"
# define PURPLE         "\033[38;5;129m"
# define BOLD           "\033[1m"
# define UNDERLINE      "\033[4m"

#endif // MUTANT_STACK_HPP