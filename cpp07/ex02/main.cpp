/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <elsikira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 23:07:07 by elsikira          #+#    #+#             */
/*   Updated: 2026/05/01 23:08:06 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
	Array<int> original(5);
	original[0] = 42;

	Array<int> copy = original; // Calls Copy Constructor
	copy[0] = 100;              // Change the copy

	std::cout << "Original: " << original[0] << std::endl; // Should be 42
	std::cout << "Copy: " << copy[0] << std::endl;         // Should be 100
}
