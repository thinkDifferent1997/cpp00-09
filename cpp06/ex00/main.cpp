/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elizasikira <elizasikira@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 01:15:56 by elsikira          #+#    #+#             */
/*   Updated: 2026/04/22 01:39:54 by elizasikira      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Usage: ./ScalarConverter [literal 1] [literal 2]" << std::endl;
        return 1;
    }
    for (int i = 1; i < argc; i++)
    {
        std::cout << argv[i] << std::endl;
        ScalarConverter::convert(argv[i]);
        std::cout << std::endl;
    }
    return 0;
}