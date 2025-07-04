/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/06/13 14:20:30 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"
#include <list>

int main(void)
{
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\ttest with std::vecotr: \n" << RESET;
		std::vector<int> vec = {1, 2, 3, 4, 5};

		try {
			std::cout << BRIGHT_BLUE << BOLD << "easyfind(vec, 3): " << RESET;
			std::cout << easyfind(vec, 3) << std::endl;

			std::cout << BRIGHT_BLUE << BOLD << "easyfind(vec, 6): " << RESET;
			std::cout << easyfind(vec, 6) << std::endl; // This will throw an exception
		} catch (const std::runtime_error &e) {
			std::cerr << BRIGHT_RED << BOLD << "Error: " << e.what() << RESET << std::endl;
		}
		std::cout << BRIGHT_GREEN << BOLD << "\n\tend of tests\n" << RESET;
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\ttest with std::list: \n" << RESET;
		std::list<int> lst = {10, 20, 30, 40, 50};

		try {
			std::cout << BRIGHT_BLUE << BOLD << "easyfind(lst, 30): " << RESET;
			std::cout << easyfind(lst, 30) << std::endl;

			std::cout << BRIGHT_BLUE << BOLD << "easyfind(lst, 60): " << RESET;
			std::cout << easyfind(lst, 60) << std::endl; // This will throw an exception
		} catch (const std::runtime_error &e) {
			std::cerr << BRIGHT_RED << BOLD << "Error: " << e.what() << RESET << std::endl;
		}
		std::cout << BRIGHT_GREEN << BOLD << "\n\tend of tests\n" << RESET;
	}
	return (0);
}
