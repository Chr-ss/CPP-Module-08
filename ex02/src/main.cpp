/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/06/16 17:23:22 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"

int main(void)
{
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tSimple tests: \n" << RESET;
		MutantStack<int> stack1;
		std::cout << BRIGHT_BLUE << BOLD << "Member functions: " << RESET << std::endl;
		std::cout << "empty: " << stack1.empty() << std::endl;
		stack1.push(10);
		stack1.push(20);
		stack1.push(30);
		stack1.push(40);
		stack1.push(50);
		std::cout << "empty: " << stack1.empty() << std::endl;
		std::cout << "top: " << stack1.top() << std::endl;
		std::cout << "size: " << stack1.size() << std::endl;
		stack1.pop();
		std::cout << "size: " << stack1.size() << std::endl;




		std::cout << BRIGHT_BLUE << BOLD << "Iterating through stack: " << RESET << std::endl;
		stack1.push(100);
		stack1.push(200);
		stack1.push(300);
		stack1.push(0);
		MutantStack<int>::iterator it = stack1.begin();
		MutantStack<int>::iterator ite = stack1.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(stack1);
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\tSubject tests: \n" << RESET;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);

		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	return (0);
}
