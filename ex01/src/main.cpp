/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/11/07 16:36:52 by crasche       #+#    #+#                 */
/*   Updated: 2025/06/16 16:34:17 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/span.hpp"

#include <fstream>

// int get_random_int() {
// 	std::ifstream urandom("/dev/urandom", std::ios::in | std::ios::binary);
// 	int num;
// 	urandom.read(reinterpret_cast<char*>(&num), sizeof(num));
// 	return num;
// }

int main(void)
{
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\t Subject test: \n" << RESET;
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\t addRange test: \n" << RESET;
		std::vector<int> vec = {15, 30, 45, 50, 100};
		Span span1 = Span(5);
		span1.addRange(vec.begin(), vec.end());

		std::cout << span1.shortestSpan() << std::endl;
		std::cout << span1.longestSpan() << std::endl;
	}
	{
		std::cout << BRIGHT_GREEN << BOLD << "\n\t Large test: \n" << RESET;
		Span span2 = Span(20000);

		for (int i = 1; i < 20000; i++)
		{
			if (i == 19999)
				span2.addNumber(i);
			else
				span2.addNumber(55555);
		}

		std::cout << span2.shortestSpan() << std::endl;
		std::cout << span2.longestSpan() << std::endl;
	}
	return (0);
}
