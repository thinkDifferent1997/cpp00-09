/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 00:25:28 by elsikira          #+#    #+#             */
/*   Updated: 2026/05/04 00:34:16 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);

	try
	{
		std::vector<int>::iterator it = easyfind(myVector, 20);
		std::cout << "Found: " << *it << std::endl;

		easyfind(myVector, 42); // Will throw
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
